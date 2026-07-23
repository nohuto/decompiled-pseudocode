/*
 * XREFs of EmpProviderRegister @ 0x14055474C
 * Callers:
 *     EmProviderRegister @ 0x140554728 (EmProviderRegister.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x14013D1CC (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x14013D36C (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x14013D3A0 (EmpSearchEntryDatabase.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(void *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  __int64 v6; // rbp
  unsigned int v9; // r12d
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  _BYTE *v12; // rax
  signed __int8 v13; // cf
  _BYTE *v14; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  PVOID v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // r15d
  __int64 v22; // rsi
  _QWORD *v23; // r10
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // r10
  PVOID v27; // rax
  unsigned int v28; // ebp
  __int64 v29; // r15
  __int64 *v30; // r10
  __int64 v31; // rsi
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // r10
  _QWORD *v35; // r11
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 i; // rbp
  __int64 v39; // rdx
  _QWORD *j; // rsi
  __int64 k; // rbp
  __int64 v42; // rdx
  _QWORD *m; // rsi
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
  v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v14 = v12;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v12, (ULONG_PTR)&EmpDatabaseLock);
  if ( v14 )
    v14[26] |= 1u;
  if ( !a6 || (_DWORD)v6 && !a2 || a5 && !a4 )
    goto LABEL_57;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x72704D45u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    goto LABEL_44;
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
    v17 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * v6), 0x72704D45u);
    v10[1] = v17;
    if ( v17 )
    {
      memset(v17, 0, (unsigned int)(8 * v6));
      *((_DWORD *)v10 + 4) = v6;
      v18 = (_QWORD *)(a2 + 8);
      v19 = v6;
      do
      {
        if ( *v18 )
          ++*((_DWORD *)v10 + 8);
        v18 += 3;
        --v19;
      }
      while ( v19 );
      v20 = *((_DWORD *)v10 + 8);
      if ( !v20 )
      {
LABEL_18:
        v21 = 0;
        v22 = 0LL;
        v23 = (_QWORD *)(a2 + 8);
        while ( 1 )
        {
          v24 = (_QWORD *)*(v23 - 1);
          if ( !v24 )
            goto LABEL_57;
          v25 = EmpSearchEntryDatabase(v24);
          if ( !v25 )
          {
LABEL_54:
            v11 = -1073741275;
            goto LABEL_58;
          }
          *(_QWORD *)(v22 + v10[1]) = v25;
          if ( *v26 )
          {
            v47 = v25 + 7;
            v48 = (_QWORD *)(v10[3] + 32LL * v9);
            *v48 = *v26;
            v48[1] = v26[1];
            v49 = v48 + 2;
            v50 = (_QWORD *)v25[8];
            if ( (_QWORD *)*v50 != v47 )
              __fastfail(3u);
            *v49 = v47;
            ++v9;
            v49[1] = v50;
            *v50 = v49;
            v47[1] = v49;
          }
          ++v21;
          v22 += 8LL;
          v23 = v26 + 3;
          if ( v21 >= (unsigned int)v6 )
            goto LABEL_23;
        }
      }
      v45 = (unsigned int)(32 * v20);
      v46 = ExAllocatePoolWithTag(PagedPool, v45, 0x72704D45u);
      v10[3] = v46;
      if ( v46 )
      {
        memset(v46, 0, (unsigned int)v45);
        goto LABEL_18;
      }
    }
LABEL_48:
    v11 = -1073741670;
    goto LABEL_58;
  }
LABEL_23:
  if ( a5 )
  {
    v27 = ExAllocatePoolWithTag(PagedPool, 8 * a5, 0x72704D45u);
    v10[5] = v27;
    if ( !v27 )
      goto LABEL_48;
    memset(v27, 0, 8 * a5);
    v28 = 0;
    *((_DWORD *)v10 + 12) = a5;
    v29 = 0LL;
    v30 = (__int64 *)(a4 + 8);
    while ( 1 )
    {
      v31 = *v30;
      if ( !*v30 )
        break;
      v32 = (_QWORD *)*(v30 - 1);
      if ( !v32 )
        break;
      v33 = EmpSearchCallbackDatabase(v32);
      v35 = v33;
      if ( !v33 )
        goto LABEL_54;
      v36 = v33[2];
      if ( v36 && v36 != v31 )
      {
        v11 = -1073741771;
        goto LABEL_58;
      }
      ++v28;
      *(_QWORD *)(v29 + v10[5]) = v35;
      v29 += 8LL;
      v35[2] = *v34;
      v37 = v34[1];
      v30 = v34 + 3;
      v35[4] = v37;
      if ( v28 >= a5 )
        goto LABEL_31;
    }
LABEL_57:
    v11 = -1073741811;
LABEL_58:
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
    goto LABEL_44;
  }
LABEL_31:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v10 + 4); i = (unsigned int)(i + 1) )
  {
    v39 = *(_QWORD *)(v10[1] + 8 * i);
    _InterlockedIncrement((volatile signed __int32 *)(v39 + 16));
    for ( j = *(_QWORD **)(v39 + 72); j; j = (_QWORD *)*j )
      EmpQueueRuleUpdateState(*(j - 1), 0LL);
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)v10 + 12); k = (unsigned int)(k + 1) )
  {
    v42 = *(_QWORD *)(v10[5] + 8 * k);
    _InterlockedIncrement((volatile signed __int32 *)(v42 + 24));
    for ( m = *(_QWORD **)(v42 + 48); m; m = (_QWORD *)*m )
      EmpQueueRuleUpdateState(*(m - 1), 0LL);
  }
  if ( a1 )
    ObfReferenceObject(a1);
  *v10 = a1;
  *a6 = v10;
LABEL_44:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v11;
}
