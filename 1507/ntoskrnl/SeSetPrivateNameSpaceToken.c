/*
 * XREFs of SeSetPrivateNameSpaceToken @ 0x1406D0FA0
 * Callers:
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SeSetPrivateNameSpaceToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  struct _KTHREAD *v6; // rdx
  __int16 v7; // ax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v9, 0);
  if ( *(_BYTE *)(a1 + 204) )
  {
    v5 = -1073741525;
  }
  else if ( a2 )
  {
    *(_DWORD *)(a1 + 200) |= 0x10000u;
  }
  else
  {
    *(_DWORD *)(a1 + 200) &= ~0x10000u;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v9, 0);
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
  return v5;
}
