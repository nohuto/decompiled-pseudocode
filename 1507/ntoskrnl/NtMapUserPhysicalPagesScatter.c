/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x1406A75B4
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400FF100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140101AD0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x1401088BC (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiLocatePhysicalViewInTree @ 0x140224844 (MiLocatePhysicalViewInTree.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x1406A5D90 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  unsigned __int64 *v7; // rsi
  ULONG_PTR v8; // r14
  unsigned __int64 *v9; // r12
  SIZE_T v10; // rdx
  NTSTATUS v11; // r15d
  struct _KTHREAD *CurrentThread; // r13
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 *v15; // rdi
  char v16; // dl
  unsigned __int64 v17; // r14
  __int64 **v18; // rax
  ULONG_PTR v19; // rax
  __int64 **v20; // r10
  unsigned __int64 *v21; // r8
  _QWORD *v22; // r11
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *PhysicalViewInTree; // rax
  __int64 v26; // rax
  unsigned __int64 *v27; // r8
  __int64 *v28; // rax
  unsigned __int64 *v29; // r9
  unsigned __int64 v30; // r11
  __int64 v31; // r10
  const signed __int64 *v32; // rcx
  unsigned __int64 *v33; // rcx
  unsigned __int64 v34; // rax
  PULONG_PTR *v35; // r13
  __int64 v36; // rdi
  volatile __int64 *v37; // rcx
  unsigned __int64 v38; // rsi
  unsigned __int64 *v39; // rdi
  __int16 v40; // ax
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // r12
  volatile __int64 *v43; // r14
  unsigned __int64 PteShadow; // rdi
  struct _KTHREAD *v45; // r13
  __int16 v46; // ax
  __int16 v47; // ax
  __int16 v48; // ax
  __int64 **v49; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v50; // [rsp+20h] [rbp-E0h]
  const signed __int64 *v51; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v52; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v53; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  PULONG_PTR v55; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v56; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *PoolWithTag; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v58; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v59; // [rsp+68h] [rbp-98h]
  struct _KTHREAD *v60; // [rsp+70h] [rbp-90h]
  unsigned __int64 v61; // [rsp+78h] [rbp-88h]
  _BYTE v62[192]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE P[4096]; // [rsp+140h] [rbp+40h] BYREF
  char v64; // [rsp+1140h] [rbp+1040h] BYREF

  v55 = UserPfnArray;
  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v7 = (unsigned __int64 *)P;
  v8 = NumberOfPages;
  v9 = (unsigned __int64 *)&v64;
  PoolWithTag = (unsigned __int64 *)P;
  v10 = 8 * NumberOfPages;
  if ( NumberOfPages > 0x200 )
  {
    if ( UserPfnArray )
      v10 *= 2LL;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x77526D4Du);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
  }
  v58 = v7;
  v11 = MiCaptureUlongPtrArray(v7, (char *)VirtualAddresses, NumberOfPages);
  if ( v11 < 0 )
    goto LABEL_79;
  if ( !NumberOfPages )
    return 0;
  if ( UserPfnArray )
  {
    if ( NumberOfPages > 0x200 )
      v9 = &v7[v8];
    v11 = MiCaptureUlongPtrArray(v9, (char *)UserPfnArray, NumberOfPages);
    if ( v11 < 0 )
      goto LABEL_79;
  }
  CurrentThread = KeGetCurrentThread();
  v56 = &v9[v8];
  v60 = CurrentThread;
  MiInitializeTbFlushList((__int64)v62, 1, 20);
  v15 = v9;
  v59 = &v7[v8];
  v17 = qword_1403D0230 & 0xFFFFFFFFFFFFFF7FuLL | ((unsigned __int64)(unsigned __int8)(v16 & HIBYTE(word_14034EC18)) << 8) | 0xFFFFFFFFF067LL;
  v18 = *(__int64 ***)(v14 + 1032);
  v49 = v18;
  if ( !v18 || !*v18 )
    goto LABEL_78;
  --CurrentThread->SpecialApcDisable;
  v19 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)(v18 + 1), 0LL, v13, v14);
  v20 = v49;
  v21 = v7;
  BugCheckParameter2 = v19;
  v22 = 0LL;
  v53 = *v49;
  do
  {
    v23 = *v21;
    v61 = *v21;
    if ( !v22
      || (v24 = v22[3],
          v23 < (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) << 12)
      || v23 > (((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) << 12) | 0xFFF) )
    {
      PhysicalViewInTree = MiLocatePhysicalViewInTree(v23 >> 12, v20 + 3);
      v22 = PhysicalViewInTree;
      if ( !PhysicalViewInTree )
      {
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        v48 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v48;
        if ( !v48 )
        {
LABEL_76:
          if ( ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            KiCheckForKernelApcDelivery();
        }
LABEL_78:
        v11 = -1073741585;
        goto LABEL_79;
      }
      v26 = PhysicalViewInTree[3];
      if ( v61 < (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32)) << 12
        || v61 > (((*(unsigned int *)(v26 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 33) << 32)) << 12) | 0xFFF) )
      {
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        v47 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v47;
        if ( !v47 )
          goto LABEL_76;
        goto LABEL_78;
      }
      v21 = v58;
      v20 = v49;
    }
    v58 = ++v21;
  }
  while ( v21 < v59 );
  v27 = v7;
  v50 = v7;
  if ( !v55 )
  {
    v41 = (unsigned __int64)v59;
    do
    {
      v42 = *v27;
      v43 = (volatile __int64 *)(((*v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = _InterlockedExchange64(v43, 0LL);
      if ( MiPteInShadowRange((__int64)v43) )
        MiWritePteShadow((__int64)v43, 0LL);
      v52 = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        if ( MiPteInShadowRange((__int64)&v52) )
          PteShadow = MiReadPteShadow((__int64)&v52, PteShadow);
        _InterlockedAnd64((volatile signed __int64 *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF8LL), 0LL);
        MiInsertTbFlushEntry((__int64)v62, v42 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
      }
      v27 = v50 + 1;
      v50 = v27;
    }
    while ( (unsigned __int64)v27 < v41 );
LABEL_69:
    v7 = PoolWithTag;
    v11 = 0;
    v45 = v60;
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    v46 = v45->SpecialApcDisable + 1;
    v45->SpecialApcDisable = v46;
    if ( !v46 && ($CD287064E7C9F7953DE243E927CFCB99 *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
      KiCheckForKernelApcDelivery();
    MiFlushTbList((__int64)v62);
    goto LABEL_79;
  }
  v28 = v53;
  v29 = v9;
  v30 = (unsigned __int64)qword_14034EC08 >> 3;
  v31 = (char *)v56 - (char *)v9;
  v53 = (__int64 *)*v53;
  v32 = (const signed __int64 *)v28[1];
  v51 = v32;
  while ( 1 )
  {
    if ( v15 == v29 )
    {
      v33 = &v29[v30];
      if ( v30 >= v31 >> 3 )
        v33 = &v29[v31 >> 3];
      do
      {
        if ( *v29 )
          _m_prefetchw((const void *)(48 * *v29 - 0x57FFFFFFFF8LL));
        ++v29;
      }
      while ( v29 < v33 );
      v32 = v51;
    }
    v34 = *v15;
    v31 -= 8LL;
    ++v15;
    if ( !v34 )
      goto LABEL_39;
    if ( v34 >= (unsigned __int64)v53 || !_bittest64(v32, v34) )
      break;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)(48 * v34 - 0x58000000000LL + 8),
           ((*v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           0LL) )
    {
      v11 = -1073741583;
      goto LABEL_54;
    }
LABEL_39:
    v32 = v51;
    ++v27;
    if ( v15 >= v56 )
    {
      v35 = (PULONG_PTR *)v7;
      do
      {
        if ( *v9 )
          v36 = v17 ^ (v17 ^ (*v9 << 12)) & 0xFFFFFFFFF000LL;
        else
          v36 = 0LL;
        v55 = *v35++;
        v37 = (volatile __int64 *)((((unsigned __int64)v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v53 = (__int64 *)v37;
        v38 = _InterlockedExchange64(v37, v36);
        if ( MiPteInShadowRange((__int64)v37) )
          MiWritePteShadow((__int64)v53, v36);
        v52 = v38;
        if ( (v38 & 1) != 0 )
        {
          if ( MiPteInShadowRange((__int64)&v52) )
            v38 = MiReadPteShadow((__int64)&v52, v38);
          _InterlockedAnd64((volatile signed __int64 *)(48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF8LL), 0LL);
          MiInsertTbFlushEntry((__int64)v62, (unsigned __int64)v55 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
        }
        ++v9;
      }
      while ( v9 < v56 );
      goto LABEL_69;
    }
  }
  v11 = -1073741800;
LABEL_54:
  v39 = v15 - 1;
  while ( v39 > v9 )
  {
    if ( *--v39 )
      _InterlockedAnd64((volatile signed __int64 *)(48 * *v39 - 0x57FFFFFFFF8LL), 0LL);
  }
  ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
  v40 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v40;
  if ( !v40 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
LABEL_79:
  if ( v7 != (unsigned __int64 *)P )
    ExFreePoolWithTag(v7, 0);
  return v11;
}
