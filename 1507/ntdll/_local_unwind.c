/*
 * XREFs of _local_unwind @ 0x180084C50
 * Callers:
 *     EvtIntReportEventWorker @ 0x18000E64C (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x180059AB0 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwindEx @ 0x180014200 (RtlUnwindEx.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  struct _CONTEXT ContextRecord; // [rsp+0h] [rbp-4D8h] BYREF

  RtlUnwindEx(a1, a2, 0LL, 0LL, &ContextRecord, 0LL);
}
