/*
 * XREFs of SeSetVirtualizationToken @ 0x140557234
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void __fastcall SeSetVirtualizationToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v8, 0);
  if ( a2 )
  {
    v5 = *(_DWORD *)(a1 + 200);
    if ( (v5 & 0x200) != 0 )
      *(_DWORD *)(a1 + 200) = v5 | 0x400;
  }
  else
  {
    *(_DWORD *)(a1 + 200) &= ~0x400u;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v8, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
