/*
 * XREFs of SeSetVirtualizationToken @ 0x1404E8CD4
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SeSetVirtualizationToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v10, 0);
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
  _InterlockedOr(v10, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
}
