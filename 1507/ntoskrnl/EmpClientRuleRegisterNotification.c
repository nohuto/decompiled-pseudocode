/*
 * XREFs of EmpClientRuleRegisterNotification @ 0x14066B668
 * Callers:
 *     EmClientRuleRegisterNotification @ 0x14066B658 (EmClientRuleRegisterNotification.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EmpSearchTargetRuleList @ 0x1400CFA20 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400CFA40 (EmpSearchRuleDatabase.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x14016183C (EmpQueueRuleUpdateState.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpClientRuleRegisterNotification(PVOID Object, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // r14
  PVOID PoolWithTag; // rsi
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // r9
  signed __int8 v12; // cf
  __int64 v13; // rbx
  PVOID v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // r12
  _QWORD *v17; // r15
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  volatile signed __int32 *v20; // rax
  __int64 v21; // r9
  __int64 v22; // r10
  volatile signed __int32 *v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  volatile signed __int32 *v28; // r8

  v4 = a3;
  PoolWithTag = 0LL;
  v9 = 0;
  v10 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL, (__int64)a4);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v13 = v10;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v10, (ULONG_PTR)&EmpDatabaseLock, v11);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( a4 && (_DWORD)v4 && a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x6C634D45u);
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_37;
    }
    v14 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(40 * v4), 0x6C634D45u);
    *((_QWORD *)PoolWithTag + 1) = v14;
    if ( !v14 )
    {
      v9 = -1073741670;
      goto LABEL_28;
    }
    memset(v14, 0, (unsigned int)(40 * v4));
    v15 = 0;
    *((_DWORD *)PoolWithTag + 4) = v4;
    v16 = 0LL;
    v17 = (_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v18 = (_QWORD *)*(v17 - 1);
      if ( !v18 || !*v17 )
        break;
      v19 = EmpSearchRuleDatabase(v18);
      if ( !v19 || (v20 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v19), (v23 = v20) == 0LL) )
      {
        v9 = -1073741275;
        goto LABEL_28;
      }
      *(_QWORD *)(v16 + *((_QWORD *)PoolWithTag + 1)) = v20;
      *(_QWORD *)(*((_QWORD *)PoolWithTag + 1) + v16 + 8) = *v17;
      *(_QWORD *)(*((_QWORD *)PoolWithTag + 1) + v16 + 16) = v17[1];
      v24 = *(_QWORD **)(v22 + 88);
      v25 = (_QWORD *)(v16 + *((_QWORD *)PoolWithTag + 1) + 24LL);
      *v25 = v22 + 80;
      v25[1] = v24;
      if ( *v24 != v22 + 80 )
        __fastfail(3u);
      *v24 = v25;
      *(_QWORD *)(v22 + 88) = v25;
      if ( _InterlockedIncrement(v23) == 1 )
        EmpQueueRuleUpdateState(v22, 0LL, (__int64)v23, v21);
      ++v15;
      v17 += 3;
      v16 += 40LL;
      if ( v15 >= (unsigned int)v4 )
      {
        if ( Object )
          ObfReferenceObject(Object);
        *(_QWORD *)PoolWithTag = Object;
        *a4 = PoolWithTag;
        goto LABEL_37;
      }
    }
  }
  v9 = -1073741811;
LABEL_28:
  if ( PoolWithTag )
  {
    if ( *((_QWORD *)PoolWithTag + 1) )
    {
      if ( (_DWORD)v4 )
      {
        v26 = 0LL;
        v27 = v4;
        do
        {
          v28 = *(volatile signed __int32 **)(v26 + *((_QWORD *)PoolWithTag + 1));
          if ( v28 )
            _InterlockedAdd(v28, 0xFFFFFFFF);
          v26 += 40LL;
          --v27;
        }
        while ( v27 );
      }
      ExFreePoolWithTag(*((PVOID *)PoolWithTag + 1), 0x6C634D45u);
    }
    ExFreePoolWithTag(PoolWithTag, 0x6C634D45u);
  }
LABEL_37:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v9;
}
