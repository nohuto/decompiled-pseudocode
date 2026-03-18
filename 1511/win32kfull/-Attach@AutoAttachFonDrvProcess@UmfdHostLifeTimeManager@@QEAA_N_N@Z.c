/*
 * XREFs of ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_N@Z @ 0x1C0118170
 * Callers:
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0118090 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C027E1E0 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this,
        char a2)
{
  struct _KAPC_STATE *v3; // rdx
  struct _KPROCESS *v4; // rcx

  if ( a2 )
  {
    if ( !UmfdHostLifeTimeManager::s_Ready )
      return *((_BYTE *)this + 56);
    v3 = (struct _KAPC_STATE *)((char *)this + 8);
    v4 = (struct _KPROCESS *)UmfdHostLifeTimeManager::s_UmfdHostProcess;
  }
  else
  {
    v3 = (struct _KAPC_STATE *)((char *)this + 8);
    v4 = (struct _KPROCESS *)gpepCSRSS;
  }
  KeStackAttachProcess(v4, v3);
  *((_BYTE *)this + 56) = 1;
  return *((_BYTE *)this + 56);
}
