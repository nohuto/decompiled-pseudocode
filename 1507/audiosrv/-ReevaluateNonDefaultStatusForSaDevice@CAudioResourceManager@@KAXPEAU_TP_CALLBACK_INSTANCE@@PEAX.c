/*
 * XREFs of ?ReevaluateNonDefaultStatusForSaDevice@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800922C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShutdownLock@CAudioResourceManager@@IEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180091E8C (-AcquireShutdownLock@CAudioResourceManager@@IEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTrai.c)
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180092768 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180093308 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@std@@@std@@@2@XZ @ 0x180093610 (-begin@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$share.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioResourceManager::ReevaluateNonDefaultStatusForSaDevice(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // rdx
  CAudioResourceManager *v5; // rcx
  __int64 v6; // rax
  const unsigned __int16 ***v7; // rbx
  std::_Ref_count_base *v8; // rcx
  _BYTE v10[32]; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+10h] BYREF

  CAudioResourceManager::AcquireShutdownLock((__int64)Context, (__int64)&lpCriticalSection);
  if ( *((_BYTE *)Context + 80) )
  {
    v4 = std::deque<std::shared_ptr<NonDefaultSaDeviceReevaluationContext>>::begin(Context + 11, v10);
    v5 = *(CAudioResourceManager **)v4;
    v6 = *(_QWORD *)v4 ? *(_QWORD *)v5 : 0LL;
    v7 = *(const unsigned __int16 ****)(*(_QWORD *)(v6 + 8) + 8 * (*(_QWORD *)(v4 + 16) & (*(_QWORD *)(v6 + 16) - 1LL)));
    CAudioResourceManager::RevertToSaDevicesWithDefaultSettings(v5, **v7);
    CloseThreadpoolTimer((PTP_TIMER)(*v7)[1]);
    if ( Context[15] )
    {
      v8 = *(std::_Ref_count_base **)(*(_QWORD *)(Context[12] + 8 * (Context[14] & (Context[13] - 1LL))) + 8LL);
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
      if ( Context[15]-- == 1LL )
        Context[14] = 0LL;
      else
        ++Context[14];
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
