/*
 * XREFs of MiObtainSystemCacheView @ 0x1400196F0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x140575A08 (MmReserveViewInSystemCache.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     RemoveListHeadPte @ 0x14001BA7C (RemoveListHeadPte.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiExpandSystemCache @ 0x1400A1428 (MiExpandSystemCache.c)
 *     MiCompareTbFlushTimeStamp @ 0x1400A3824 (MiCompareTbFlushTimeStamp.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1400AD4D4 (MiWaitForSystemCacheViewFlush.c)
 *     KeFlushMultipleRangeTb @ 0x1400B3B64 (KeFlushMultipleRangeTb.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     MiLockSystemCacheInit @ 0x14014C384 (MiLockSystemCacheInit.c)
 *     MiUnlockSystemCacheInit @ 0x14014C8D0 (MiUnlockSystemCacheInit.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x1401D5EF0 (KeFlushCurrentTbOnly.c)
 *     MiIncrementSystemCacheViewCount @ 0x1401E6BE8 (MiIncrementSystemCacheViewCount.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteLink @ 0x1401F24AC (MiGetPteLink.c)
 *     MiUpdateLinkedListInPte @ 0x1401F281C (MiUpdateLinkedListInPte.c)
 *     MiInitializeSystemCache @ 0x14055453C (MiInitializeSystemCache.c)
 */

_QWORD *__fastcall MiObtainSystemCacheView(__int64 a1, __int64 a2)
{
  __int64 AnyMultiplexedVm; // r14
  unsigned int v5; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 CurrentIrql; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  char v14; // al
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  _KPROCESS *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int8 v24; // di
  __int64 v25; // r15
  _QWORD *v26; // r14
  __int64 PteLink; // rax
  int v28; // edi
  int v29; // eax
  int v30; // edx
  unsigned int v31; // edx
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r9
  char v38; // al
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  _KPROCESS *Process; // rdx
  __int64 v42; // rdx
  unsigned int v43; // r11d
  __int64 v44; // rax
  signed __int64 updated; // r8
  signed __int64 v46; // r9
  __int64 v47; // r10
  int v48; // r11d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  signed __int32 v56[10]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v57; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v58; // [rsp+30h] [rbp-D0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  unsigned int v62; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v63; // [rsp+64h] [rbp-9Ch]
  __int64 v64; // [rsp+68h] [rbp-98h]
  unsigned __int64 v65; // [rsp+70h] [rbp-90h]
  _QWORD v66[33]; // [rsp+78h] [rbp-88h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL, a2);
  if ( !(unsigned int)MiChargeWsles(AnyMultiplexedVm, 64LL) )
    return 0LL;
  v5 = 0;
  CurrentThread = 0LL;
  v64 = 20LL;
  v62 = 0;
  v63 = 0;
  v65 = 0LL;
  v66[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
  __writecr8(2uLL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140326D98, &LockHandle);
  if ( !*(_BYTE *)(a1 + 7200) )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    __writecr8((unsigned __int8)CurrentIrql);
    CurrentThread = KeGetCurrentThread();
    MiLockSystemCacheInit(CurrentThread);
    if ( *(_BYTE *)(a1 + 7200) )
    {
      MiUnlockSystemCacheInit(CurrentThread);
      CurrentThread = 0LL;
    }
    else if ( !(unsigned int)MiInitializeSystemCache(a1) )
    {
      MiUnlockSystemCacheInit(CurrentThread);
LABEL_50:
      MiChargeWsles(AnyMultiplexedVm, -64LL);
      return 0LL;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v57 = CurrentIrql;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140326D98, &LockHandle);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 7200) = 1;
  }
  v8 = ((unsigned __int64)&qword_140326D80 >> 9) & 0x7FFFFFFFF8LL;
  if ( MiGetPteLink(qword_140326D80) != (__int64)(v8 - qword_140326D90 - 0x98000000000LL) >> 3 )
  {
LABEL_51:
    v25 = RemoveListHeadPte(&qword_140326D80);
    v61 = v25;
    v60 = 0LL;
    MiIncrementSystemCacheViewCount(v25 << 25 >> 16);
    v26 = (_QWORD *)(v25 + 24);
    PteLink = MiGetPteLink(*(_QWORD *)(v25 + 24));
    if ( PteLink )
    {
      if ( PteLink == 1 )
      {
        v28 = 1;
        goto LABEL_65;
      }
      _InterlockedOr(v56, 0);
      v29 = MiGetPteLink(*(_QWORD *)(v25 + 16));
      v31 = (v30 - v29) & 0xFFFFF;
      if ( v31 <= 2 && ((v29 & 1) != 0 || v31 < 2) )
      {
        v32 = v60;
        v33 = v25;
        do
        {
          if ( HIDWORD(v64) )
          {
            v34 = v5++;
            v66[v34 + 21] = v33;
          }
          v58 = ((v33 << 25) - v32) >> 16;
          MiInsertTbFlushEntry(&v62, v58, 64LL);
          *v26 = MiUpdateLinkedListInPte(*v26, 1LL);
          if ( v5 == 12 )
            break;
          v35 = MiGetPteLink(*(_QWORD *)v33);
          if ( v35 == (__int64)(v8 - qword_140326D90 - 0x98000000000LL) >> 3 )
            break;
          v33 = qword_140326D90 + 8 * v35;
          v26 = (_QWORD *)(v33 + 24);
        }
        while ( MiGetPteLink(*(_QWORD *)(v33 + 24)) == 2 );
        v25 = v61;
        v26 = (_QWORD *)(v61 + 24);
      }
    }
    v28 = 0;
LABEL_65:
    KxReleaseQueuedSpinLock(&LockHandle);
    if ( !HIDWORD(v64) )
    {
LABEL_88:
      __writecr8((unsigned __int8)v57);
      if ( CurrentThread )
        MiUnlockSystemCacheInit(CurrentThread);
      if ( v28 == 1 )
        MiWaitForSystemCacheViewFlush(v25);
      *(_QWORD *)v25 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v25, v36) )
        MiWritePteShadow(v50, 0LL);
      *(_QWORD *)(v25 + 8) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v25 + 8, v49) )
        MiWritePteShadow(v52, 0LL);
      *(_QWORD *)(v25 + 16) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v25 + 16, v51) )
        MiWritePteShadow(v54, 0LL);
      *v26 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v26, v53) )
        MiWritePteShadow(v55, 0LL);
      return (_QWORD *)v25;
    }
    v38 = v63;
    v39 = qword_140326A58;
    if ( (v63 & 2) != 0 )
    {
      v40 = v62;
LABEL_79:
      if ( (_DWORD)v40 == 1 )
      {
        v42 = 0LL;
        goto LABEL_72;
      }
LABEL_71:
      v42 = (unsigned int)((v38 & 4) != 0) + 1;
LABEL_72:
      if ( HIBYTE(v63) || v65 > v39 )
      {
        if ( (v38 & 1) != 0 )
          KeFlushCurrentTbOnly(v40, v42, v39, v37);
        else
          KeFlushTb(v40, v42, v39, v37);
        HIBYTE(v63) = 0;
      }
      else if ( (v38 & 1) != 0 )
      {
        KeFlushMultipleRangeCurrentTb(HIDWORD(v64), v66, (unsigned int)v40);
      }
      else
      {
        KeFlushMultipleRangeTb(HIDWORD(v64), v66, (unsigned int)v40, (unsigned int)v42);
      }
      LOBYTE(v63) = v63 & 0xFB;
      v43 = 0;
      HIDWORD(v64) = 0;
      v65 = 0LL;
      if ( v5 )
      {
        do
        {
          v44 = MI_READ_PTE_LOCK_FREE(v66[v43 + 21] + 24LL);
          updated = MiUpdateLinkedListInPte(v44, 0LL);
          _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 24), updated, v46);
          v43 = v48 + 1;
        }
        while ( v43 != v5 );
      }
      goto LABEL_88;
    }
    v40 = v62;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[14] )
    {
      if ( !Process->SecurePid )
      {
LABEL_77:
        v38 = v63;
        goto LABEL_79;
      }
      if ( v62 != 1 )
      {
        v38 = v63;
        goto LABEL_71;
      }
    }
    v39 = -1LL;
    goto LABEL_77;
  }
  while ( MiExpandSystemCache() )
  {
    if ( MiGetPteLink(qword_140326D80) != (__int64)(v8 - qword_140326D90 - 0x98000000000LL) >> 3 )
      goto LABEL_51;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( CurrentThread )
  {
    MiUnlockSystemCacheInit(CurrentThread);
    CurrentThread = 0LL;
  }
  if ( (unsigned int)CcUnmapInactiveViews(64LL, 0LL, &v58) != 1 )
  {
    v24 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v57) = v24;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140326D98, &LockHandle);
    if ( MiGetPteLink(qword_140326D80) == (__int64)(v8 - qword_140326D90 - 0x98000000000LL) >> 3 )
    {
      KxReleaseQueuedSpinLock(&LockHandle);
      __writecr8(v24);
      goto LABEL_50;
    }
    goto LABEL_51;
  }
  v9 = v58;
  v10 = (_QWORD *)(((v58 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiChargeWsles(AnyMultiplexedVm, -64LL);
  if ( MiGetPteLink(v10[3]) == 2 )
  {
    v12 = MiGetPteLink(v10[2]);
    if ( (unsigned __int8)MiCompareTbFlushTimeStamp(v12, 0xFFFFFLL) )
    {
      MiInsertTbFlushEntry(&v62, v9, 64LL);
      if ( HIDWORD(v64) )
      {
        v14 = v63;
        v15 = qword_140326A58;
        if ( (v63 & 2) != 0 )
        {
          v16 = v62;
LABEL_33:
          if ( (_DWORD)v16 == 1 )
          {
            v18 = 0LL;
LABEL_26:
            if ( HIBYTE(v63) || v65 > v15 )
            {
              if ( (v14 & 1) != 0 )
                KeFlushCurrentTbOnly(v16, v18, v15, v13);
              else
                KeFlushTb(v16, v18, v15, v13);
              HIBYTE(v63) = 0;
            }
            else if ( (v14 & 1) != 0 )
            {
              KeFlushMultipleRangeCurrentTb(HIDWORD(v64), v66, (unsigned int)v16);
            }
            else
            {
              KeFlushMultipleRangeTb(HIDWORD(v64), v66, (unsigned int)v16, (unsigned int)v18);
            }
            LOBYTE(v63) = v63 & 0xFB;
            HIDWORD(v64) = 0;
            v65 = 0LL;
            goto LABEL_41;
          }
LABEL_25:
          v18 = (unsigned int)((v14 & 4) != 0) + 1;
          goto LABEL_26;
        }
        v16 = v62;
        v17 = KeGetCurrentThread()->ApcState.Process;
        if ( !v17[2].ActiveProcessors.Bitmap[14] )
        {
          if ( !v17->SecurePid )
          {
LABEL_31:
            v14 = v63;
            goto LABEL_33;
          }
          if ( v62 != 1 )
          {
            v14 = v63;
            goto LABEL_25;
          }
        }
        v15 = -1LL;
        goto LABEL_31;
      }
    }
  }
LABEL_41:
  *v10 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v10, v11) )
    MiWritePteShadow(v20, 0LL);
  v10[1] = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v10 + 1, v19) )
    MiWritePteShadow(v22, 0LL);
  v10[2] = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v10 + 2, v21) )
    MiWritePteShadow(v23, 0LL);
  return v10;
}
