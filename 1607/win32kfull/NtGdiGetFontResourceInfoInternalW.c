/*
 * XREFs of NtGdiGetFontResourceInfoInternalW @ 0x1C02A8320
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?bCheckAndCapThePath@@YAHPEAG0KK@Z @ 0x1C02A6C70 (-bCheckAndCapThePath@@YAHPEAG0KK@Z.c)
 *     GetFontResourceInfoInternalW @ 0x1C02D5A74 (GetFontResourceInfoInternalW.c)
 */

__int64 __fastcall NtGdiGetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6,
        int a7)
{
  unsigned __int16 *v10; // rdi
  unsigned int FontResourceInfoInternalW; // esi
  __int64 v12; // rdx
  unsigned int *v13; // rbx
  _DWORD *v14; // rcx
  char *v15; // rax
  __int64 v17; // [rsp+70h] [rbp-158h] BYREF
  unsigned __int16 *v18; // [rsp+78h] [rbp-150h]
  _BYTE v19[96]; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int16 v20[80]; // [rsp+E0h] [rbp-E8h] BYREF

  v18 = a1;
  v17 = (__int64)a6;
  v10 = 0LL;
  FontResourceInfoInternalW = 0;
  memset(v19, 0, 0x5CuLL);
  v13 = 0LL;
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = v20;
    }
    if ( v10 )
      FontResourceInfoInternalW = bCheckAndCapThePath(v10, v18, a2, a3);
  }
  if ( a4 <= 0x5C )
  {
    v13 = (unsigned int *)v19;
  }
  else if ( a4 > 0x2710000 || (v13 = (unsigned int *)PALLOCMEM2(a4, 1886221383LL, 1)) == 0LL )
  {
    FontResourceInfoInternalW = 0;
  }
  if ( FontResourceInfoInternalW )
  {
    FontResourceInfoInternalW = GetFontResourceInfoInternalW(v10, a2, a3, a4, (__int64)&v17, v13, a7);
    if ( FontResourceInfoInternalW )
    {
      v14 = a5;
      v12 = W32UserProbeAddress;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v14 = (_DWORD *)W32UserProbeAddress;
      *v14 = v17;
      if ( a4 )
      {
        v15 = &a6[a4];
        if ( (unsigned __int64)v15 > W32UserProbeAddress || v15 <= a6 )
          *W32UserProbeAddress = 0;
        memmove(a6, v13, a4);
      }
    }
  }
  if ( v10 && v10 != v20 )
    FreeTmpBuffer(v10);
  if ( v13 && v13 != (unsigned int *)v19 )
    Win32FreePool(v13, v12);
  return FontResourceInfoInternalW;
}
