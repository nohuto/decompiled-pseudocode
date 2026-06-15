/*
 * XREFs of ?Shutdown@CAudioResourceManager@@UEAAXXZ @ 0x180092D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180093308 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@std@@@std@@@2@XZ @ 0x180093610 (-begin@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$share.c)
 */

void __fastcall CAudioResourceManager::Shutdown(CAudioResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  std::_Ref_count_base *v7; // rcx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)&lpCriticalSection);
  v2 = lpCriticalSection;
  *((_BYTE *)this + 72) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  while ( *((_QWORD *)this + 14) )
  {
    v3 = (_QWORD *)std::deque<std::shared_ptr<NonDefaultSaDeviceReevaluationContext>>::begin((char *)this + 80, v9);
    v4 = v3;
    v5 = *v3 ? *(_QWORD *)*v3 : 0LL;
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * (v4[2] & (*(_QWORD *)(v5 + 16) - 1LL)));
    SetThreadpoolTimer(*(PTP_TIMER *)(*(_QWORD *)v6 + 8LL), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(*(_QWORD *)v6 + 8LL), 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)(*(_QWORD *)v6 + 8LL));
    if ( !*((_QWORD *)this + 14) )
      break;
    v7 = *(std::_Ref_count_base **)(*(_QWORD *)(*((_QWORD *)this + 11)
                                              + 8 * (*((_QWORD *)this + 13) & (*((_QWORD *)this + 12) - 1LL)))
                                  + 8LL);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( (*((_QWORD *)this + 14))-- == 1LL )
      *((_QWORD *)this + 13) = 0LL;
    else
      ++*((_QWORD *)this + 13);
  }
}
