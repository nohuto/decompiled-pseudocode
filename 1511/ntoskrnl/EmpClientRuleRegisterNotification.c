/*
 * XREFs of EmpClientRuleRegisterNotification @ 0x1405F293C
 * Callers:
 *     EmClientRuleRegisterNotification @ 0x1405F292C (EmClientRuleRegisterNotification.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EmpSearchTargetRuleList @ 0x1400995A4 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400995C4 (EmpSearchRuleDatabase.c)
 *     EmpQueueRuleUpdateState @ 0x1401350F4 (EmpQueueRuleUpdateState.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpClientRuleRegisterNotification(PVOID Object, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // r14
  PVOID PoolWithTag; // rsi
  unsigned int v9; // edi
  __int64 v10; // rax
  signed __int8 v11; // cf
  __int64 v12; // rbx
  PVOID v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // r12
  _QWORD *v16; // r15
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  volatile signed __int32 *v19; // rax
  __int64 v20; // r10
  volatile signed __int32 *v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r9
  volatile signed __int32 *v26; // r8

  v4 = a3;
  PoolWithTag = 0LL;
  v9 = 0;
  v10 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v12 = v10;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v10, (ULONG_PTR)&EmpDatabaseLock);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( a4 && (_DWORD)v4 && a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x6C634D45u);
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_37;
    }
    v13 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(40 * v4), 0x6C634D45u);
    *((_QWORD *)PoolWithTag + 1) = v13;
    if ( !v13 )
    {
      v9 = -1073741670;
      goto LABEL_28;
    }
    memset(v13, 0, (unsigned int)(40 * v4));
    v14 = 0;
    *((_DWORD *)PoolWithTag + 4) = v4;
    v15 = 0LL;
    v16 = (_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v17 = (_QWORD *)*(v16 - 1);
      if ( !v17 || !*v16 )
        break;
      v18 = EmpSearchRuleDatabase(v17);
      if ( !v18 || (v19 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v18), (v21 = v19) == 0LL) )
      {
        v9 = -1073741275;
        goto LABEL_28;
      }
      *(_QWORD *)(v15 + *((_QWORD *)PoolWithTag + 1)) = v19;
      *(_QWORD *)(*((_QWORD *)PoolWithTag + 1) + v15 + 8) = *v16;
      *(_QWORD *)(*((_QWORD *)PoolWithTag + 1) + v15 + 16) = v16[1];
      v22 = *(_QWORD **)(v20 + 88);
      v23 = (_QWORD *)(v15 + *((_QWORD *)PoolWithTag + 1) + 24LL);
      *v23 = v20 + 80;
      v23[1] = v22;
      if ( *v22 != v20 + 80 )
        __fastfail(3u);
      *v22 = v23;
      *(_QWORD *)(v20 + 88) = v23;
      if ( _InterlockedIncrement(v21) == 1 )
        EmpQueueRuleUpdateState(v20, 0LL);
      ++v14;
      v16 += 3;
      v15 += 40LL;
      if ( v14 >= (unsigned int)v4 )
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
        v24 = 0LL;
        v25 = v4;
        do
        {
          v26 = *(volatile signed __int32 **)(v24 + *((_QWORD *)PoolWithTag + 1));
          if ( v26 )
            _InterlockedAdd(v26, 0xFFFFFFFF);
          v24 += 40LL;
          --v25;
        }
        while ( v25 );
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
