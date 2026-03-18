/*
 * XREFs of ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DC298
 * Callers:
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z @ 0x1C02DC328 (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z.c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@SA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C02DC46C (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@SA_NQEAVCWaitableWorkItem@1@PEB.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    EngFreeMem(v1);
}
