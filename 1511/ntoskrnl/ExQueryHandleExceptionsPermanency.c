/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x140213938
 * Callers:
 *     ObpCloseHandle @ 0x1403F6F6C (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 * Callees:
 *     ExpLockHandleTableExclusive @ 0x14009646C (ExpLockHandleTableExclusive.c)
 */

__int64 __fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, bool *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread);
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    *a2 = 1;
    *a3 = (*(_BYTE *)(v7 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    *a3 = 1;
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  return ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
}
