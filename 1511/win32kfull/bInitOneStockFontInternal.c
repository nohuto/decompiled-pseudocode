/*
 * XREFs of bInitOneStockFontInternal @ 0x1C03785D8
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00D10E0 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bInitOneStockFont @ 0x1C03786DC (bInitOneStockFont.c)
 * Callees:
 *     hfontCreate @ 0x1C00189F0 (hfontCreate.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00215DC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00D137C (vIFIMetricsToEnumLogFontExDvW.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall bInitOneStockFontInternal(unsigned __int16 *a1, int a2, int a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  void *v10; // rax
  unsigned int v12; // [rsp+30h] [rbp-208h] BYREF
  struct _FONTHASH **v13; // [rsp+38h] [rbp-200h] BYREF
  struct PFF *v14; // [rsp+40h] [rbp-1F8h] BYREF
  _DWORD Src[108]; // [rsp+50h] [rbp-1E8h] BYREF

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
          {
            gppfeMapperDefault = (struct PFE *)v9;
            HIBYTE(Src[5]) = gjCurCharset;
          }
          BYTE2(Src[6]) = 2;
          v10 = (void *)hfontCreate(Src, a2, 2, 0LL);
          return (unsigned int)bSetStockObject(v10, a3, a4);
        }
      }
    }
  }
  return v8;
}
