/*
 * XREFs of ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0157370
 * Callers:
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C01572D8 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C027C444 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this)
{
  ULONG v2; // ecx

  if ( *((_BYTE *)this + 56) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 8));
    v2 = *((_DWORD *)this + 15);
    if ( v2 )
      EngSetLastError(v2);
  }
  if ( *(_QWORD *)this )
  {
    GreReleasePushLockShared(*(_QWORD *)this);
    KeLeaveCriticalRegion();
    *(_QWORD *)this = 0LL;
  }
}
