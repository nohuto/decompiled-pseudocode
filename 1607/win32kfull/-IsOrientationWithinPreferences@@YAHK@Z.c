/*
 * XREFs of ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01C9974
 * Callers:
 *     xxxAutoRotateScreen @ 0x1C01CA304 (xxxAutoRotateScreen.c)
 * Callees:
 *     ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C000E4E8 (-GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00EC148 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

__int64 __fastcall IsOrientationWithinPreferences(int a1)
{
  struct tagPROCESSINFO *ActivePpi; // rax
  int v3; // ecx
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // edi
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  ActivePpi = GetActivePpi();
  v4 = 0;
  if ( !ActivePpi )
    return 1LL;
  v6 = *((_DWORD *)ActivePpi + 216);
  if ( !v6 )
    return 1LL;
  if ( v6 == 0x80000000 )
    return 0LL;
  if ( v6 != 0x40000000 )
  {
    if ( v3 )
    {
      v7 = a1 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            return v4;
          if ( !dword_1C0329478 )
            return v6 & 8;
          return v6 & 1;
        }
        if ( dword_1C0329478 )
          return v6 & 8;
        return v6 & 4;
      }
      if ( dword_1C0329478 )
        return v6 & 4;
    }
    else if ( !dword_1C0329478 )
    {
      return v6 & 1;
    }
    return v6 & 2;
  }
  if ( (int)GetCurrentOrientation(&v10) < 0 )
    return 0LL;
  return ((unsigned __int8)v10 ^ (unsigned __int8)~(_BYTE)a1) & 1;
}
