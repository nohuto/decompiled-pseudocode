/*
 * XREFs of PnpRestartDeviceNode @ 0x14062DC88
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventRestartRemovalRelations @ 0x140580604 (PiEventRestartRemovalRelations.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140641FDC (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessClearDeviceProblem @ 0x14064973C (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x140649B48 (PiRestartDevice.c)
 *     PiEventQueryRemoveNoFdo @ 0x14064D150 (PiEventQueryRemoveNoFdo.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14000962C (PipSetDevNodeState.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PipClearDevNodeUserFlags @ 0x1403F14F4 (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 *     PpDevNodeUnlockTree @ 0x1403F49E0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PnpRestartDeviceNode(__int64 a1)
{
  unsigned int v2; // edi
  bool v3; // zf
  void *v4; // rcx

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
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = *(void **)(a1 + 440);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(a1 + 440) = 0LL;
        PipClearDevNodeFlags(a1, 512);
      }
      KeReleaseGuardedMutex(&PiResourceListLock);
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
