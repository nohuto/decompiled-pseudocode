/*
 * XREFs of ?IgnoreCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18003C3F8
 * Callers:
 *     ?StopActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x1800382B0 (-StopActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgrou.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x1800387AC (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ?StopActivity@ActionInvoked@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180040BC0 (-StopActivity@ActionInvoked@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@M.c)
 *     ?StopActivity@ActionReverted@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180041170 (-StopActivity@ActionReverted@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800429C4 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180022CF8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
        __int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 32) )
  {
    v1 = a1 + 8;
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v2, v3, (const char *)0x8007029CLL);
    v4 = *(_QWORD **)v1;
    *(_DWORD *)(v1 + 24) = 0;
    if ( *v4 )
    {
      while ( **(_QWORD **)v1 != v1 )
      {
        v5 = (_QWORD *)(**(_QWORD **)v1 + 16LL);
        *(_QWORD *)v1 = v5;
        if ( !*v5 )
          goto LABEL_9;
      }
      **(_QWORD **)v1 = *(_QWORD *)(v1 + 16);
    }
LABEL_9:
    *(_QWORD *)v1 = 0LL;
  }
}
