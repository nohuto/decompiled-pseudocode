/*
 * XREFs of ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0131134
 * Callers:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C01310EC (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C014E940 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C02D7F58 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@SA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C02D7FBC (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@SA_NQEAVCWaitableWorkItem@1@PEB.c)
 * Callees:
 *     <none>
 */

void __fastcall CManualResetEvent::Destroy(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    EngFreeMem(v2);
  EngFreeMem(a1);
}
