/*
 * XREFs of ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@SA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C02DC46C
 * Callers:
 *     ?UmfdClientWaitForCompletion@@YAJPEAXPEBI@Z @ 0x1C02D9B60 (-UmfdClientWaitForCompletion@@YAJPEAXPEBI@Z.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C01312D0 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DC298 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 */

bool __fastcall CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(
        struct CMultipleConsumerWorkQueue::CWaitableWorkItem *const a1,
        const unsigned int *a2,
        bool *a3)
{
  void *v5; // r10
  bool v6; // zf
  void **v7; // rbx
  bool v8; // di
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v5 = (void *)**((_QWORD **)a1 + 4);
  if ( !a2 )
  {
    KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
LABEL_3:
    if ( a3 )
      *a3 = 0;
    v6 = *((_DWORD *)a1 + 10) == 1;
    v7 = (void **)*((_QWORD *)a1 + 4);
    Timeout.QuadPart = (LONGLONG)a1;
    v8 = v6;
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>((void **)&Timeout);
    if ( v7 )
      CManualResetEvent::Destroy(v7);
    return v8;
  }
  Timeout.QuadPart = -10000LL * *a2;
  if ( KeWaitForSingleObject(v5, Executive, 0, 0, &Timeout) != 258 )
    goto LABEL_3;
  if ( a3 )
    *a3 = 1;
  return 0;
}
