/*
 * XREFs of SeTokenGetRedirectionTrustPolicy @ 0x14021A474
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1401CA070 (IoCheckRedirectionTrustLevel.c)
 *     PspGetRedirectionTrustPolicy @ 0x14067D310 (PspGetRedirectionTrustPolicy.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
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
