/*
 * XREFs of BcdFlushStore @ 0x140532A04
 * Callers:
 *     PopBcdClearPendingResume @ 0x14053C630 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140124DA8 (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x14015B820 (ZwFlushKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdFlushStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 result; // rax
  void *v5; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    v5 = (void *)BiSanitizeHandle(a1);
    v6 = ZwFlushKey(v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
  return result;
}
