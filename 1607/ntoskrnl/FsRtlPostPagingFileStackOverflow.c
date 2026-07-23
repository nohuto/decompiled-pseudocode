/*
 * XREFs of FsRtlPostPagingFileStackOverflow @ 0x1401BA60C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlPostPagingFileStackOverflow(
        PVOID Context,
        PKEVENT Event,
        PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  char v3; // r9

  v3 = 1;
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, v3);
}
