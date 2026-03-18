/*
 * XREFs of CmpUndoDeleteKeyForTrans @ 0x1403B4238
 * Callers:
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403DE050 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmListGetPrevElement @ 0x1403DF088 (CmListGetPrevElement.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTrans(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 *v3; // r14
  int v4; // edi
  __int64 v5; // r12
  __int64 PrevElement; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r10
  int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned int v16; // r13d
  __int64 *PoolWithTag; // rax
  __int64 v18; // rax
  unsigned int v19; // r13d
  __int64 *v20; // rsi
  __int64 UnitOfWork; // rax
  __int64 v22; // rcx
  __int64 *v23; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  ULONG_PTR *v32; // rsi
  int *v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+28h] [rbp-50h]
  int v35; // [rsp+80h] [rbp+8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+10h]
  int v37; // [rsp+90h] [rbp+18h] BYREF
  __int64 v38; // [rsp+98h] [rbp+20h] BYREF

  v36 = a2;
  v2 = *(_QWORD *)(a1 + 72);
  v3 = 0LL;
  v35 = -1;
  v4 = 0;
  v5 = 0LL;
  v38 = 0LL;
  do
  {
    PrevElement = CmListGetPrevElement(v2 + 200, &v38);
    v8 = PrevElement;
    if ( !PrevElement )
      return 3221225524LL;
  }
  while ( *(_DWORD *)(PrevElement + 68) != 3 || *(_QWORD *)(PrevElement + 80) != a1 );
  v38 = 0LL;
  v9 = CmListGetPrevElement(a1 + 200, &v38);
  v34 = v9;
  if ( !v9 || *(_DWORD *)(v9 + 68) != 2 )
    return 3221225524LL;
  if ( *(_QWORD *)(a1 + 280) == v10 )
  {
    v15 = *(unsigned int *)(a1 + 272);
    v16 = *(_DWORD *)(a1 + 276);
  }
  else
  {
    v12 = *(unsigned int *)(a1 + 40);
    v13 = *(_QWORD *)(a1 + 32);
    v37 = v11;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(v13 + 8))(v13, v12, &v37);
    if ( !v14 )
      return 3221225626LL;
    v15 = *(unsigned int *)(v14 + 36);
    v16 = *(_DWORD *)(v14 + 40);
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v37);
  }
  if ( (_DWORD)v15 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v15, 0x37344D43u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v15);
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
              *(_QWORD *)(a1 + 32),
              v16,
              &v35);
      v5 = v18;
      if ( v18 )
      {
        v19 = 0;
        v20 = v3;
        v33 = (int *)v18;
        while ( 1 )
        {
          UnitOfWork = CmpAllocateUnitOfWork();
          *v20 = UnitOfWork;
          if ( !UnitOfWork )
            break;
          v22 = UnitOfWork + 32;
          v23 = *(__int64 **)(a1 + 208);
          *(_QWORD *)(UnitOfWork + 32) = a1 + 200;
          *(_QWORD *)(UnitOfWork + 40) = v23;
          if ( *v23 != a1 + 200 )
            __fastfail(3u);
          *v23 = v22;
          *(_QWORD *)(a1 + 208) = v22;
          CmpReferenceKeyControlBlock(a1);
          *(_QWORD *)(*v20 + 48) = a1;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
          v25 = (_QWORD *)*v20;
          v26 = v36 + 16;
          v27 = *(_QWORD **)(v36 + 24);
          *v25 = v36 + 16;
          v25[1] = v27;
          if ( *v27 != v26 )
            __fastfail(3u);
          *v27 = v25;
          *(_QWORD *)(v26 + 8) = v25;
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          *(_QWORD *)(*v20 + 56) = v36;
          if ( !(unsigned __int8)CmpLockIXLockIntent(a1 + 240, *v20)
            || !(unsigned __int8)CmpLockIXLockExclusive(a1 + 256, *v20, 1LL) )
          {
            v4 = -1072103423;
            goto LABEL_22;
          }
          ++v19;
          *(_DWORD *)(*v20 + 68) = 6;
          v28 = *v20++;
          v29 = *v33++;
          *(_DWORD *)(v28 + 80) = v29;
          if ( v19 >= (unsigned int)v15 )
          {
            (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v35);
            v5 = 0LL;
            goto LABEL_21;
          }
        }
      }
      v4 = -1073741670;
      goto LABEL_22;
    }
    return 3221225626LL;
  }
LABEL_21:
  *(_DWORD *)(v8 + 68) = 13;
  *(_DWORD *)(v34 + 68) = 13;
  v30 = v36;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = -1;
  *(_QWORD *)(a1 + 280) = v30;
LABEL_22:
  if ( v3 )
  {
    if ( v4 < 0 && (_DWORD)v15 )
    {
      v32 = (ULONG_PTR *)v3;
      do
      {
        if ( *v32 )
        {
          CmpRundownUnitOfWork(*v32);
          ExFreePoolWithTag((PVOID)*v32, 0x77554D43u);
        }
        ++v32;
        --v15;
      }
      while ( v15 );
    }
    ExFreePoolWithTag(v3, 0x37344D43u);
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v35);
  return (unsigned int)v4;
}
