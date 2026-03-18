/*
 * XREFs of NtMapUserPhysicalPages @ 0x1406A703C
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

NTSTATUS __stdcall NtMapUserPhysicalPages(PVOID VirtualAddresses, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  unsigned __int64 v6; // r13
  unsigned __int64 *v7; // r14
  unsigned __int64 *v8; // r12
  NTSTATUS v9; // esi
  ULONG_PTR v10; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  volatile __int64 *v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *PhysicalViewInTree; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // rdx
  unsigned __int64 v21; // r9
  _QWORD *v22; // rdi
  __int64 v23; // r8
  const signed __int64 *v24; // r11
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rax
  volatile __int64 *v27; // r15
  unsigned __int64 *v28; // r12
  unsigned __int64 PteShadow; // rdi
  NTSTATUS v30; // edi
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rdi
  __int16 v33; // ax
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  unsigned __int64 v36; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v37; // [rsp+28h] [rbp-D8h]
  struct _KTHREAD *v38; // [rsp+30h] [rbp-D0h]
  unsigned __int64 *PoolWithTag; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v40; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h]
  volatile __int64 *v42; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+58h] [rbp-A8h]
  PULONG_PTR v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  _BYTE v46[192]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE P[8192]; // [rsp+130h] [rbp+30h] BYREF

  v44 = UserPfnArray;
  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v6 = (unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL;
  v43 = ((unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL) + (NumberOfPages << 12) - 1;
  if ( v43 <= ((unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL) )
    return -1073741584;
  v7 = (unsigned __int64 *)P;
  PoolWithTag = (unsigned __int64 *)P;
  v8 = 0LL;
  if ( UserPfnArray )
  {
    if ( !NumberOfPages )
      return 0;
    if ( NumberOfPages > 0x400 )
    {
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * NumberOfPages, 0x77526D4Du);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return -1073741670;
    }
    v9 = MiCaptureUlongPtrArray(v7, (char *)UserPfnArray, NumberOfPages);
    if ( v9 < 0 )
    {
      if ( v7 != (unsigned __int64 *)P )
        ExFreePoolWithTag(v7, 0);
      return v9;
    }
    v8 = v7;
  }
  v10 = NumberOfPages;
  CurrentThread = KeGetCurrentThread();
  v45 = 8 * v10;
  v40 = &v7[v10];
  v38 = CurrentThread;
  v12 = (volatile __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v42 = &v12[v10];
  v13 = qword_1403D0230 & 0xFFFFFFFFFFFFFF7FuLL | ((unsigned __int64)(HIBYTE(word_14034EC18) & 1) << 8) | 0xFFFFFFFFF067LL;
  MiInitializeTbFlushList((__int64)v46, 1, 20);
  v16 = *(_QWORD **)(v15 + 1032);
  v37 = v16;
  if ( v16 && *v16 )
  {
    --CurrentThread->SpecialApcDisable;
    BugCheckParameter2 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)(v16 + 1), 0LL, v14, v15);
    v17 = v37 + 3;
    v37 = (_QWORD *)*v37;
    PhysicalViewInTree = MiLocatePhysicalViewInTree(v6 >> 12, v17);
    if ( PhysicalViewInTree )
    {
      v19 = PhysicalViewInTree[3];
      if ( v6 >= (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12
        && v43 <= (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF) )
      {
        if ( v44 )
        {
          v20 = v8;
          v21 = (unsigned __int64)qword_14034EC08 >> 3;
          v22 = (_QWORD *)*v37;
          v23 = (char *)v40 - (char *)v8;
          v24 = (const signed __int64 *)v37[1];
          while ( 1 )
          {
            if ( v8 == v20 )
            {
              v25 = &v20[v21];
              if ( v21 >= v23 >> 3 )
                v25 = &v20[v23 >> 3];
              do
              {
                if ( *v20 )
                  _m_prefetchw((const void *)(48 * *v20 - 0x57FFFFFFFF8LL));
                ++v20;
              }
              while ( v20 < v25 );
            }
            v26 = *v8;
            if ( *v8 >= (unsigned __int64)v22 || !_bittest64(v24, v26) )
              break;
            if ( _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(48 * v26 - 0x58000000000LL + 8),
                   (signed __int64)v12,
                   0LL) )
            {
              v30 = -1073741583;
              goto LABEL_44;
            }
            ++v12;
            ++v8;
            v23 -= 8LL;
            if ( v8 >= v40 )
            {
              v27 = &v12[v45 / 0xFFFFFFFFFFFFFFF8uLL];
              v28 = v7;
              do
              {
                v13 ^= (v13 ^ (*v28 << 12)) & 0xFFFFFFFFF000LL;
                PteShadow = _InterlockedExchange64(v27, v13);
                if ( MiPteInShadowRange((__int64)v27) )
                  MiWritePteShadow((__int64)v27, v13);
                v36 = PteShadow;
                if ( (PteShadow & 1) != 0 )
                {
                  if ( MiPteInShadowRange((__int64)&v36) )
                    PteShadow = MiReadPteShadow((__int64)&v36, PteShadow);
                  _InterlockedAnd64(
                    (volatile signed __int64 *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF8LL),
                    0LL);
                  MiInsertTbFlushEntry((__int64)v46, v6, 1LL, 0);
                }
                v6 += 4096LL;
                ++v27;
                ++v28;
              }
              while ( v28 < v40 );
              goto LABEL_54;
            }
          }
          v30 = -1073741800;
LABEL_44:
          while ( v8 > v7 )
            _InterlockedAnd64((volatile signed __int64 *)(48 * *--v8 - 0x57FFFFFFFF8LL), 0LL);
          goto LABEL_61;
        }
        v31 = (unsigned __int64)v42;
        if ( v12 < v42 )
        {
          do
          {
            v32 = _InterlockedExchange64(v12, 0LL);
            if ( MiPteInShadowRange((__int64)v12) )
              MiWritePteShadow((__int64)v12, 0LL);
            v36 = v32;
            if ( (v32 & 1) != 0 )
            {
              if ( MiPteInShadowRange((__int64)&v36) )
                v32 = MiReadPteShadow((__int64)&v36, v32);
              _InterlockedAnd64((volatile signed __int64 *)(48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF8LL), 0LL);
              MiInsertTbFlushEntry((__int64)v46, v6, 1LL, 0);
            }
            v6 += 4096LL;
            ++v12;
          }
          while ( (unsigned __int64)v12 < v31 );
LABEL_54:
          CurrentThread = v38;
          v7 = PoolWithTag;
        }
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        v33 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v33;
        if ( !v33
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        MiFlushTbList((__int64)v46);
        if ( v7 != (unsigned __int64 *)P )
          ExFreePoolWithTag(v7, 0);
        return 0;
      }
    }
    v30 = -1073741585;
LABEL_61:
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    v34 = v38;
    v35 = v38->SpecialApcDisable + 1;
    v38->SpecialApcDisable = v35;
    if ( !v35 && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
      KiCheckForKernelApcDelivery();
    if ( v7 != (unsigned __int64 *)P )
      ExFreePoolWithTag(v7, 0);
    return v30;
  }
  else
  {
    if ( v7 != (unsigned __int64 *)P )
      ExFreePoolWithTag(v7, 0);
    return -1073741585;
  }
}
