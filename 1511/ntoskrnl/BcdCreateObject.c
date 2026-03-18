/*
 * XREFs of BcdCreateObject @ 0x14068D774
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14021682C (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x14063D040 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14068EE8C (BiBindEfiBootManager.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 *     BiCreateObject @ 0x14068DAD4 (BiCreateObject.c)
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
