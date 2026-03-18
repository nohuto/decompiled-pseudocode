/*
 * XREFs of SeTokenGetRedirectionTrustPolicy @ 0x14021A648
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1401CA1D0 (IoCheckRedirectionTrustLevel.c)
 *     PspGetRedirectionTrustPolicy @ 0x14067D22C (PspGetRedirectionTrustPolicy.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall SeTokenGetRedirectionTrustPolicy(__int64 a1, bool *a2, bool *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // edi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v7 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  result = (v7 >> 22) & 1;
  *a2 = (v7 & 0x400000) != 0;
  *a3 = (v7 & 0x800000) != 0;
  return result;
}
