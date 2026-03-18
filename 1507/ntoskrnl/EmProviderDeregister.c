/*
 * XREFs of EmProviderDeregister @ 0x14066B8DC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x14016183C (EmpQueueRuleUpdateState.c)
 *     EmpProviderDeregisterEntry @ 0x1401E1D24 (EmpProviderDeregisterEntry.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall EmProviderDeregister(char *P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  unsigned int i; // edx
  _QWORD *v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 j; // rbp
  _QWORD *k; // rsi
  char *v17; // rsi
  char *v18; // rcx
  __int64 m; // rsi
  _QWORD *n; // r14
  void *v21; // rcx

  if ( P )
  {
    v5 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
    v10 = v5;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (ULONG_PTR)&EmpDatabaseLock, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( *((_QWORD *)P + 3) )
    {
      for ( i = 0; i < *((_DWORD *)P + 8); *(_QWORD *)(v13 + 8) = v14 )
      {
        v12 = (_QWORD *)(32LL * i + *((_QWORD *)P + 3) + 16LL);
        v13 = *v12;
        v14 = (_QWORD *)v12[1];
        if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v14 != v12 )
          __fastfail(3u);
        *v14 = v13;
        ++i;
      }
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x72704D45u);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)P + 4); j = (unsigned int)(j + 1) )
    {
      if ( _InterlockedExchangeAdd(
             (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)P + 1) + 8 * j) + 16LL),
             0xFFFFFFFF) == 1 )
      {
        for ( k = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)P + 1) + 8 * j) + 72LL); k; k = (_QWORD *)*k )
          EmpQueueRuleUpdateState(*(k - 1), 0LL, v7, v8);
      }
    }
    v17 = (char *)*((_QWORD *)P + 7);
    while ( v17 != P + 56 )
    {
      v18 = v17 - 40;
      v17 = *(char **)v17;
      EmpProviderDeregisterEntry(v18, v6, v7, v8);
    }
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)P + 12); m = (unsigned int)(m + 1) )
    {
      if ( _InterlockedExchangeAdd(
             (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 24LL),
             0xFFFFFFFF) == 1 )
      {
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 16LL) = 0LL;
        for ( n = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 48LL); n; n = (_QWORD *)*n )
          EmpQueueRuleUpdateState(*(n - 1), 0LL, v7, v8);
      }
    }
    if ( *(_QWORD *)P )
      ObfDereferenceObject(*(PVOID *)P);
    v21 = (void *)*((_QWORD *)P + 5);
    if ( v21 )
      ExFreePoolWithTag(v21, 0x72704D45u);
    ExFreePoolWithTag(P, 0x72704D45u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  }
}
