/*
 * XREFs of ?UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x140003F00
 * Callers:
 *     <none>
 * Callees:
 *     ?FinalUnregisterForThread@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z @ 0x140003CE0 (-FinalUnregisterForThread@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140004AD0 (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GraphStreamingResourceManager::UnregisterThread(
        GraphStreamingResourceManager *this,
        struct ThreadRegistrationToken__ *a2)
{
  GraphStreamingResourceManager *v4; // rcx
  struct GraphStreamingResourceManager::HandleRegistrations::_t *v5; // rdx
  void (__fastcall *v6)(GraphStreamingResourceManager *, struct GraphStreamingResourceManager::HandleRegistrations::_t *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    v4 = (GraphStreamingResourceManager *)((char *)this - 8);
    v5 = (struct ThreadRegistrationToken__ *)((char *)a2 + 16);
    v6 = *(void (__fastcall **)(GraphStreamingResourceManager *, struct GraphStreamingResourceManager::HandleRegistrations::_t *))(*((_QWORD *)this - 1) + 56LL);
    if ( v6 == GraphStreamingResourceManager::FinalUnregisterForThread )
      GraphStreamingResourceManager::FinalUnregisterForThread(v4, v5);
    else
      v6(v4, v5);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      (char *)this + 128,
      a2);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
