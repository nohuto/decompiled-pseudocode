/*
 * XREFs of bInitOneStockFontInternal @ 0x1C0378B8C
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C013DA84 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bInitOneStockFont @ 0x1C0378858 (bInitOneStockFont.c)
 * Callees:
 *     hfontCreate @ 0x1C00569C0 (hfontCreate.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C013DD20 (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0140390 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall bInitOneStockFontInternal(unsigned __int16 *a1, int a2, int a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  struct HOBJ__ *v10; // rax
  unsigned int v12; // [rsp+30h] [rbp-208h] BYREF
  struct _FONTHASH **v13; // [rsp+38h] [rbp-200h] BYREF
  struct PFF *v14; // [rsp+40h] [rbp-1F8h] BYREF
  char Src[432]; // [rsp+50h] [rbp-1E8h] BYREF

  v13 = gpPFTPublic;
  v8 = 0;
  memset(Src, 0, 0x1A4uLL);
  if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v13, a1, &v12, 2u, &v14, 0LL) )
  {
    if ( v12 )
    {
      if ( v14 )
      {
        v9 = *((_QWORD *)v14 + 27);
        if ( v9 )
        {
          vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v9 + 32));
          if ( a3 == 13 )
            gppfeMapperDefault = (struct PFE *)v9;
          Src[26] = 2;
          v10 = hfontCreate(Src, a2, 2, 0LL);
          return (unsigned int)bSetStockObject(v10, a3, a4);
        }
      }
    }
  }
  return v8;
}
