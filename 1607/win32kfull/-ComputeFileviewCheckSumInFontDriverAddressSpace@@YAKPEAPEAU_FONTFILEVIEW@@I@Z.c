/*
 * XREFs of ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C01572D8
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00645D8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x1C00BC940 (ComputeFileviewCheckSum.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0157370 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_N@Z @ 0x1C01573B8 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_N@Z.c)
 *     ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C01573EC (--0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeFileviewCheckSumInFontDriverAddressSpace(struct _FONTFILEVIEW **a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _BYTE v6[64]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v4 = 0;
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v6);
  if ( (_DWORD)v3
    && UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
         (UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v6,
         (*((_DWORD *)*a1 + 10) & 0x20) != 0) )
  {
    do
    {
      v4 += ComputeFileviewCheckSum(*((_DWORD **)*a1 + 2), *((_DWORD *)*a1 + 6));
      ++a1;
      --v3;
    }
    while ( v3 );
  }
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v6);
  return v4;
}
