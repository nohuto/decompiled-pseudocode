/*
 * XREFs of ?GetCursorHeight@@YAHXZ @ 0x1C0150204
 * Callers:
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014FB78 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     _InternalGetIconInfo @ 0x1C003C054 (_InternalGetIconInfo.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreGetBitmapBits @ 0x1C00FBF74 (GreGetBitmapBits.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 GetCursorHeight(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  int v3; // r8d
  int v4; // eax
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+40h] [rbp-C0h]
  HSURF v13; // [rsp+48h] [rbp-B8h]
  __int64 v14; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v15[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+5Ch] [rbp-A4h]
  int v17; // [rsp+60h] [rbp-A0h]
  _WORD v18[128]; // [rsp+80h] [rbp-80h] BYREF

  v0 = 16;
  v10 = 0;
  v1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 328LL);
  if ( v1 && (unsigned int)InternalGetIconInfo(v1, (__int64)v11, 0LL, 0LL, 0LL, 0) )
  {
    if ( (unsigned int)GreExtGetObjectW((struct HLFONT__ *)v13, 32, v15)
      && (unsigned int)GreGetBitmapBits(v13, 0x100u, v18, &v10) )
    {
      v2 = (unsigned __int64)(v16 * v17) >> 4;
      if ( v14 )
      {
        v3 = 0;
      }
      else
      {
        v3 = v2 - 1;
        LODWORD(v2) = (int)v2 / 2;
      }
      if ( (unsigned __int64)(int)v2 >= 0x80 )
        LODWORD(v2) = 127;
      v4 = (unsigned __int64)v3 < 0x80 ? v3 : 0;
      v5 = v2 - 1;
      v6 = v5;
      if ( v5 >= 0 )
      {
        v7 = v4;
        do
        {
          if ( v7 )
          {
            if ( v18[v7--] )
              break;
          }
          if ( v18[v6] != 0xFFFF )
            break;
          --v5;
          --v6;
        }
        while ( v6 >= 0 );
      }
      v0 = 16LL * (v5 + 1) / (unsigned __int64)v16 - v12;
    }
    if ( v14 )
      GreDeleteObject(v14);
    if ( v13 )
      GreDeleteObject(v13);
  }
  return v0;
}
