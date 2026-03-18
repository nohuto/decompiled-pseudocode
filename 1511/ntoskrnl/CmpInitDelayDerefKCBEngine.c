/*
 * XREFs of CmpInitDelayDerefKCBEngine @ 0x14051CA84
 * Callers:
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeTimer2 @ 0x140093234 (KeInitializeTimer2.c)
 *     KeInitializeGuardedMutex @ 0x140093730 (KeInitializeGuardedMutex.c)
 */

char CmpInitDelayDerefKCBEngine()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r8
  __int128 *v2; // r9
  __int64 v3; // r11
  int v4; // r10d
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // r10
  const char *v8; // rcx
  unsigned int v9; // r9d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int128 *v13; // rdx
  __int64 v14; // rax
  int v15; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  qword_1402FD558 = (__int64)&CmpDelayDerefKCBListHead;
  CmpDelayDerefKCBListHead = (__int64)&CmpDelayDerefKCBListHead;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  qword_1402FD5B8 = 0LL;
  CmpDelayDerefKCBWorkItem = 0LL;
  qword_1402FD5B0 = (__int64)CmpDelayDerefKCBWorker;
  if ( !qword_1402FDF70 )
  {
    v0 = __rdtsc();
    v1 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4)) ^ 0x57ELL;
    if ( !v1 )
      v1 = 1LL;
    qword_1402FDF70 = v1;
    v2 = &KeServiceDescriptorTable;
    v3 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x57ELL;
    qword_1402FDF78 = v3;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v4 = 64;
    v5 = v1;
    v6 = 8LL;
    do
    {
      v5 = __ROR8__(v5 - *(_QWORD *)v2, v3);
      v2 = (__int128 *)((char *)v2 + 8);
      v4 -= 8;
      --v6;
    }
    while ( v6 );
    for ( ; v4; --v4 )
    {
      v17 = *(unsigned __int8 *)v2;
      v2 = (__int128 *)((char *)v2 + 1);
      v5 = __ROR8__(v5 - v17, v3);
    }
    v7 = (_QWORD *)KeServiceDescriptorTable;
    v8 = (const char *)KeServiceDescriptorTable;
    v9 = 4 * xmmword_140382790;
    v10 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140382790);
    qword_1402FDF88 = v5;
    if ( (unsigned __int64)KeServiceDescriptorTable < v10 )
    {
      do
      {
        _mm_prefetch(v8, 0);
        v8 += 64;
      }
      while ( (unsigned __int64)v8 < v10 );
    }
    v11 = v1;
    if ( v9 >= 8 )
    {
      v12 = (unsigned __int64)v9 >> 3;
      do
      {
        v11 = __ROR8__(v11 - *v7++, v3);
        v9 -= 8;
        --v12;
      }
      while ( v12 );
    }
    for ( ; v9; --v9 )
    {
      v18 = *(unsigned __int8 *)v7;
      v7 = (_QWORD *)((char *)v7 + 1);
      v11 = __ROR8__(v11 - v18, v3);
    }
    qword_1402FDF90 = v11;
    v13 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v14 = 4LL;
    v15 = 32;
    do
    {
      v1 = __ROR8__(v1 - *(_QWORD *)v13, v3);
      v13 = (__int128 *)((char *)v13 + 8);
      v15 -= 8;
      --v14;
    }
    while ( v14 );
    for ( ; v15; --v15 )
    {
      v19 = *(unsigned __int8 *)v13;
      v13 = (__int128 *)((char *)v13 + 1);
      v1 = __ROR8__(v1 - v19, v3);
    }
    qword_1402FDF98 = v1;
    qword_1402FDF80 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  return KeInitializeTimer2((__int64)CmpDelayDerefKCBTimer, (__int64)CmpDelayDerefKCBTimerRoutine, 0LL, 8);
}
