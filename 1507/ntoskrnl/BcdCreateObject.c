/*
 * XREFs of BcdCreateObject @ 0x14070D28C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x1406BD5E4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14070E9A4 (BiBindEfiBootManager.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014FE60 (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
 *     BiCreateObject @ 0x14070D5EC (BiCreateObject.c)
 */

NTSTATUS __fastcall BcdCreateObject(int a1, int a2, int a3, __int64 a4)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
  int Object; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0, a4);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
