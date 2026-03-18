/*
 * XREFs of ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C015A54C
 * Callers:
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C015A438 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C027E7F0 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0127548 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 */

UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *__fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this)
{
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *result; // rax

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock(this);
  *((_DWORD *)this + 15) = 0;
  result = this;
  *((_BYTE *)this + 56) = 0;
  return result;
}
