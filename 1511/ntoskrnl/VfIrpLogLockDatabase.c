/*
 * XREFs of VfIrpLogLockDatabase @ 0x1406CAA10
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x1406B8518 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall VfIrpLogLockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al
  __int64 v3; // rdx
  unsigned int v4; // ebx

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  v3 = 3 * v1;
  v4 = 0;
  if ( *(_DWORD *)(ViIrpLogDatabase + 8 * v3) )
    v4 = -1073741267;
  else
    *(_DWORD *)(ViIrpLogDatabase + 8 * v3) = 1;
  KeReleaseSpinLock(&ViIrpLogDatabaseLock, v2);
  return v4;
}
