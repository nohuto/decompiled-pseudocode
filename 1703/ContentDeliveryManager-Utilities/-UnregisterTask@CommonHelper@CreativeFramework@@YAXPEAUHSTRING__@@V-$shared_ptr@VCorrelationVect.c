/*
 * XREFs of ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180067AF8
 * Callers:
 *     ?UnRegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004971C (-UnRegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Win.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180067B74 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 * Callees:
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_f56adf79d146d9a4fc4e45ef3be9ae80___ @ 0x180068AEC (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_f56adf79d146d9a4fc4e45ef3be9ae.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::CommonHelper::UnregisterTask(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h]

  v7 = a2;
  v6 = a1;
  v5[0] = &v6;
  v5[1] = a2;
  result = CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_f56adf79d146d9a4fc4e45ef3be9ae80___(v5);
  v4 = *(volatile signed __int32 **)(a2 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
