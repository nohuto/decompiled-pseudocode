/*
 * XREFs of KeIntSteerAssignCpuSetForGsiv @ 0x1401DA544
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerAssignCpuSet @ 0x1401DA5E8 (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1401DA640 (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSetForGsiv(int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v6; // ebx
  KIRQL v7; // al
  ULONG_PTR v8; // rcx
  ULONG_PTR *v9; // rdx
  KIRQL v10; // si

  v6 = a1 != -1 ? 0xC0000225 : 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  v8 = KiIntTrackRootList;
  v9 = &KiIntTrackRootList;
  v10 = v7;
  while ( (ULONG_PTR *)v8 != v9 )
  {
    if ( a1 == -1 )
    {
      KiIntSteerClearCpuSetAssignment(v8);
    }
    else if ( *(_DWORD *)(v8 + 32) == a1 )
    {
      v6 = KiIntSteerAssignCpuSet(v8, a2, a3);
      break;
    }
    v8 = *(_QWORD *)v8;
  }
  KeReleaseSpinLock(&KiIntTrackSpinlock, v10);
  return v6;
}
