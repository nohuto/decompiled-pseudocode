/*
 * XREFs of MiLockAllMemoryLists @ 0x14014CA34
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiLockAllMemoryLists(PKLOCK_QUEUE_HANDLE LockHandle)
{
  int v2; // eax
  __int64 *v3; // r14
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned int v8; // ebp
  KSPIN_LOCK *v9; // rbp
  __int64 v10; // rbx
  KSPIN_LOCK *v11; // rbp
  __int64 v12; // r14
  KSPIN_LOCK *v13; // rbp

  KeAcquireInStackQueuedSpinLock(&qword_140354A60, LockHandle);
  v2 = dword_14034EBBC;
  v3 = &qword_1403542C0;
  LODWORD(v4) = 1;
  v5 = 0;
  v6 = 8LL;
  do
  {
    v7 = *v3;
    v8 = 0;
    if ( v2 )
    {
      do
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(
          (PKSPIN_LOCK)(v7 + 8 * (v8 + 4 * (v8 + 1LL))),
          &LockHandle[(unsigned int)v4]);
        v2 = dword_14034EBBC;
        LODWORD(v4) = v4 + 1;
        ++v8;
      }
      while ( v8 < dword_14034EBBC );
    }
    ++v3;
  }
  while ( (__int64)v3 <= (__int64)&qword_1403542C8 );
  v9 = &qword_1403543E0;
  do
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v9, &LockHandle[(unsigned int)v4]);
    v9 += 5;
    v4 = (unsigned int)(v4 + 1);
    --v6;
  }
  while ( v6 );
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140355320, &LockHandle[v4]);
  v10 = (unsigned int)(v4 + 1);
  v11 = &qword_1403547E0;
  v12 = 16LL;
  do
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v11, &LockHandle[v10]);
    v11 += 5;
    v10 = (unsigned int)(v10 + 1);
    --v12;
  }
  while ( v12 );
  if ( KeNumberNodes )
  {
    v13 = (KSPIN_LOCK *)(qword_140353D28 + 1328);
    do
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v13, &LockHandle[v10]);
      v10 = (unsigned int)(v10 + 1);
      v13 += 167;
      ++v5;
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140355360, &LockHandle[v10]);
}
