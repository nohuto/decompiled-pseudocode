/*
 * XREFs of StorExtCompleteServiceIrp @ 0x1C0029980
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 */

void __fastcall StorExtCompleteServiceIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx

  v2 = **(_QWORD **)(a1 - 16);
  RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 256));
}
