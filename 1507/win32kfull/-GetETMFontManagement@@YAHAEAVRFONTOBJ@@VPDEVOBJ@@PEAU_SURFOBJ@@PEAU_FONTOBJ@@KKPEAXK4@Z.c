/*
 * XREFs of ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C02A2AF0
 * Callers:
 *     NtGdiGetETM @ 0x1C02B3C70 (NtGdiGetETM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A2E80 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A3100 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02B9380 (-FontManagement@PDEVOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall GetETMFontManagement(
        struct RFONTOBJ *a1,
        __int64 a2,
        struct _SURFOBJ *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  int v7; // eax
  int *v8; // rbx
  void *v9; // r13
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  int v13; // r12d
  int v15; // eax
  unsigned int v16; // esi
  unsigned int v18; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-3Ch] BYREF
  int *v20; // [rsp+48h] [rbp-38h] BYREF
  int v21[10]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+48h] BYREF

  v22 = a2;
  v7 = *(_DWORD *)(a2 + 56);
  v8 = v21;
  v9 = a7;
  v10 = 0;
  v11 = 0;
  v19 = 0;
  v18 = 0;
  v20 = v21;
  v13 = 0;
  if ( (v7 & 0x8080) == 0x8080 && *(_QWORD *)a1 )
  {
    v15 = UMPDReleaseRFONTSem(a1, 0LL, &v19, &v18, &v20);
    v10 = v19;
    v13 = v15;
    v11 = v18;
    v8 = v20;
  }
  v16 = PDEVOBJ::FontManagement((PDEVOBJ *)&v22, a3, 0LL, 8u, 4u, v9, 0, 0LL);
  if ( v13 )
  {
    UMPDAcquireRFONTSem(a1, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v21 )
        Win32FreePool(v8);
    }
  }
  return v16;
}
