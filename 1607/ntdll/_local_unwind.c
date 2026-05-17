/*
 * XREFs of _local_unwind @ 0x180097810
 * Callers:
 *     EvtIntReportEventWorker @ 0x1800598DC (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x180090690 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwindEx @ 0x180035340 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}
