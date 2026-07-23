/*
 * XREFs of CmpInitDelayDerefKCBEngine @ 0x14055BC28
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14007D180 (KeInitializeGuardedMutex.c)
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
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
  __int64 v7; // rax
  _QWORD *v8; // r10
  const char *v9; // rcx
  unsigned int v10; // r9d
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int128 *v15; // rdx
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rax

  qword_140322B58 = (__int64)&CmpDelayDerefKCBListHead;
  CmpDelayDerefKCBListHead = (__int64)&CmpDelayDerefKCBListHead;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  qword_140322BB8 = 0LL;
  CmpDelayDerefKCBWorkItem = 0LL;
  qword_140322BB0 = (__int64)CmpDelayDerefKCBWorker;
  if ( !qword_1403262C0 )
  {
    v0 = __rdtsc();
    v1 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4)) ^ 0x59CLL;
    if ( !v1 )
      v1 = 1LL;
    qword_1403262C0 = v1;
    v2 = &KeServiceDescriptorTable;
    v3 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x59CLL;
    qword_1403262C8 = v3;
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
      v7 = *(unsigned __int8 *)v2;
      v2 = (__int128 *)((char *)v2 + 1);
      v5 = __ROR8__(v5 - v7, v3);
    }
    v8 = (_QWORD *)KeServiceDescriptorTable;
    v9 = (const char *)KeServiceDescriptorTable;
    v10 = 4 * xmmword_1403AA7D0;
    v11 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_1403AA7D0);
    qword_1403262D8 = v5;
    if ( (unsigned __int64)KeServiceDescriptorTable < v11 )
    {
      do
      {
        _mm_prefetch(v9, 0);
        v9 += 64;
      }
      while ( (unsigned __int64)v9 < v11 );
    }
    v12 = v1;
    if ( v10 >= 8 )
    {
      v13 = (unsigned __int64)v10 >> 3;
      do
      {
        v12 = __ROR8__(v12 - *v8++, v3);
        v10 -= 8;
        --v13;
      }
      while ( v13 );
    }
    for ( ; v10; --v10 )
    {
      v14 = *(unsigned __int8 *)v8;
      v8 = (_QWORD *)((char *)v8 + 1);
      v12 = __ROR8__(v12 - v14, v3);
    }
    qword_1403262E0 = v12;
    v15 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v16 = 4LL;
    v17 = 32;
    do
    {
      v1 = __ROR8__(v1 - *(_QWORD *)v15, v3);
      v15 = (__int128 *)((char *)v15 + 8);
      v17 -= 8;
      --v16;
    }
    while ( v16 );
    for ( ; v17; --v17 )
    {
      v18 = *(unsigned __int8 *)v15;
      v15 = (__int128 *)((char *)v15 + 1);
      v1 = __ROR8__(v1 - v18, v3);
    }
    qword_1403262E8 = v1;
    qword_1403262D0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  return KeInitializeTimer2((__int64)&CmpDelayDerefKCBTimer, (__int64)CmpDelayDerefKCBTimerRoutine, 0LL, 8);
}
