/*
 * XREFs of EmpProviderRegister @ 0x140528320
 * Callers:
 *     EmProviderRegister @ 0x1405282FC (EmProviderRegister.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EmpQueueRuleUpdateState @ 0x1401350F4 (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x140135294 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x1401352C8 (EmpSearchEntryDatabase.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(void *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  __int64 v6; // rbp
  unsigned int v9; // r12d
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  signed __int8 v13; // cf
  __int64 v14; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  PVOID v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // r15
  __int64 *v20; // r10
  __int64 v21; // rsi
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // r10
  _QWORD *v25; // r11
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 i; // rbp
  __int64 k; // rbp
  __int64 v30; // rdx
  _QWORD *m; // rsi
  PVOID v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // r15d
  __int64 v38; // rsi
  _QWORD *v39; // r10
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // r10
  __int64 v43; // rdx
  _QWORD *j; // rsi
  SIZE_T v45; // rsi
  PVOID v46; // rax
  _QWORD *v47; // r11
  _QWORD *v48; // rcx
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  void *v51; // rcx
  unsigned int v52; // r8d
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // r9
  _QWORD *v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx

  v6 = a3;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v14 = v12;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v12, (ULONG_PTR)&EmpDatabaseLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( !a6 || (_DWORD)v6 && !a2 || a5 && !a4 )
  {
LABEL_59:
    v11 = -1073741811;
LABEL_60:
    if ( v10 )
    {
      v51 = (void *)v10[1];
      if ( v51 )
        ExFreePoolWithTag(v51, 0x72704D45u);
      if ( v10[3] )
      {
        v52 = 0;
        if ( v9 )
        {
          v53 = 0LL;
          do
          {
            v54 = (_QWORD *)(v53 + v10[3] + 16LL);
            v55 = *v54;
            v56 = (_QWORD *)v54[1];
            if ( *(_QWORD **)(*v54 + 8LL) != v54 || (_QWORD *)*v56 != v54 )
              __fastfail(3u);
            ++v52;
            *v56 = v55;
            v53 += 32LL;
            *(_QWORD *)(v55 + 8) = v56;
          }
          while ( v52 < v9 );
        }
        ExFreePoolWithTag((PVOID)v10[3], 0x72704D45u);
      }
      if ( v10[5] )
      {
        if ( a5 )
        {
          v57 = 0LL;
          v58 = a5;
          do
          {
            v59 = *(_QWORD *)(v57 + v10[5]);
            if ( v59 && !*(_DWORD *)(v59 + 24) )
              *(_QWORD *)(v59 + 16) = 0LL;
            v57 += 8LL;
            --v58;
          }
          while ( v58 );
        }
        ExFreePoolWithTag((PVOID)v10[5], 0x72704D45u);
      }
      ExFreePoolWithTag(v10, 0x72704D45u);
    }
    goto LABEL_29;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x72704D45u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    goto LABEL_29;
  }
  PoolWithTag[3] = 0LL;
  *((_DWORD *)PoolWithTag + 8) = 0;
  PoolWithTag[5] = 0LL;
  *((_DWORD *)PoolWithTag + 12) = 0;
  PoolWithTag[1] = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  v16 = PoolWithTag + 7;
  v16[1] = v16;
  *v16 = v16;
  if ( (_DWORD)v6 )
  {
    v33 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * v6), 0x72704D45u);
    v10[1] = v33;
    if ( v33 )
    {
      memset(v33, 0, (unsigned int)(8 * v6));
      *((_DWORD *)v10 + 4) = v6;
      v34 = (_QWORD *)(a2 + 8);
      v35 = v6;
      do
      {
        if ( *v34 )
          ++*((_DWORD *)v10 + 8);
        v34 += 3;
        --v35;
      }
      while ( v35 );
      v36 = *((_DWORD *)v10 + 8);
      if ( v36 )
      {
        v45 = (unsigned int)(32 * v36);
        v46 = ExAllocatePoolWithTag(PagedPool, v45, 0x72704D45u);
        v10[3] = v46;
        if ( !v46 )
          goto LABEL_50;
        memset(v46, 0, (unsigned int)v45);
      }
      v37 = 0;
      v38 = 0LL;
      v39 = (_QWORD *)(a2 + 8);
      while ( 1 )
      {
        v40 = (_QWORD *)*(v39 - 1);
        if ( !v40 )
          goto LABEL_59;
        v41 = EmpSearchEntryDatabase(v40);
        if ( !v41 )
        {
LABEL_56:
          v11 = -1073741275;
          goto LABEL_60;
        }
        *(_QWORD *)(v38 + v10[1]) = v41;
        if ( *v42 )
        {
          v47 = v41 + 7;
          v48 = (_QWORD *)(v10[3] + 32LL * v9);
          *v48 = *v42;
          v48[1] = v42[1];
          v49 = v48 + 2;
          v50 = (_QWORD *)v41[8];
          *v49 = v47;
          v49[1] = v50;
          if ( (_QWORD *)*v50 != v47 )
            __fastfail(3u);
          *v50 = v49;
          ++v9;
          v47[1] = v49;
        }
        ++v37;
        v38 += 8LL;
        v39 = v42 + 3;
        if ( v37 >= (unsigned int)v6 )
          goto LABEL_12;
      }
    }
LABEL_50:
    v11 = -1073741670;
    goto LABEL_60;
  }
LABEL_12:
  if ( a5 )
  {
    v17 = ExAllocatePoolWithTag(PagedPool, 8 * a5, 0x72704D45u);
    v10[5] = v17;
    if ( v17 )
    {
      memset(v17, 0, 8 * a5);
      v18 = 0;
      *((_DWORD *)v10 + 12) = a5;
      v19 = 0LL;
      v20 = (__int64 *)(a4 + 8);
      while ( 1 )
      {
        v21 = *v20;
        if ( !*v20 )
          goto LABEL_59;
        v22 = (_QWORD *)*(v20 - 1);
        if ( !v22 )
          goto LABEL_59;
        v23 = EmpSearchCallbackDatabase(v22);
        v25 = v23;
        if ( !v23 )
          goto LABEL_56;
        v26 = v23[2];
        if ( v26 && v26 != v21 )
        {
          v11 = -1073741771;
          goto LABEL_60;
        }
        ++v18;
        *(_QWORD *)(v19 + v10[5]) = v25;
        v19 += 8LL;
        v25[2] = *v24;
        v27 = v24[1];
        v20 = v24 + 3;
        v25[4] = v27;
        if ( v18 >= a5 )
          goto LABEL_20;
      }
    }
    goto LABEL_50;
  }
LABEL_20:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v10 + 4); i = (unsigned int)(i + 1) )
  {
    v43 = *(_QWORD *)(v10[1] + 8 * i);
    _InterlockedIncrement((volatile signed __int32 *)(v43 + 16));
    for ( j = *(_QWORD **)(v43 + 72); j; j = (_QWORD *)*j )
      EmpQueueRuleUpdateState(*(j - 1), 0LL);
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)v10 + 12); k = (unsigned int)(k + 1) )
  {
    v30 = *(_QWORD *)(v10[5] + 8 * k);
    _InterlockedIncrement((volatile signed __int32 *)(v30 + 24));
    for ( m = *(_QWORD **)(v30 + 48); m; m = (_QWORD *)*m )
      EmpQueueRuleUpdateState(*(m - 1), 0LL);
  }
  if ( a1 )
    ObfReferenceObject(a1);
  *v10 = a1;
  *a6 = v10;
LABEL_29:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v11;
}
