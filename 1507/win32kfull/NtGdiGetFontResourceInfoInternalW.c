/*
 * XREFs of NtGdiGetFontResourceInfoInternalW @ 0x1C02A7100
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?bCheckAndCapThePath@@YAHPEAG0KK@Z @ 0x1C02A6050 (-bCheckAndCapThePath@@YAHPEAG0KK@Z.c)
 *     GetFontResourceInfoInternalW @ 0x1C02D16E4 (GetFontResourceInfoInternalW.c)
 */

__int64 __fastcall NtGdiGetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char *a6,
        int a7)
{
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  unsigned __int16 *v10; // rdi
  unsigned int FontResourceInfoInternalW; // esi
  unsigned int *v12; // rbx
  _DWORD *v13; // rcx
  char *v14; // rax
  __int64 v16; // [rsp+68h] [rbp-160h] BYREF
  int v17; // [rsp+70h] [rbp-158h]
  unsigned __int16 *v18; // [rsp+78h] [rbp-150h]
  _DWORD v19[24]; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int16 v20[80]; // [rsp+E0h] [rbp-E8h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v18 = a1;
  v17 = a4;
  v16 = (__int64)a6;
  v10 = 0LL;
  FontResourceInfoInternalW = 0;
  memset(v19, 0, 92);
  v12 = 0LL;
  if ( (unsigned int)a2 > 1 )
  {
    if ( (unsigned int)a2 > 0x50 )
    {
      if ( (unsigned int)a2 <= 0x1388000 )
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(2 * a2));
    }
    else
    {
      v10 = v20;
    }
    if ( v10 )
      FontResourceInfoInternalW = bCheckAndCapThePath(v10, v18, v9, v8);
  }
  if ( v7 <= 0x5C )
  {
    v12 = v19;
  }
  else if ( v7 > 0x2710000 || (v12 = (unsigned int *)PALLOCMEM2(v7, 1886221383LL, 1)) == 0LL )
  {
    FontResourceInfoInternalW = 0;
  }
  if ( FontResourceInfoInternalW )
  {
    FontResourceInfoInternalW = GetFontResourceInfoInternalW(v10, v9, v8, v7, (__int64)&v16, v12, a7);
    if ( FontResourceInfoInternalW )
    {
      v13 = a5;
      a2 = W32UserProbeAddress;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v13 = (_DWORD *)W32UserProbeAddress;
      *v13 = v16;
      if ( v7 )
      {
        v14 = &a6[v7];
        if ( (unsigned __int64)v14 > W32UserProbeAddress || v14 <= a6 )
          *W32UserProbeAddress = 0;
        memmove(a6, v12, v7);
      }
    }
  }
  if ( v10 && v10 != v20 )
    FreeTmpBuffer(v10, a2, a3, a4);
  if ( v12 && v12 != v19 )
    Win32FreePool(v12);
  return FontResourceInfoInternalW;
}
