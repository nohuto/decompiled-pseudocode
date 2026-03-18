/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1404BE7F0
 * Callers:
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14053E504 (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObpCallPostOperationCallbacks @ 0x1406ACCD4 (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF **v4; // r13
  signed __int64 v5; // rbx
  _QWORD *v6; // rbp
  struct _EX_RUNDOWN_REF *v9; // r14
  struct _KTHREAD *v10; // rax
  unsigned __int64 *v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r9
  struct _EX_RUNDOWN_REF *Count; // rdi
  unsigned __int64 v17; // rtt
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  unsigned __int64 v20; // rtt
  __int64 v21; // r9
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  void (__fastcall *v24)(_QWORD, __int64); // rax
  struct _KTHREAD *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r9
  signed __int64 v28; // rax
  unsigned __int64 v29; // rtt
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  unsigned __int64 v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  unsigned __int64 v36; // rtt
  _QWORD *PoolWithTag; // rax
  _QWORD *v38; // rcx
  unsigned __int64 v39; // rtt
  struct _KTHREAD *v40; // r8
  __int16 v41; // ax
  _QWORD v42[13]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v43; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v4 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  v5 = 0LL;
  v6 = a3;
  v43 = 0LL;
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  v11 = (unsigned __int64 *)(a1 + 184);
  v14 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL, v12);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, v14, (ULONG_PTR)v11, v15);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  Count = *v4;
  if ( *v4 == (struct _EX_RUNDOWN_REF *)v4 )
  {
LABEL_28:
    _m_prefetchw(v11);
    v28 = *v11;
    if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v5 = v28 - 16;
    if ( (v28 & 2) != 0 || (v29 = *v11, v29 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v5, v28)) )
      ExfReleasePushLock(v11, v13);
    KeAbPostRelease((ULONG_PTR)v11);
    v30 = KeGetCurrentThread();
    v31 = v30->SpecialApcDisable + 1;
    v30->SpecialApcDisable = v31;
    if ( !v31 && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
      KiCheckForKernelApcDelivery();
    if ( v9 )
    {
      _m_prefetchw(v9);
      v32 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v32 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v32 - 2, v32) )
        ExfReleaseRundownProtection(v9);
    }
    if ( (_QWORD *)*v6 == v6 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
      v33 = KeGetCurrentThread();
      v34 = v33->KernelApcDisable + 1;
      v33->KernelApcDisable = v34;
      if ( !v34
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
        && !v33->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( (HIDWORD(Count[2].Ptr) & 1) != 0 && (Count[2].Count & *(_DWORD *)a2) != 0 )
    {
      _m_prefetchw(&Count[7]);
      v17 = Count[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v17 == _InterlockedCompareExchange64((volatile signed __int64 *)&Count[7], v17 + 2, v17)
        || ExfAcquireRundownProtection(Count + 7) )
      {
        break;
      }
    }
LABEL_27:
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    if ( Count == (struct _EX_RUNDOWN_REF *)v4 )
      goto LABEL_28;
  }
  _m_prefetchw(v11);
  v18 = *v11;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v19 = v18 - 16;
  else
    v19 = 0LL;
  if ( (v18 & 2) != 0 || (v20 = *v11, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v19, v18)) )
    ExfReleasePushLock(v11, v13);
  KeAbPostRelease((ULONG_PTR)v11);
  v22 = KeGetCurrentThread();
  v23 = v22->SpecialApcDisable + 1;
  v22->SpecialApcDisable = v23;
  if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 )
  {
    _m_prefetchw(v9);
    v36 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v36 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v36 - 2, v36) )
      ExfReleaseRundownProtection(v9);
    v9 = 0LL;
  }
  if ( !Count[6].Count )
  {
LABEL_18:
    v24 = (void (__fastcall *)(_QWORD, __int64))Count[5].Count;
    if ( v24 )
    {
      v24(*(_QWORD *)(Count[3].Count + 8), a2);
      if ( Count[6].Count )
        v43[3] = *(_QWORD *)(a2 + 24);
      else
        v9 = Count + 7;
      *(_QWORD *)(a2 + 24) = 0LL;
    }
    v25 = KeGetCurrentThread();
    --v25->SpecialApcDisable;
    v26 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL, v21);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v11, v26, (ULONG_PTR)v11, v27);
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    v6 = a3;
    goto LABEL_27;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
  v43 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = Count;
    PoolWithTag[3] = 0LL;
    v38 = (_QWORD *)v6[1];
    *PoolWithTag = v6;
    PoolWithTag[1] = v38;
    if ( (_QWORD *)*v38 != v6 )
      __fastfail(3u);
    *v38 = PoolWithTag;
    v6[1] = PoolWithTag;
    goto LABEL_18;
  }
  _m_prefetchw(&Count[7]);
  v39 = Count[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v39 != _InterlockedCompareExchange64((volatile signed __int64 *)&Count[7], v39 - 2, v39) )
    ExfReleaseRundownProtection(Count + 7);
  if ( (_QWORD *)*v6 == v6 )
  {
    v40 = KeGetCurrentThread();
    v41 = v40->KernelApcDisable + 1;
    v40->KernelApcDisable = v41;
    if ( !v41
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
      && !v40->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  }
  else
  {
    memset(v42, 0, 0x30uLL);
    v42[0] = *(_QWORD *)a2;
    v42[2] = *(_QWORD *)(a2 + 16);
    v42[1] = *(_QWORD *)(a2 + 8);
    LODWORD(v42[4]) = -1073741670;
    ObpCallPostOperationCallbacks(v42, v6);
  }
  return 3221225626LL;
}
