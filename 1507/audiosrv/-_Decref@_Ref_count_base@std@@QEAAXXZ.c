/*
 * XREFs of ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180093308
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ??1?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x1800919B4 (--1-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 *     ?ReevaluateNonDefaultStatusForSaDevice@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800922C0 (-ReevaluateNonDefaultStatusForSaDevice@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAX.c)
 *     ?Shutdown@CAudioResourceManager@@UEAAXXZ @ 0x180092D00 (-Shutdown@CAudioResourceManager@@UEAAXXZ.c)
 *     ?_Reset0@?$_Ptr_base@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAAXPEAUNonDefaultSaDeviceReevaluationContext@@PEAV_Ref_count_base@2@@Z @ 0x180093534 (-_Reset0@-$_Ptr_base@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAAXPEAUNonDefaultSaDeviceRe.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@IEAAXXZ @ 0x180093578 (-_Tidy@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$share.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall std::_Ref_count_base::_Decref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))this)(this);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
  }
}
