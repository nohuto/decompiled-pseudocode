/*
 * XREFs of HUBDSM_FreeingBufferAllocatedForMSOSExtendedProperty @ 0x1C001AB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_FreeingBufferAllocatedForMSOSExtendedProperty(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  ExFreePoolWithTag(*(PVOID *)(v1 + 2096), 0x64334855u);
  *(_QWORD *)(v1 + 2096) = 0LL;
  return 4077LL;
}
