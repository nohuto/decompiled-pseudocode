/*
 * XREFs of EtwpFreeGuidEntry @ 0x14054F670
 * Callers:
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1404D4348 (EtwpAddGuidEntry.c)
 * Callees:
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 */

void __fastcall EtwpFreeGuidEntry(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  void *v6; // rcx

  ObDereferenceSecurityDescriptor(P[7], 1u, a3, a4);
  v5 = (void *)P[46];
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (void *)P[47];
  if ( v6 )
    PspDereferenceSiloObject(v6);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&EtwpCounters);
}
