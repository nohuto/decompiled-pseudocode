/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18000C890
 * Callers:
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18001D290 (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 *     ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18001D888 (-StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXW4TriggerId@Triggers@4@@Z @ 0x18001DE78 (-StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x180034338 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?StartActivity@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBG0@Z @ 0x18003BAC8 (-StartActivity@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Backg.c)
 *     ?StartActivity@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBG0@Z @ 0x18003C0A8 (-StartActivity@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Ba.c)
 *     ?StartActivity@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBGI_N@Z @ 0x18003C688 (-StartActivity@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@Conten.c)
 *     ?StartActivity@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBGI@Z @ 0x18003CC48 (-StartActivity@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDe.c)
 *     ?StartActivity@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG_N1@Z @ 0x18003D1F8 (-StartActivity@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Con.c)
 *     ?StartActivity@NotifySubscriptionListenersActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG@Z @ 0x18003D7C8 (-StartActivity@NotifySubscriptionListenersActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?StartActivity@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG@Z @ 0x18003DD68 (-StartActivity@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@C.c)
 *     ?StartActivity@RemoveSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG@Z @ 0x18003E2DC (-StartActivity@RemoveSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Backgroun.c)
 *     ?StartActivity@GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG_N1@Z @ 0x18003E878 (-StartActivity@GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDe.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
        __int64 a1,
        char a2)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // esi
  unsigned __int64 v5; // rbx
  signed __int64 result; // rax
  HANDLE ProcessHeap; // rax
  _QWORD *v8; // rax
  signed __int64 v9; // rcx
  signed __int64 v10; // rax

  v2 = wil::details::g_pThreadFailureCallbacks;
  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0xAuLL;
  for ( result = *(_QWORD *)(v2 + 8 * v5); result; result = *(_QWORD *)(result + 16) )
  {
    if ( *(_DWORD *)(result + 8) == CurrentThreadId )
      return result;
  }
  if ( !a2 )
    return 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v9 = (signed __int64)v8;
  if ( !v8 )
    return 0LL;
  *v8 = 0LL;
  v8[2] = 0LL;
  *((_DWORD *)v8 + 2) = CurrentThreadId;
  _m_prefetchw((const void *)(v2 + 8 * v5));
  do
  {
    v10 = *(_QWORD *)(v2 + 8 * v5);
    *(_QWORD *)(v9 + 16) = v10;
  }
  while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8 * v5), v9, v10) );
  return v9;
}
