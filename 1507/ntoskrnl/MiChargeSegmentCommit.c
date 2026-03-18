/*
 * XREFs of MiChargeSegmentCommit @ 0x14051AD20
 * Callers:
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCommitPagefileBackedSection @ 0x14051ABFC (MiCommitPagefileBackedSection.c)
 *     MmCommitSessionMappedView @ 0x14051BB40 (MmCommitSessionMappedView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiUpdateProcessSharedCommit @ 0x14051B06C (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 **a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 *v5; // rdi
  unsigned __int64 v6; // r15
  __int64 *v7; // rsi
  __int64 v8; // rbx
  int v9; // r14d
  unsigned __int64 *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 *v15; // r13
  __int64 v16; // r14
  unsigned __int64 v17; // rbp
  __int64 PteShadow; // rbx
  __int16 v19; // cx
  bool v20; // zf
  __int16 v21; // ax
  __int64 *v23; // rbp
  __int64 DemandZeroPte; // rdi
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // rbx
  BOOL v28; // r9d
  unsigned __int64 v29; // r15
  __int16 v30; // ax
  volatile signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+28h] [rbp-80h]
  struct _KTHREAD *v33; // [rsp+30h] [rbp-78h]
  __int64 v34; // [rsp+38h] [rbp-70h]
  unsigned int *v35; // [rsp+40h] [rbp-68h]
  _QWORD *v36; // [rsp+48h] [rbp-60h]
  unsigned __int64 v40; // [rsp+C0h] [rbp+18h]
  int v41; // [rsp+C8h] [rbp+20h]

  v40 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = (__int64 *)a1;
  v6 = a3;
  v7 = a2;
  v33 = CurrentThread;
  v8 = **a1;
  v35 = (unsigned int *)a1 + 11;
  v36 = a1 + 1;
  v32 = v8;
  v34 = (__int64)&a1[1][*((unsigned int *)a1 + 11)];
  if ( (_DWORD)a4 == 1 )
    v9 = 1;
  else
    v9 = MiChargeCommit((__int64)MiSystemPartition, a3, 0);
  v41 = v9;
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64 *)(v8 + 40);
  BugCheckParameter2 = (volatile signed __int64 *)(v8 + 40);
  v11 = KeAbPreAcquire(v8 + 40, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = 0LL;
  if ( v9 )
    goto LABEL_29;
  v15 = (__int64 *)v34;
  v16 = 0LL;
  v17 = v6;
  while ( 1 )
  {
    PteShadow = *v7;
    if ( MiPteInShadowRange((__int64)v7) )
      PteShadow = MiReadPteShadow((__int64)v7, PteShadow);
    if ( PteShadow )
      --v6;
    ++v16;
    ++v7;
    if ( v16 == v17 )
      break;
    if ( v7 == v15 )
    {
      v5 = (__int64 *)v5[2];
      v7 = (__int64 *)v5[1];
      v15 = &v7[*((unsigned int *)v5 + 11)];
    }
  }
  v7 = a2;
  v40 = v6;
  if ( !v6 )
  {
    if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    v19 = v33->SpecialApcDisable + 1;
    v33->SpecialApcDisable = v19;
    if ( v19 )
      return 1LL;
    v20 = v33->ApcState.ApcListHead[0].Flink == v33->ApcState.ApcListHead;
LABEL_48:
    if ( !v20 )
      KiCheckForKernelApcDelivery();
    return 1LL;
  }
  if ( (unsigned int)MiChargeCommit((__int64)MiSystemPartition, v6, 0) )
  {
LABEL_29:
    v23 = (__int64 *)a1;
    DemandZeroPte = MiMakeDemandZeroPte((*(_BYTE *)(v32 + 14) >> 1) & 0x1F);
    v25 = 0LL;
    v26 = *v36 + 8LL * *v35;
    while ( 1 )
    {
      v27 = *v7;
      v28 = MiPteInShadowRange((__int64)v7);
      if ( v28 )
        v27 = MiReadPteShadow((__int64)v7, v27);
      if ( v27 )
      {
        ++v14;
      }
      else
      {
        *v7 = DemandZeroPte;
        if ( v28 )
          MiWritePteShadow((__int64)v7, DemandZeroPte);
      }
      ++v25;
      ++v7;
      if ( v25 == a3 )
        break;
      if ( v7 == (__int64 *)v26 )
      {
        v23 = (__int64 *)v23[2];
        v7 = (__int64 *)v23[1];
        v26 = (__int64)&v7[*((unsigned int *)v23 + 11)];
      }
    }
    v29 = v40;
    if ( v41 == 1 )
    {
      v29 = v40 - v14;
      if ( v14 )
        MiReturnCommit((__int64)MiSystemPartition, v14);
    }
    if ( v29 )
    {
      MiUpdateProcessSharedCommit(*(_QWORD *)v32, v29);
      _InterlockedExchangeAdd64(&qword_14034FD10, v29);
    }
    if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    v30 = v33->SpecialApcDisable + 1;
    v33->SpecialApcDisable = v30;
    if ( v30 )
      return 1LL;
    v20 = v33->ApcState.ApcListHead[0].Flink == v33->ApcState.ApcListHead;
    goto LABEL_48;
  }
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v21 = v33->SpecialApcDisable + 1;
  v33->SpecialApcDisable = v21;
  if ( !v21 && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
