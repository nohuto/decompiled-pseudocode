/*
 * XREFs of PspReferenceJobSilo @ 0x140415668
 * Callers:
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PsGetSiloObjectFromJob @ 0x1406C0C20 (PsGetSiloObjectFromJob.c)
 *     PsInsertSiloObjectFromJob @ 0x1406C0F4C (PsInsertSiloObjectFromJob.c)
 *     PsRemoveSiloObjectFromJob @ 0x1406C1254 (PsRemoveSiloObjectFromJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 */

void *__fastcall PspReferenceJobSilo(__int64 a1, __int64 a2)
{
  struct _ERESOURCE *v4; // rsi
  void *v5; // rdi
  __int16 v6; // cx

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v4 = (struct _ERESOURCE *)(a1 + 56);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  v5 = *(void **)(a1 + 1248);
  if ( v5 )
    PspReferenceSiloObject(v5);
  ExReleaseResourceLite(v4);
  if ( a2 )
  {
    v6 = *(_WORD *)(a2 + 486) + 1;
    *(_WORD *)(a2 + 486) = v6;
    if ( !v6 && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery();
  }
  return v5;
}
