/*
 * XREFs of SeSetPrivateNameSpaceToken @ 0x14068D1D8
 * Callers:
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SeSetPrivateNameSpaceToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v10, 0);
  if ( *(_BYTE *)(a1 + 204) )
  {
    v3 = -1073741525;
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
  _InterlockedOr(v10, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return v3;
}
