/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x140122008
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     CcWriteBehind @ 0x1400326B0 (CcWriteBehind.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r13
  char v3; // r14
  unsigned __int64 v4; // rsi
  KIRQL v5; // r12
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  volatile signed __int64 **v12; // rdi
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rdx
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  KIRQL v19; // al
  KIRQL v20; // r9
  __int64 v21; // rdx
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // rax
  char v24[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  __int16 Object; // [rsp+48h] [rbp-40h] BYREF
  char v28; // [rsp+4Ah] [rbp-3Eh]
  int v29; // [rsp+4Ch] [rbp-3Ch]
  _QWORD v30[2]; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
    return;
  Object = 0;
  v28 = 6;
  v29 = 0;
  v30[1] = v30;
  v30[0] = v30;
  v5 = KeAcquireQueuedSpinLock(5uLL);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 224) == v6 + 224 )
    {
      v7 = *(_DWORD *)(v6 + 152);
      if ( (v7 & 0x100) == 0 )
      {
        v2 = 1;
        *(_DWORD *)(v6 + 152) = v7 | 0x10000;
        v26 = *(_QWORD *)(v6 + 272);
        *(_QWORD *)(v6 + 272) = (char *)&v26 + 1;
        v8 = *(_DWORD *)(v6 + 152);
        if ( (v8 & 0x20) != 0 )
        {
          if ( *(_QWORD *)(v6 + 496) )
          {
            KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
            v9 = *(_QWORD *)(v6 + 496);
            if ( v9 )
            {
              v4 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
              v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFEuLL);
              v11 = *(_QWORD **)((v9 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
              if ( *(_QWORD *)(v10 + 8) != v4 || *v11 != v4 )
                __fastfail(3u);
              *v11 = v10;
              *(_QWORD *)(v10 + 8) = v11;
              *(_QWORD *)(v4 + 8) = 0LL;
              *(_QWORD *)v4 = 0LL;
              *(_QWORD *)(v6 + 496) = 0LL;
              v3 = 1;
            }
            v12 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
            {
              _m_prefetchw(v12);
              v13 = (__int64)*v12;
              if ( !*v12 )
              {
                if ( v12 == (volatile signed __int64 **)_InterlockedCompareExchange64(v12[1], 0LL, (signed __int64)v12) )
                  goto LABEL_19;
                v13 = KxWaitForLockChainValid((__int64 *)v12);
              }
              *v12 = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
              goto LABEL_19;
            }
            KiReleaseQueuedSpinLockInstrumented(v12, retaddr);
          }
        }
        else
        {
          *(_DWORD *)(v6 + 152) = v8 | 0x20;
          v3 = 1;
        }
      }
    }
  }
LABEL_19:
  KeReleaseQueuedSpinLock(5uLL, v5);
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v25 = v4;
    CcWriteBehind(v6, (__int64)v24);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[6].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[6].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v4);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(unsigned __int64))P->FreeEx)(v4);
    }
  }
  if ( v2 )
  {
    Timeout.QuadPart = -6000000000LL;
    if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
    {
      v19 = KeAcquireQueuedSpinLock(5uLL);
      v20 = v19;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
      if ( v21 )
      {
        v22 = (unsigned __int64 *)(v21 + 272);
        if ( *(_QWORD *)(v21 + 272) )
        {
          while ( 1 )
          {
            v23 = *v22;
            if ( (unsigned __int64 *)*v22 == (unsigned __int64 *)((char *)&v26 + 1) )
              break;
            v22 = (unsigned __int64 *)(v23 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( !*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFEuLL) )
              goto LABEL_37;
          }
          *v22 = v26;
        }
LABEL_37:
        *(_DWORD *)(v21 + 152) &= ~0x10000u;
        KeReleaseQueuedSpinLock(5uLL, v20);
      }
      else
      {
        KeReleaseQueuedSpinLock(5uLL, v19);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
    }
  }
}
