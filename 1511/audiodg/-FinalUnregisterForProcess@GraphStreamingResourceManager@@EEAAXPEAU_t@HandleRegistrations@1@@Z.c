/*
 * XREFs of ?FinalUnregisterForProcess@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z @ 0x140009A40
 * Callers:
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x1400094A0 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall GraphStreamingResourceManager::FinalUnregisterForProcess(
        GraphStreamingResourceManager *this,
        struct GraphStreamingResourceManager::HandleRegistrations::_t *a2)
{
  if ( *((_QWORD *)a2 + 1) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 35) + 40LL))(
      *((_QWORD *)this + 35),
      *((_QWORD *)a2 + 1));
  CloseHandle(*(HANDLE *)a2);
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
}
