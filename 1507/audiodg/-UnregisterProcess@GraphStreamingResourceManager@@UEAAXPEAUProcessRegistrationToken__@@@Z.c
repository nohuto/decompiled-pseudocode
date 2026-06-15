/*
 * XREFs of ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x14000C2F0
 * Callers:
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011E00 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?FinalUnregisterForProcess@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z @ 0x14000C8B0 (-FinalUnregisterForProcess@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000D700 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall GraphStreamingResourceManager::UnregisterProcess(
        GraphStreamingResourceManager *this,
        struct ProcessRegistrationToken__ *a2)
{
  void (__fastcall *v4)(GraphStreamingResourceManager *__hidden, struct GraphStreamingResourceManager::HandleRegistrations::_t *); // rbp
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    v4 = *(void (__fastcall **)(GraphStreamingResourceManager *__hidden, struct GraphStreamingResourceManager::HandleRegistrations::_t *))(*((_QWORD *)this - 1) + 40LL);
    if ( v4 == GraphStreamingResourceManager::FinalUnregisterForProcess )
      GraphStreamingResourceManager::FinalUnregisterForProcess(
        (GraphStreamingResourceManager *)((char *)this - 8),
        (struct ProcessRegistrationToken__ *)((char *)a2 + 16));
    else
      v4((GraphStreamingResourceManager *)((char *)this - 8), (struct ProcessRegistrationToken__ *)((char *)a2 + 16));
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      (char *)this + 56,
      a2);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
