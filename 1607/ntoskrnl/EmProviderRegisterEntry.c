/*
 * XREFs of EmProviderRegisterEntry @ 0x14061D118
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x14013D1CC (EmpQueueRuleUpdateState.c)
 *     EmpSearchEntryDatabase @ 0x14013D3A0 (EmpSearchEntryDatabase.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmProviderRegisterEntry(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rdi
  int v9; // ebx
  _BYTE *v10; // rax
  _BYTE *v11; // rsi
  _QWORD *v12; // rbp
  unsigned int v13; // r8d
  __int64 v14; // rdx
  _QWORD *v15; // r9
  __int64 v16; // rcx
  void *v17; // rcx
  _QWORD *PoolWithTag; // rax
  unsigned int v20; // eax
  PVOID v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi

  v8 = 0LL;
  v9 = 0;
  v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v10, (ULONG_PTR)&EmpDatabaseLock);
  if ( v11 )
    v11[26] |= 1u;
  if ( !a2 || !a1 || !a3 || !a4 || !*(_QWORD *)a3 || !*(_DWORD *)(a3 + 8) )
    goto LABEL_18;
  v12 = EmpSearchEntryDatabase(a2);
  if ( !v12 )
  {
    v9 = -1073741275;
    goto LABEL_19;
  }
  v13 = *(_DWORD *)(a1 + 16);
  v14 = 0LL;
  if ( v13 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8 * v14);
      v16 = *v15 - *a2;
      if ( *v15 == *a2 )
        v16 = v15[1] - a2[1];
      if ( !v16 )
        break;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_18;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x72704D45u);
    v8 = PoolWithTag;
    if ( PoolWithTag
      && (*PoolWithTag = v12,
          v20 = *(_DWORD *)(a3 + 8),
          *((_DWORD *)v8 + 4) = v20,
          v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x72704D45u),
          (v8[1] = v21) != 0LL) )
    {
      memmove(v21, *(const void **)a3, *((unsigned int *)v8 + 4));
      v22 = *(_QWORD **)(a1 + 64);
      v23 = v8 + 5;
      if ( *v22 != a1 + 56 )
        __fastfail(3u);
      *v23 = a1 + 56;
      v8[6] = v22;
      *v22 = v23;
      *(_QWORD *)(a1 + 64) = v23;
      v24 = (_QWORD *)v12[6];
      v25 = v8 + 3;
      if ( (_QWORD *)*v24 != v12 + 5 )
        __fastfail(3u);
      *v25 = v12 + 5;
      v8[4] = v24;
      *v24 = v25;
      v12[6] = v25;
      v26 = (_QWORD *)v12[9];
      v12[4] = v25;
      while ( v26 )
      {
        EmpQueueRuleUpdateState(*(v26 - 1), (__int64)v12);
        v26 = (_QWORD *)*v26;
      }
      *a4 = v8;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
LABEL_18:
    v9 = -1073741811;
  }
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  if ( v9 < 0 && v8 )
  {
    v17 = (void *)v8[1];
    if ( v17 )
      ExFreePoolWithTag(v17, 0x72704D45u);
    ExFreePoolWithTag(v8, 0x72704D45u);
  }
  return (unsigned int)v9;
}
