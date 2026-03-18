/*
 * XREFs of FsRtlPostStackOverflow @ 0x1401E4644
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlPostStackOverflow(PVOID Context, PKEVENT Event, PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, 0LL);
}
