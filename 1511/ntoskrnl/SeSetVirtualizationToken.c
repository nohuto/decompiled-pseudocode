/*
 * XREFs of SeSetVirtualizationToken @ 0x140452458
 * Callers:
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SeSetVirtualizationToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
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
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
