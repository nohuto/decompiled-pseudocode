/*
 * XREFs of RaUnitDisableDeviceIrp @ 0x1C00351B4
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C003573C (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaUnitWaitForRemoveLock @ 0x1C00100A0 (RaUnitWaitForRemoveLock.c)
 *     RaidRemoveIoQueue @ 0x1C002C9CC (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C0034368 (RaidCancelIrp.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C0038D3C (RaidUnitUnRegisterInterfaces.c)
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
  *(_BYTE *)(a1 + 152) &= ~1u;
  while ( 1 )
  {
    v5 = RaidRemoveIoQueue(a1 + 384);
    if ( !v5 )
      break;
    RaidCancelIrp(a1, 8, (__int64)v5);
  }
  RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
  v6 = RaUnitWaitForRemoveLock(a1);
  return RaidCompleteRequestEx(a2, 0, v6);
}
