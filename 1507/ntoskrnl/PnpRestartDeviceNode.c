/*
 * XREFs of PnpRestartDeviceNode @ 0x14058C398
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessClearDeviceProblem @ 0x14058C2C8 (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x14058E23C (PiRestartDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14068D60C (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PipClearDevNodeUserFlags @ 0x1404615D0 (PipClearDevNodeUserFlags.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 */

__int64 __fastcall PnpRestartDeviceNode(__int64 a1)
{
  unsigned int v2; // edi
  bool v3; // zf
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // bp
  void *v8; // rcx
  unsigned __int8 v9; // si
  signed __int32 v10; // eax

  PpDevNodeLockTree(4);
  if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
  {
    PipClearDevNodeUserFlags(a1, 5);
    PipClearDevNodeFlags(a1, 1081344);
    *(_DWORD *)(a1 + 704) &= 0xFFFFFC03;
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 300) == 769;
    *(_DWORD *)(a1 + 296) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( !v3 )
    {
      PipClearDevNodeFlags(a1, 2082475264);
      if ( *(_WORD *)(a1 + 56) )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
        *(_DWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      v5 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, v4);
      v6 = v5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v5);
      if ( v6 )
        *(_BYTE *)(v6 + 26) |= 1u;
      qword_14034AA48 = (__int64)KeGetCurrentThread();
      dword_14034AA70 = CurrentIrql;
      v8 = *(void **)(a1 + 440);
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(a1 + 440) = 0LL;
        PipClearDevNodeFlags(a1, 512);
      }
      v9 = dword_14034AA70;
      qword_14034AA48 = 0LL;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
      if ( v10 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v10);
      __writecr8(v9);
      KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
    }
    *(_DWORD *)(a1 + 660) = -1;
    PipSetDevNodeState(a1, 769);
  }
  else
  {
    v2 = -1073741823;
  }
  PpDevNodeUnlockTree(4);
  return v2;
}
