/*
 * XREFs of MmCommitSessionMappedView @ 0x14051BB40
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiLocatePagefileSubsection @ 0x140089C20 (MiLocatePagefileSubsection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiSystemViewCompareVa @ 0x1400FA3C4 (MiSystemViewCompareVa.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x14051AD20 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  _QWORD *v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // r8
  unsigned int *v18; // rdx
  __int64 *v19; // r11
  unsigned __int64 v20; // rcx
  int v21; // eax
  volatile signed __int64 *v22; // rsi
  int v23; // r14d
  __int16 v24; // ax
  volatile signed __int64 *v26; // rsi
  __int16 v27; // ax
  volatile signed __int64 *v28; // rsi
  __int16 v29; // ax
  unsigned __int64 v30; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    return 3221225711LL;
  v3 = a2 + a1;
  if ( v3 <= a1 || v3 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return 3221225497LL;
  v6 = Process[1].ActiveProcessors.Bitmap[2];
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = ((__int64)(((((v3 - 1) | 0xFFF) >> 9) & 0x7FFFFFFFF8LL) - ((v7 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  --CurrentThread->SpecialApcDisable;
  v9 = *(unsigned __int64 **)(v6 + 2888);
  v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL, 0x7FFFFFFFFFLL);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = *(_QWORD **)(v6 + 2896);
  if ( !v13 )
    goto LABEL_43;
  while ( 1 )
  {
    v14 = MiSystemViewCompareVa(v7, (__int64)v13);
    if ( v14 >= 0 )
      break;
    v13 = (_QWORD *)*v13;
LABEL_12:
    if ( !v13 )
      goto LABEL_15;
  }
  if ( v14 > 0 )
  {
    v13 = (_QWORD *)v13[1];
    goto LABEL_12;
  }
LABEL_15:
  if ( !v13 )
LABEL_43:
    KeBugCheckEx(0xD7u, v7, 2uLL, 0LL, 0LL);
  v15 = v13[6] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( *(_QWORD *)(v15 + 64) )
  {
    v26 = *(volatile signed __int64 **)(v6 + 2888);
    if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v26);
    KeAbPostRelease((ULONG_PTR)v26);
    v27 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225505LL;
  }
  v30 = v13[3] + ((v7 - (v13[10] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v16 = MiLocatePagefileSubsection((unsigned int *)(v15 + 120), &v30);
  if ( !v16 )
  {
LABEL_35:
    v28 = *(volatile signed __int64 **)(v6 + 2888);
    if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v28);
    KeAbPostRelease((ULONG_PTR)v28);
    v29 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225712LL;
  }
  v17 = v16 + 11;
  v18 = v16;
  v19 = (__int64 *)(*((_QWORD *)v16 + 1) + 8 * v30);
  v20 = v8 + v30;
  v30 += v8;
  while ( v20 >= *v17 )
  {
    v18 = (unsigned int *)*((_QWORD *)v18 + 2);
    v20 -= *v17;
    v30 = v20;
    if ( !v18 )
      goto LABEL_35;
    v17 = v18 + 11;
  }
  v21 = MiChargeSegmentCommit((__int64 **)v16, v19, v8, 0LL);
  v22 = *(volatile signed __int64 **)(v6 + 2888);
  v23 = v21;
  if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v22);
  KeAbPostRelease((ULONG_PTR)v22);
  v24 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v24;
  if ( !v24 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v23 == 0 ? 0xC000012D : 0;
}
