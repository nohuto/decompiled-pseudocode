/*
 * XREFs of EmpProviderRegister @ 0x140597C74
 * Callers:
 *     EmProviderRegister @ 0x140597C50 (EmProviderRegister.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x14016183C (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x1401619DC (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x140161A10 (EmpSearchEntryDatabase.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(void *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  __int64 v6; // rbp
  unsigned int v9; // r12d
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r9
  signed __int8 v14; // cf
  __int64 v15; // rsi
  _QWORD *PoolWithTag; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  PVOID v20; // rax
  unsigned int v21; // ebp
  __int64 v22; // r15
  __int64 *v23; // r10
  __int64 v24; // rsi
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // r10
  _QWORD *v28; // r11
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 i; // rbp
  __int64 k; // rbp
  __int64 v33; // rdx
  _QWORD *m; // rsi
  PVOID v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // r15d
  __int64 v41; // rsi
  _QWORD *v42; // r10
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // r10
  __int64 v46; // rdx
  _QWORD *j; // rsi
  SIZE_T v48; // rsi
  PVOID v49; // rax
  _QWORD *v50; // r11
  _QWORD *v51; // rcx
  _QWORD *v52; // rcx
  _QWORD *v53; // rax
  void *v54; // rcx
  unsigned int v55; // r8d
  __int64 v56; // rdx
  _QWORD *v57; // rcx
  __int64 v58; // r9
  _QWORD *v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx

  v6 = a3;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL, a4);
  v14 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v15 = v12;
  if ( v14 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v12, (ULONG_PTR)&EmpDatabaseLock, v13);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  if ( !a6 || (_DWORD)v6 && !a2 || a5 && !a4 )
  {
LABEL_59:
    v11 = -1073741811;
LABEL_60:
    if ( v10 )
    {
      v54 = (void *)v10[1];
      if ( v54 )
        ExFreePoolWithTag(v54, 0x72704D45u);
      if ( v10[3] )
      {
        v55 = 0;
        if ( v9 )
        {
          v56 = 0LL;
          do
          {
            v57 = (_QWORD *)(v56 + v10[3] + 16LL);
            v58 = *v57;
            v59 = (_QWORD *)v57[1];
            if ( *(_QWORD **)(*v57 + 8LL) != v57 || (_QWORD *)*v59 != v57 )
              __fastfail(3u);
            ++v55;
            *v59 = v58;
            v56 += 32LL;
            *(_QWORD *)(v58 + 8) = v59;
          }
          while ( v55 < v9 );
        }
        ExFreePoolWithTag((PVOID)v10[3], 0x72704D45u);
      }
      if ( v10[5] )
      {
        if ( a5 )
        {
          v60 = 0LL;
          v61 = a5;
          do
          {
            v62 = *(_QWORD *)(v60 + v10[5]);
            if ( v62 && !*(_DWORD *)(v62 + 24) )
              *(_QWORD *)(v62 + 16) = 0LL;
            v60 += 8LL;
            --v61;
          }
          while ( v61 );
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
  v19 = PoolWithTag + 7;
  v19[1] = v19;
  *v19 = v19;
  if ( (_DWORD)v6 )
  {
    v36 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * v6), 0x72704D45u);
    v10[1] = v36;
    if ( v36 )
    {
      memset(v36, 0, (unsigned int)(8 * v6));
      *((_DWORD *)v10 + 4) = v6;
      v37 = (_QWORD *)(a2 + 8);
      v38 = v6;
      do
      {
        if ( *v37 )
          ++*((_DWORD *)v10 + 8);
        v37 += 3;
        --v38;
      }
      while ( v38 );
      v39 = *((_DWORD *)v10 + 8);
      if ( v39 )
      {
        v48 = (unsigned int)(32 * v39);
        v49 = ExAllocatePoolWithTag(PagedPool, v48, 0x72704D45u);
        v10[3] = v49;
        if ( !v49 )
          goto LABEL_50;
        memset(v49, 0, (unsigned int)v48);
      }
      v40 = 0;
      v41 = 0LL;
      v42 = (_QWORD *)(a2 + 8);
      while ( 1 )
      {
        v43 = (_QWORD *)*(v42 - 1);
        if ( !v43 )
          goto LABEL_59;
        v44 = EmpSearchEntryDatabase(v43);
        if ( !v44 )
        {
LABEL_56:
          v11 = -1073741275;
          goto LABEL_60;
        }
        *(_QWORD *)(v41 + v10[1]) = v44;
        if ( *v45 )
        {
          v50 = v44 + 7;
          v51 = (_QWORD *)(v10[3] + 32LL * v9);
          *v51 = *v45;
          v51[1] = v45[1];
          v52 = v51 + 2;
          v53 = (_QWORD *)v44[8];
          *v52 = v50;
          v52[1] = v53;
          if ( (_QWORD *)*v53 != v50 )
            __fastfail(3u);
          *v53 = v52;
          ++v9;
          v50[1] = v52;
        }
        ++v40;
        v41 += 8LL;
        v42 = v45 + 3;
        if ( v40 >= (unsigned int)v6 )
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
    v20 = ExAllocatePoolWithTag(PagedPool, 8 * a5, 0x72704D45u);
    v10[5] = v20;
    if ( v20 )
    {
      memset(v20, 0, 8 * a5);
      v21 = 0;
      *((_DWORD *)v10 + 12) = a5;
      v22 = 0LL;
      v23 = (__int64 *)(a4 + 8);
      while ( 1 )
      {
        v24 = *v23;
        if ( !*v23 )
          goto LABEL_59;
        v25 = (_QWORD *)*(v23 - 1);
        if ( !v25 )
          goto LABEL_59;
        v26 = EmpSearchCallbackDatabase(v25);
        v28 = v26;
        if ( !v26 )
          goto LABEL_56;
        v29 = v26[2];
        if ( v29 && v29 != v24 )
        {
          v11 = -1073741771;
          goto LABEL_60;
        }
        ++v21;
        *(_QWORD *)(v22 + v10[5]) = v28;
        v22 += 8LL;
        v28[2] = *v27;
        v30 = v27[1];
        v23 = v27 + 3;
        v28[4] = v30;
        if ( v21 >= a5 )
          goto LABEL_20;
      }
    }
    goto LABEL_50;
  }
LABEL_20:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v10 + 4); i = (unsigned int)(i + 1) )
  {
    v46 = *(_QWORD *)(v10[1] + 8 * i);
    _InterlockedIncrement((volatile signed __int32 *)(v46 + 16));
    for ( j = *(_QWORD **)(v46 + 72); j; j = (_QWORD *)*j )
      EmpQueueRuleUpdateState(*(j - 1), 0LL, v17, v18);
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)v10 + 12); k = (unsigned int)(k + 1) )
  {
    v33 = *(_QWORD *)(v10[5] + 8 * k);
    _InterlockedIncrement((volatile signed __int32 *)(v33 + 24));
    for ( m = *(_QWORD **)(v33 + 48); m; m = (_QWORD *)*m )
      EmpQueueRuleUpdateState(*(m - 1), 0LL, v17, v18);
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
