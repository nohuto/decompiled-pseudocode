/*
 * XREFs of KiInsertSecondarySignalList @ 0x1401D5B4C
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x1401D57F0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     KiAcquireSecondarySignalListLock @ 0x1401D5898 (KiAcquireSecondarySignalListLock.c)
 *     KiReleaseSecondarySignalListLock @ 0x1401D5DD8 (KiReleaseSecondarySignalListLock.c)
 */

__int64 __fastcall KiInsertSecondarySignalList(_QWORD **a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( *a1 != a1 )
  {
    KiAcquireSecondarySignalListLock(&v5);
    v2 = qword_140307CF8;
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_140307CF8 != &KiSecondarySignalList )
    {
      __fastfail(3u);
    }
    if ( (_QWORD **)(*a1)[1] != a1 || (_QWORD **)*a1[1] != a1 )
      __fastfail(3u);
    v3 = KiSecondarySignalDpcRunning == 0;
    *(_QWORD *)qword_140307CF8 = a1;
    qword_140307CF8 = (__int64)a1[1];
    *a1[1] = &KiSecondarySignalList;
    a1[1] = (_QWORD *)v2;
    if ( v3 )
    {
      KiSecondarySignalDpcRunning = 1;
      KiInsertQueueDpc((ULONG_PTR)&KiSecondarySignalDpc, 0LL, 0LL, 0LL, 0);
    }
    LOBYTE(v2) = v5;
    return KiReleaseSecondarySignalListLock(v2);
  }
  return result;
}
