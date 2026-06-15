/*
 * XREFs of ?FinalUnregisterForThread@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z @ 0x14000C850
 * Callers:
 *     ?UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x14000CAB0 (-UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall GraphStreamingResourceManager::FinalUnregisterForThread(
        GraphStreamingResourceManager *this,
        struct GraphStreamingResourceManager::HandleRegistrations::_t *a2)
{
  if ( *((_QWORD *)a2 + 1) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 35) + 56LL))(
      *((_QWORD *)this + 35),
      *((_QWORD *)a2 + 1));
  CloseHandle(*(HANDLE *)a2);
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
}
