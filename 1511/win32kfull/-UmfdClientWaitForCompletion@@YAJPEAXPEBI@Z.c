/*
 * XREFs of ?UmfdClientWaitForCompletion@@YAJPEAXPEBI@Z @ 0x1C02D6A80
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A31F0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@SA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C02D937C (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@SA_NQEAVCWaitableWorkItem@1@PEB.c)
 */

__int64 __fastcall UmfdClientWaitForCompletion(
        struct CMultipleConsumerWorkQueue::CWaitableWorkItem **a1,
        const unsigned int *a2)
{
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem *v3; // rcx
  __int64 result; // rax
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  if ( !v3 )
    return 3221225485LL;
  if ( CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(v3, a2, &v5) )
  {
    result = 0LL;
  }
  else
  {
    if ( v5 )
      return 258LL;
    result = 3221225473LL;
  }
  *a1 = 0LL;
  return result;
}
