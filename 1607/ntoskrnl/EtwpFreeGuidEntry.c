/*
 * XREFs of EtwpFreeGuidEntry @ 0x1404C281C
 * Callers:
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x14048E090 (EtwpAddGuidEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
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
