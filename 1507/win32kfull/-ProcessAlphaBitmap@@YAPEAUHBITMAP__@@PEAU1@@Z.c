/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0091AE0
 * Callers:
 *     _SetCursorIconData @ 0x1C0091DB4 (_SetCursorIconData.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C0016330 (GreGetDIBitsInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C0098254 (GreCreateDIBitmapReal.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C02B8CFC (GreDecBitmapExclusiveRefCnt.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HSURF a1)
{
  LONG v3; // ebx
  unsigned int v4; // r14d
  HDC v5; // rcx
  __int64 DIBitmapReal; // rdi
  unsigned int *v7; // rbx
  int DIBitsInternal; // esi
  unsigned int v9; // edx
  unsigned int v10; // ecx
  _BYTE *v11; // rax
  __int64 v12; // r10
  unsigned int v13; // ecx
  unsigned int v14; // [rsp+38h] [rbp-61h]
  __int64 v15; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int16 v16[2]; // [rsp+78h] [rbp-21h] BYREF
  LONG v17; // [rsp+7Ch] [rbp-1Dh]
  LONG v18; // [rsp+80h] [rbp-19h]
  __int16 v19; // [rsp+88h] [rbp-11h]
  __int16 v20; // [rsp+8Ah] [rbp-Fh]
  tagBITMAPINFO v21; // [rsp+98h] [rbp-1h] BYREF

  if ( !a1 )
    return 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1, 32, v16) || v19 != 1 || v20 != 32 )
    return 0LL;
  v3 = v17;
  memset(&v21, 0, sizeof(v21));
  v4 = v18;
  v5 = *(HDC *)(gpDispInfo + 24LL);
  v21.bmiHeader.biSize = 40;
  v21.bmiHeader.biWidth = v17;
  v21.bmiHeader.biHeight = v18;
  *(_QWORD *)&v21.bmiHeader.biPlanes = 2097153LL;
  DIBitmapReal = GreCreateDIBitmapReal(v5, 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, (__int64)&v15);
  if ( DIBitmapReal )
  {
    v21.bmiHeader.biWidth = v3;
    memset(&v21.bmiHeader.biSizeImage, 0, 24);
    v21.bmiHeader.biSize = 40;
    v21.bmiHeader.biHeight = v4;
    *(_QWORD *)&v21.bmiHeader.biPlanes = 2097153LL;
    v14 = v4 * (((32 * v3 + 31) >> 3) & 0xFFFFFFFC);
    v7 = (unsigned int *)v15;
    DIBitsInternal = GreGetDIBitsInternal(
                       *(HDC *)(gpDispInfo + 24LL),
                       a1,
                       0,
                       v4,
                       (unsigned __int8 *)v15,
                       &v21,
                       0,
                       v14,
                       0x28u);
    if ( DIBitsInternal )
    {
      DIBitsInternal = 0;
      v9 = v21.bmiHeader.biWidth * v21.bmiHeader.biHeight;
      v10 = 0;
      if ( v21.bmiHeader.biWidth * v21.bmiHeader.biHeight )
      {
        v11 = (char *)v7 + 3;
        while ( !*v11 )
        {
          ++v10;
          v11 += 4;
          if ( v10 >= v9 )
            goto LABEL_14;
        }
        DIBitsInternal = 1;
      }
LABEL_14:
      if ( DIBitsInternal && v9 )
      {
        v12 = v9;
        do
        {
          v13 = *v7++;
          *((_BYTE *)v7 - 2) = -(char)(HIBYTE(v13) * BYTE2(v13));
          *((_BYTE *)v7 - 3) = -(char)(HIBYTE(v13) * BYTE1(v13));
          *((_BYTE *)v7 - 4) = (int)(HIBYTE(v13) * (unsigned __int8)v13) / 255;
          --v12;
        }
        while ( v12 );
      }
    }
    GreDecBitmapExclusiveRefCnt(DIBitmapReal);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
