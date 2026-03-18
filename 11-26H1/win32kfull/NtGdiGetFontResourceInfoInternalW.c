/*
 * XREFs of NtGdiGetFontResourceInfoInternalW @ 0x140241A00
 * Callers:
 *     <none>
 * Callees:
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1401045EC (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x140241C64 (-GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiGetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned __int16 *v11; // rdi
  unsigned int FontResourceInfoInternalW; // esi
  unsigned int *v13; // rbx
  void *v14; // r13
  int v16; // [rsp+48h] [rbp-190h] BYREF
  unsigned __int16 *v17; // [rsp+50h] [rbp-188h]
  unsigned int *v18; // [rsp+58h] [rbp-180h]
  unsigned int v19; // [rsp+60h] [rbp-178h]
  unsigned int v20; // [rsp+68h] [rbp-170h]
  unsigned __int64 v21; // [rsp+70h] [rbp-168h] BYREF
  void *v22; // [rsp+78h] [rbp-160h]
  __int64 v23; // [rsp+80h] [rbp-158h]
  __int64 v24; // [rsp+88h] [rbp-150h]
  _BYTE v25[96]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int16 v26[80]; // [rsp+F0h] [rbp-E8h] BYREF

  v19 = a2;
  v20 = a3;
  v16 = a4;
  v22 = a5;
  v23 = a6;
  v24 = a6;
  v11 = 0LL;
  v17 = 0LL;
  FontResourceInfoInternalW = 0;
  v21 = 0LL;
  v13 = 0LL;
  v18 = 0LL;
  memset_0(v25, 0, 0x5CuLL);
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
      {
        v11 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
        v17 = v11;
      }
    }
    else
    {
      v11 = v26;
      v17 = v26;
    }
    if ( v11 )
      FontResourceInfoInternalW = bCheckAndCapThePath(v11, a1, a2, a3);
  }
  v14 = (void *)v23;
  if ( a4 <= 0x5C )
  {
    v13 = (unsigned int *)v25;
    v18 = (unsigned int *)v25;
  }
  else if ( a4 > 0x2710000 || (v13 = (unsigned int *)PALLOCMEM(a4, 1886221383LL), (v18 = v13) == 0LL) )
  {
    FontResourceInfoInternalW = 0;
  }
  if ( FontResourceInfoInternalW )
  {
    FontResourceInfoInternalW = GetFontResourceInfoInternalW(v11, a2, a3, a4, &v21, v13, a7);
    if ( FontResourceInfoInternalW )
    {
      v16 = v21;
      GreProbeAndWriteToUntrustedVa(v22, 4uLL, &v16, 4uLL, 1uLL);
      if ( a4 )
        GreProbeAndWriteToUntrustedVa(v14, a4, v13, a4, 1uLL);
    }
  }
  if ( v11 && v11 != v26 )
    FreeTmpBuffer(v11);
  if ( v13 && v13 != (unsigned int *)v25 )
    Win32FreePool(v13);
  return FontResourceInfoInternalW;
}
