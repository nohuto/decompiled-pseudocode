/*
 * XREFs of PspFreeMonitorContextServerSilo @ 0x1406404D0
 * Callers:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PspFreeMonitorContextServerSilo(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rbx

  v1 = (struct _EX_RUNDOWN_REF *)a1[2];
  ExFreePoolWithTag(a1, 0x436C6953u);
  ExReleaseRundownProtection_0(v1 + 4);
}
