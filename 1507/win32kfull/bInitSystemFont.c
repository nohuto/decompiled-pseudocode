/*
 * XREFs of bInitSystemFont @ 0x1C037A27C
 * Callers:
 *     bInitStockFontsInternal @ 0x1C03783D8 (bInitStockFontsInternal.c)
 * Callees:
 *     hfontCreate @ 0x1C00569C0 (hfontCreate.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C013DD20 (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0140390 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall bInitSystemFont(unsigned __int16 *a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // r14d
  __int64 v6; // rdi
  unsigned int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // r11
  int v10; // edx
  struct HOBJ__ *v11; // rax
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  struct _FONTHASH **v14; // [rsp+38h] [rbp-C8h] BYREF
  struct PFF *v15; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD Src[108]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0;
  memset(Src, 0, 0x1A4uLL);
  if ( !a1 )
    return v4;
  if ( !*a1 )
    return v4;
  if ( !a2 )
    return v4;
  v14 = gpPFTPublic;
  if ( !(unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v14, a1, &v13, 2u, &v15, 0LL) || !v13 || !v15 )
    return v4;
  v5 = 0x7FFFFFFF;
  v6 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    v8 = *((_QWORD *)v15 + v7 + 27);
    if ( !v8 )
      goto LABEL_13;
    v9 = *(_QWORD *)(v8 + 32);
    if ( (*(_DWORD *)(v9 + 48) & 0x3000010) != 0 )
      break;
    v10 = a2 - *(__int16 *)(v9 + 62) - *(__int16 *)(v9 + 60);
    if ( v10 >= 0 && v10 < v5 )
    {
      v5 = a2 - *(__int16 *)(v9 + 62) - *(__int16 *)(v9 + 60);
      v6 = *((_QWORD *)v15 + v7 + 27);
      if ( !v10 )
        goto LABEL_16;
    }
LABEL_13:
    if ( ++v7 >= v13 )
      goto LABEL_16;
  }
  v6 = *((_QWORD *)v15 + v7 + 27);
LABEL_16:
  if ( v6 )
  {
    vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v6 + 32));
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 48LL) & 0x3000010) != 0 )
    {
      Src[0] = a2;
      Src[1] = 0;
    }
    gppfeMapperDefault = (struct PFE *)v6;
    BYTE2(Src[6]) = 2;
    v11 = hfontCreate((char *)Src, 1, 2, 0LL);
    return (unsigned int)bSetStockObject(v11, 13, 0);
  }
  return v4;
}
