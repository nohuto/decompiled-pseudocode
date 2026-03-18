/*
 * XREFs of EmProviderRegisterEntry @ 0x14066BB30
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x14016183C (EmpQueueRuleUpdateState.c)
 *     EmpSearchEntryDatabase @ 0x140161A10 (EmpSearchEntryDatabase.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmProviderRegisterEntry(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rdi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  _QWORD *v13; // rbp
  unsigned int v14; // r8d
  __int64 v15; // rdx
  _QWORD *v16; // r9
  __int64 v17; // rcx
  void *v18; // rcx
  _QWORD *PoolWithTag; // rax
  unsigned int v21; // eax
  PVOID v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rsi

  v8 = 0LL;
  v9 = 0;
  v10 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL, (__int64)a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v10, (ULONG_PTR)&EmpDatabaseLock, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( !a2 || !a1 || !a3 || !a4 || !*(_QWORD *)a3 || !*(_DWORD *)(a3 + 8) )
    goto LABEL_18;
  v13 = EmpSearchEntryDatabase(a2);
  if ( !v13 )
  {
    v9 = -1073741275;
    goto LABEL_19;
  }
  v14 = *(_DWORD *)(a1 + 16);
  v15 = 0LL;
  if ( v14 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8 * v15);
      v17 = *v16 - *a2;
      if ( *v16 == *a2 )
        v17 = v16[1] - a2[1];
      if ( !v17 )
        break;
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= v14 )
        goto LABEL_18;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x72704D45u);
    v8 = PoolWithTag;
    if ( PoolWithTag
      && (*PoolWithTag = v13,
          v21 = *(_DWORD *)(a3 + 8),
          *((_DWORD *)v8 + 4) = v21,
          v22 = ExAllocatePoolWithTag(PagedPool, v21, 0x72704D45u),
          (v8[1] = v22) != 0LL) )
    {
      memmove(v22, *(const void **)a3, *((unsigned int *)v8 + 4));
      v25 = *(_QWORD **)(a1 + 64);
      v26 = v8 + 5;
      v8[5] = a1 + 56;
      v8[6] = v25;
      if ( *v25 != a1 + 56 )
        __fastfail(3u);
      *v25 = v26;
      *(_QWORD *)(a1 + 64) = v26;
      v27 = (_QWORD *)v13[6];
      v28 = v8 + 3;
      v8[3] = v13 + 5;
      v8[4] = v27;
      if ( (_QWORD *)*v27 != v13 + 5 )
        __fastfail(3u);
      *v27 = v28;
      v13[6] = v28;
      v29 = (_QWORD *)v13[9];
      v13[4] = v28;
      while ( v29 )
      {
        EmpQueueRuleUpdateState(*(v29 - 1), (__int64)v13, v23, v24);
        v29 = (_QWORD *)*v29;
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
    v18 = (void *)v8[1];
    if ( v18 )
      ExFreePoolWithTag(v18, 0x72704D45u);
    ExFreePoolWithTag(v8, 0x72704D45u);
  }
  return (unsigned int)v9;
}
