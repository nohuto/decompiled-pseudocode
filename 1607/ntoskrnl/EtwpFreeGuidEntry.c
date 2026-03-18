/*
 * XREFs of EtwpFreeGuidEntry @ 0x1404DF218
 * Callers:
 *     EtwpUnreferenceGuidEntry @ 0x14040ED4C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x14048D600 (EtwpAddGuidEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404200D0 (ObDereferenceSecurityDescriptor.c)
 */

void __fastcall EtwpFreeGuidEntry(_QWORD *P)
{
  void *v2; // rcx

  ObDereferenceSecurityDescriptor(P[7], 1u);
  v2 = (void *)P[46];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&EtwpCounters);
}
