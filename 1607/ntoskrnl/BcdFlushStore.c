/*
 * XREFs of BcdFlushStore @ 0x140532F44
 * Callers:
 *     PopBcdClearPendingResume @ 0x14053CB70 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140125318 (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x14012E5FC (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x14015BD90 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdFlushStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // di
  NTSTATUS result; // eax
  void *v5; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ebx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    v5 = (void *)BiSanitizeHandle((__int64)BcdStoreHandle);
    v6 = ZwFlushKey(v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
  return result;
}
