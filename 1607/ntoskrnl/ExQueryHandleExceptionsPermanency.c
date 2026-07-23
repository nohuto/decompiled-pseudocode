/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x14022C960
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     ObpCloseHandle @ 0x1404EF704 (ObpCloseHandle.c)
 * Callees:
 *     ExpLockHandleTableExclusive @ 0x1400A7004 (ExpLockHandleTableExclusive.c)
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
