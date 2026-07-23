/*
 * XREFs of KeIntSteerAssignCpuSetForGsiv @ 0x1401DA370
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerAssignCpuSet @ 0x1401DA414 (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1401DA46C (KiIntSteerClearCpuSetAssignment.c)
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
