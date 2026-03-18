/*
 * XREFs of SeTokenGetRedirectionTrustPolicy @ 0x14024FAC0
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1401F79EC (IoCheckRedirectionTrustLevel.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406BF750 (PspGetRedirectionTrustPolicy.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SeTokenGetRedirectionTrustPolicy(__int64 a1, bool *a2, bool *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // edi
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v7 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  result = (v7 >> 22) & 1;
  *a2 = (v7 & 0x400000) != 0;
  *a3 = (v7 & 0x800000) != 0;
  return result;
}
