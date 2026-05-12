/*
 * XREFs of RaUnitDisableDeviceIrp @ 0x1C0031E7C
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C00325CC (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaUnitWaitForRemoveLock @ 0x1C000BD6C (RaUnitWaitForRemoveLock.c)
 *     RaidRemoveIoQueue @ 0x1C0028E64 (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C0031048 (RaidCancelIrp.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C0035CEC (RaidUnitUnRegisterInterfaces.c)
 */

__int64 __fastcall RaUnitDisableDeviceIrp(__int64 a1, IRP *a2)
{
  unsigned int v3; // eax
  __int64 *v5; // rax
  unsigned int v6; // eax

  v3 = *(_DWORD *)(a1 + 40) - 5;
  *(_DWORD *)(a1 + 40) = 7;
  if ( v3 > 1 )
    RaidUnitUnRegisterInterfaces();
  *(_BYTE *)(a1 + 144) &= ~1u;
  while ( 1 )
  {
    v5 = RaidRemoveIoQueue(a1 + 384);
    if ( !v5 )
      break;
    RaidCancelIrp(a1, 8, (__int64)v5);
  }
  RaUnitReleaseRemoveLock(a1);
  v6 = RaUnitWaitForRemoveLock(a1);
  return RaidCompleteRequestEx(a2, 0, v6);
}
