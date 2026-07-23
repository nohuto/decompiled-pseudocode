/*
 * XREFs of IoBoostThreadIoPriority @ 0x14006DDC4
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14006B0D0 (CcBoostLowPriorityWorkerThread.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B1F0 (ExpBoostIoAfterAcquire.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 *     FsRtlpDoBoost @ 0x140091014 (FsRtlpDoBoost.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400C508C (FsRtlpWaitForIoAtEof.c)
 *     IoBoostThreadIo @ 0x14011267C (IoBoostThreadIo.c)
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x140457500 (PspBoostJobIoPriorityCallback.c)
 *     CmpBoostActiveHiveWriter @ 0x14047C198 (CmpBoostActiveHiveWriter.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall IoBoostThreadIoPriority(KSPIN_LOCK *a1, int a2, int a3)
{
  char v5; // si
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // al
  __int64 v8; // r15
  __int64 v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // rax
  unsigned int v11; // r14d
  KIRQL v12; // al
  KSPIN_LOCK v13; // rdi
  char v14; // cl
  unsigned __int64 v15; // rsi
  void *v16; // rsi
  unsigned __int16 v17; // r15
  unsigned __int16 v18; // si
  __int64 v19; // r15
  __int64 v20; // r12
  unsigned __int16 j; // di
  _QWORD *v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rdi
  struct _EX_RUNDOWN_REF *v25; // rdx
  __int64 i; // rdx
  __int64 v27; // rdx
  KIRQL v28; // al
  __int64 v29; // rdi
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *PoolWithTag; // rax
  KIRQL v33; // [rsp+28h] [rbp-E0h]
  KIRQL v34; // [rsp+28h] [rbp-E0h]
  char v35; // [rsp+29h] [rbp-DFh]
  void *v37; // [rsp+30h] [rbp-D8h]
  __int64 v38; // [rsp+30h] [rbp-D8h]
  _QWORD v40[10]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v41; // [rsp+98h] [rbp-70h]
  _QWORD v42[16]; // [rsp+A8h] [rbp-60h]

  v5 = 0;
  if ( a3 < 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = a1 + 230;
    v7 = KeAcquireSpinLockRaiseToDpc(a1 + 230);
    if ( (KSPIN_LOCK *)a1[205] == a1 + 205 )
    {
      if ( (a3 & 0x40000000) == 0 )
      {
        KeReleaseSpinLock(v6, v7);
        return;
      }
      v5 = 1;
    }
    KeReleaseSpinLock(v6, v7);
  }
  v8 = 8LL;
  v9 = 0LL;
  do
  {
    v10 = ExReferenceCallBackBlock((signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v9 * 8));
    v42[v9] = v10;
    if ( v10 )
      v42[v9 + 8] = v10[2].Count;
    ++v9;
    --v8;
  }
  while ( v8 );
  v11 = 0;
  if ( v5 != 1 )
  {
    v37 = 0LL;
    v12 = KeAcquireSpinLockRaiseToDpc(a1 + 230);
    v13 = a1[205];
    v33 = v12;
    if ( (KSPIN_LOCK *)v13 != a1 + 205 )
    {
      while ( 1 )
      {
        v14 = *(_BYTE *)(v13 + 34);
        if ( *(char *)(v13 + 35) > v14 )
          goto LABEL_18;
        v15 = *(_QWORD *)(v13 + 152);
        if ( v15 >= v13 + 8 * (9LL * v14 + 22) )
          goto LABEL_18;
        v16 = *(void **)(v15 + 40);
        if ( !v16 )
          goto LABEL_18;
        v17 = 0;
        while ( 1 )
        {
          if ( v42[v17] )
          {
            v35 = 0;
            KeAcquireQueuedSpinLockAtDpcLevel((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
            for ( i = *(_QWORD *)(*(_QWORD *)(v42[v17 + 8] + 32LL) + 8LL); i; i = *(_QWORD *)(i + 16) )
            {
              if ( (void *)i == v16 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
              {
                v35 = 1;
                break;
              }
            }
            KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 20);
            if ( v35 == 1 && v37 != v16 )
              break;
          }
          if ( ++v17 >= 8u )
            goto LABEL_18;
        }
        v37 = v16;
        if ( v11 < 2 )
          break;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
        if ( PoolWithTag )
        {
          PoolWithTag[4] = v41;
          v41 = PoolWithTag;
          *((_WORD *)PoolWithTag + 20) = v17;
          PoolWithTag[1] = v16;
          PoolWithTag[2] = a1;
          *PoolWithTag = v42[v17];
          *((_DWORD *)PoolWithTag + 6) = a2;
LABEL_47:
          ObfReferenceObjectWithTag(v16, 0x746C6644u);
          ObfReferenceObjectWithTag(a1, 0x746C6644u);
          ++v11;
          if ( (*(_DWORD *)(v13 - 16) & 2) != 0 )
            ++IoBoostedPagingIrpCount;
          else
            ++IoBoostedThreadedIrpCount;
        }
LABEL_18:
        v13 = *(_QWORD *)v13;
        if ( (KSPIN_LOCK *)v13 == a1 + 205 )
        {
          v12 = v33;
          goto LABEL_20;
        }
      }
      v27 = 6LL * v11;
      v40[v27] = v42[v17];
      LODWORD(v40[v27 + 3]) = a2;
      LOWORD(v40[v27 + 5]) = v17;
      v40[v27 + 1] = v16;
      v40[v27 + 2] = a1;
      v40[v27 + 4] = 0LL;
      goto LABEL_47;
    }
LABEL_20:
    KeReleaseSpinLock(a1 + 230, v12);
    if ( v11 )
      goto LABEL_26;
  }
  v18 = 0;
  v38 = 0LL;
  v19 = 0LL;
  do
  {
    v20 = *(_QWORD *)((char *)v42 + v19);
    if ( !v20 )
      goto LABEL_23;
    v28 = KeAcquireQueuedSpinLock(0xAuLL);
    v34 = v28;
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)&v42[8] + v19) + 32LL) + 8LL);
    if ( !v29 )
      goto LABEL_56;
    while ( (*(_DWORD *)(v29 + 48) & 0x1000000) == 0 )
    {
LABEL_54:
      v29 = *(_QWORD *)(v29 + 16);
      if ( !v29 )
        goto LABEL_55;
    }
    if ( v11 < 2 )
    {
      v30 = 6LL * v11;
      v40[v30 + 4] = 0LL;
      v40[v30] = v20;
      LOWORD(v40[v30 + 5]) = v18;
      v40[v30 + 1] = v29;
      v40[v30 + 2] = a1;
      LODWORD(v40[v30 + 3]) = a2;
LABEL_53:
      ObfReferenceObjectWithTag((PVOID)v29, 0x746C6644u);
      ObfReferenceObjectWithTag(a1, 0x746C6644u);
      ++v11;
      goto LABEL_54;
    }
    v31 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
    if ( v31 )
    {
      v31[4] = v41;
      v41 = v31;
      *v31 = v20;
      *((_WORD *)v31 + 20) = v18;
      v31[1] = v29;
      v31[2] = a1;
      *((_DWORD *)v31 + 6) = a2;
      goto LABEL_53;
    }
LABEL_55:
    v19 = v38;
    v28 = v34;
LABEL_56:
    KeReleaseQueuedSpinLock(0xAuLL, v28);
LABEL_23:
    v19 += 8LL;
    ++v18;
    v38 = v19;
  }
  while ( v18 < 8u );
  if ( v11 )
    ++IoBlanketBoostCount;
LABEL_26:
  for ( j = 0; j < v11; ++j )
  {
    if ( j >= 2u )
    {
      v22 = v41;
      v41 = (_QWORD *)v41[4];
    }
    else
    {
      v22 = &v40[6 * j];
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*v22 + 8LL))(*v22, v22 + 1, 0LL);
    if ( j >= 2u )
      ExFreePoolWithTag(v22, 0);
  }
  v23 = 8LL;
  v24 = 0LL;
  do
  {
    v25 = (struct _EX_RUNDOWN_REF *)v42[v24];
    if ( v25 )
      ExDereferenceCallBackBlock((signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v24 * 8), v25);
    ++v24;
    --v23;
  }
  while ( v23 );
}
