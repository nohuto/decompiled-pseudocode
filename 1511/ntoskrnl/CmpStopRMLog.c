/*
 * XREFs of CmpStopRMLog @ 0x14049B328
 * Callers:
 *     CmShutdownCmRM @ 0x14049B0F8 (CmShutdownCmRM.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     LockRMLog @ 0x1403D6618 (LockRMLog.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpLogCheckpoint @ 0x1404BAB0C (CmpLogCheckpoint.c)
 */

__int64 __fastcall CmpStopRMLog(__int64 a1)
{
  __int64 v2; // rdx

  CmpLockRegistry();
  LockRMLog(a1);
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      CmpLogCheckpoint(a1, v2, 0LL);
      ClfsDeleteMarshallingArea(*(PVOID *)(a1 + 96));
      *(_QWORD *)(a1 + 96) = 0LL;
    }
    if ( (PVOID)a1 != CmRmSystem && *(_QWORD *)(a1 + 16) == a1 + 16 )
      ClfsDeleteLogByPointer(*(PLOG_FILE_OBJECT *)(a1 + 88));
    ClfsCloseLogFileObject(*(PLOG_FILE_OBJECT *)(a1 + 88));
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return CmpUnlockRegistry();
}
