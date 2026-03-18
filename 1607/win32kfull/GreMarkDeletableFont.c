/*
 * XREFs of GreMarkDeletableFont @ 0x1C00B919C
 * Callers:
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 *     UserSetFont @ 0x1C00B8F28 (UserSetFont.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C00B9B2C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01CD808 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     DeleteMetricsFont @ 0x1C01DFF6C (DeleteMetricsFont.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall GreMarkDeletableFont(struct HLFONT__ *a1)
{
  __int64 v2; // rdx
  struct LFONT *v3; // [rsp+38h] [rbp+10h] BYREF

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v3, a1, 0LL);
  if ( v3 )
  {
    v2 = *((unsigned int *)v3 + 7);
    if ( (v2 & 2) == 0 )
    {
      LOBYTE(v2) = 10;
      HmgMarkDeletable(a1, v2);
    }
  }
  LFONTOBJ::~LFONTOBJ(&v3);
}
