/*
 * XREFs of IopReleaseResources @ 0x14067EA80
 * Callers:
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     IopAllocateBootResourcesInternal @ 0x14059C8BC (IopAllocateBootResourcesInternal.c)
 *     PnpReleaseResourcesInternal @ 0x140695CE8 (PnpReleaseResourcesInternal.c)
 */

void __fastcall IopReleaseResources(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si
  void *v6; // rcx
  void *v7; // rcx
  unsigned __int8 v8; // di
  signed __int32 v9; // eax
  int v10; // ecx
  __int64 v11; // r8
  void *v12; // rcx

  PnpReleaseResourcesInternal();
  v3 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, v2);
  v4 = v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v3);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  qword_14034AA48 = (__int64)KeGetCurrentThread();
  dword_14034AA70 = CurrentIrql;
  v6 = *(void **)(a1 + 416);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  v7 = *(void **)(a1 + 424);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  qword_14034AA48 = 0LL;
  v8 = dword_14034AA70;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
  if ( v9 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v9);
  __writecr8(v8);
  KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
  v10 = *(_DWORD *)(a1 + 396);
  if ( (v10 & 0x10001) == 1 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 544);
      if ( v11 )
        IopAllocateBootResourcesInternal(4, *(_QWORD *)(a1 + 32), v11);
    }
  }
  else
  {
    PipClearDevNodeFlags(a1, 192);
    v12 = *(void **)(a1 + 544);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *(_QWORD *)(a1 + 544) = 0LL;
    }
  }
}
