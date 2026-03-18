/*
 * XREFs of GetLocalCommand @ 0x1C000561C
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0001F70 (NVMeCompletionDpcRoutine.c)
 *     NVMeRequestComplete @ 0x1C0008530 (NVMeRequestComplete.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000C870 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C000CF90 (NVMeGetLogPageCompletion.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocalCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // edx

  v2 = 0LL;
  if ( a2 == a1 + 568 )
    return a1 + 560;
  v4 = 0;
  while ( a2 != 104LL * v4 + a1 + 672 )
  {
    if ( ++v4 >= 4 )
      return v2;
  }
  return 104LL * v4 + a1 + 664;
}
