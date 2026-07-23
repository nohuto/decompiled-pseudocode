/*
 * XREFs of MiReturnNonPagedPoolVa @ 0x1400645C0
 * Callers:
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 *     MiScrubNonPagedPool @ 0x1406A49A4 (MiScrubNonPagedPool.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCountNonPagedPool @ 0x140064D84 (MiCountNonPagedPool.c)
 *     MiNonPagedPoolToNode @ 0x140064E04 (MiNonPagedPoolToNode.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiReturnNonPagedPoolCharges @ 0x14010E528 (MiReturnNonPagedPoolCharges.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140214958 (MiLogPerfMemoryRangeEvent.c)
 *     MiJoinBitmapPages @ 0x14021ED0C (MiJoinBitmapPages.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiReturnNonPagedPoolVa(ULONG_PTR a1, unsigned __int64 a2)
{
  _QWORD *v4; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 Alignment; // rax
  __int64 v7; // r13
  __int64 *v8; // r14
  __int64 PteShadow; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _SLIST_HEADER *v13; // r14
  int v14; // edi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r9
  __int64 p_Region; // r11
  unsigned __int64 *v21; // r8
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rsi
  __int64 v26; // r8
  unsigned __int64 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r13
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // r14
  volatile signed __int32 *v36; // rsi
  __int64 v37; // r15
  unsigned int v38; // edi
  __int64 *v39; // rcx
  unsigned __int64 v40; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 result; // rax
  _QWORD *v43; // rdi
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // rcx
  volatile signed __int32 *v47; // r8
  int v48; // eax
  unsigned __int64 v49; // rdx
  _SLIST_HEADER *v50; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v51; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v52; // [rsp+30h] [rbp-D0h]
  __int64 v53; // [rsp+38h] [rbp-C8h]
  __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v59; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v60; // [rsp+80h] [rbp-80h]
  _QWORD v61[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v64; // [rsp+B0h] [rbp-50h]
  __int64 CurrentIrql; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v66; // [rsp+C0h] [rbp-40h]
  __int64 *v67; // [rsp+C8h] [rbp-38h]
  int v68; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v69; // [rsp+D4h] [rbp-2Ch]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  memset(v61, 0, sizeof(v61));
  v62 = 0LL;
  v4 = 0LL;
  v50 = &qword_14034EB70[26 * (unsigned int)MiNonPagedPoolToNode(a1)];
  v59 = 0LL;
  v53 = 0LL;
  v5 = (a1 - v50[20].Region) >> 12;
  v66 = v5;
  v56 = 0LL;
  v51 = v5 & 0xFFFFFFFFFFFFFE00uLL;
  Alignment = v50[24].Alignment;
  v63 = a2 + v5;
  v70 = 20LL;
  v52 = (a2 + v5 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v68 = 0;
  v69 = 0;
  v71 = 0LL;
  v7 = Alignment + 8 * (v52 >> 6);
  v72 = 0LL;
  v8 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  KeAcquireInStackQueuedSpinLock(&v50[19].Region, &LockHandle);
  RtlClearBitsEx((__int64)&v50[23].Region, v5, a2);
  PteShadow = *v8;
  if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v8, *v8);
  v54 = PteShadow;
  if ( (PteShadow & 0x80u) == 0LL )
  {
    v13 = v50;
    v14 = 1;
  }
  else
  {
    v10 = a2;
    v11 = (v5 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v12 = (a2 + v5) & 0xFFFFFFFFFFFFFE00uLL;
    if ( v12 > v11 )
      v10 = v11 + a2 - v12;
    v13 = v50;
    v14 = 0;
    v50[18].Region -= v10;
  }
  v13[17].Region -= a2;
  MiCountNonPagedPool(a2, 0LL);
  v15 = (a2 + v5 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v16 = v5 & 0xFFFFFFFFFFFFFE00uLL;
  v17 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v18 = -1LL;
  v55 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v19 = v52;
  p_Region = (__int64)&v13[v14 + 21].Region;
  v21 = &v13[24].Region + v14;
  v60 = v21;
  v57 = p_Region;
  if ( v52 > v51 )
  {
    do
    {
      v22 = v19 - 512;
      v23 = 0LL;
      v64 = v19 - 512;
      v24 = (v19 - 512) >> 9;
      while ( 1 )
      {
        v7 -= 8LL;
        if ( *(_QWORD *)v7 )
          break;
        if ( (unsigned __int64)++v23 >= 8 )
          goto LABEL_18;
      }
      if ( v19 == v15 )
      {
        v55 = v7 & 0xFFFFFFFFFFFFF000uLL;
      }
      else if ( v22 <= v16 )
      {
        v18 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      v7 = v7 + 8 * v23 - 56;
LABEL_18:
      if ( v23 == 8 )
      {
        v25 = v13[20].Region + (v22 << 12);
        v53 = v25;
        v67 = (__int64 *)(((v25 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        v26 = *v67;
        if ( (unsigned __int64)(v67 + 0x12090482600LL) <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow(v16, v15) && (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
          {
            v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v28 )
            {
              v29 = *(_QWORD *)(v28 + 8 * ((v27 >> 3) & 0x1FF));
              if ( (v29 & 0x20) != 0 )
                v26 |= 0x20uLL;
              if ( (v29 & 0x42) != 0 )
                v26 |= 0x42uLL;
            }
          }
          v16 = v51;
          v15 = v52;
        }
        *(_QWORD *)v7 = -1LL;
        *(_QWORD *)(v7 + 8) = -1LL;
        *(_QWORD *)(v7 + 16) = -1LL;
        *(_QWORD *)(v7 + 24) = -1LL;
        *(_QWORD *)(v7 + 32) = -1LL;
        *(_QWORD *)(v7 + 40) = -1LL;
        *(_QWORD *)(v7 + 48) = -1LL;
        *(_QWORD *)(v7 + 56) = -1LL;
        v30 = v7 + 64;
        v54 = v26;
        if ( v19 == v15 )
        {
          v31 = v30;
          if ( (v30 & 0xFFF) != 0 )
          {
            while ( !*(_QWORD *)v31 )
            {
              v31 += 8LL;
              if ( (v31 & 0xFFF) == 0 )
                goto LABEL_38;
            }
            v55 = v31 & 0xFFFFFFFFFFFFF000uLL;
          }
        }
LABEL_38:
        v7 = v30 - 64;
        if ( v22 <= v16 )
        {
          v18 = v7;
          if ( (v7 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v18 -= 8LL;
              if ( *(_QWORD *)v18 )
                break;
              if ( (v18 & 0xFFF) == 0 )
              {
                if ( !*(_QWORD *)v18 )
                  goto LABEL_44;
                break;
              }
            }
            v18 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
        }
LABEL_44:
        _bittestandset64(*(signed __int64 **)(v57 + 8), v24);
        if ( !v56 )
          v56 = v25 + 0x200000;
        v32 = v26;
        if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8
          && (unsigned int)MiPteHasShadow(v16, v26)
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          v33 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 8 * (((unsigned __int64)&v54 >> 3) & 0x1FF));
            if ( (v34 & 0x20) != 0 )
              v32 |= 0x20uLL;
            if ( (v34 & 0x42) != 0 )
              v32 |= 0x42uLL;
          }
        }
        v35 = (_QWORD *)(48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        if ( (v26 & 0x80u) == 0LL )
        {
          MiInsertTbFlushEntry(&v68, v25, 512LL, 0LL);
          v13 = v50;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v36 = (volatile signed __int32 *)(v35 + 3);
          v37 = 512LL;
          do
          {
            v38 = 0;
            if ( _interlockedbittestandset64(v36, 0x3FuLL) )
            {
              do
              {
                if ( (++v38 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v38);
              }
              while ( (*(_QWORD *)v36 & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v36, 0x3FuLL) );
            }
            *((_BYTE *)v36 + 10) = *((_BYTE *)v36 + 10) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)v36, 0x7FFFFFFFFFFFFFFFuLL);
            v36 += 12;
            --v37;
          }
          while ( v37 );
          __writecr8((unsigned __int8)CurrentIrql);
          v4 = v35;
          v22 = v64;
          *v35 = v59;
          v59 = v35;
          if ( v22 >= v66 && v22 + 512 <= v63 )
          {
            v13 = v50;
          }
          else
          {
            v13 = v50;
            --v50[18].Alignment;
          }
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
            MiLogPerfMemoryRangeEvent(v53, 0LL, 10LL, 512LL);
          v39 = v67;
          v40 = (unsigned __int64)(v67 + 0x12090482600LL);
          *v67 = 0LL;
          if ( v40 <= 0x7F8 )
            MiWritePteShadow(v39, 0LL);
          MiInsertTbFlushEntry(&v68, v53, 1LL, 1LL);
        }
        p_Region = v57;
        v21 = v60;
        v15 = v52;
        v16 = v51;
      }
      else
      {
        _bittestandreset64(*(signed __int64 **)(p_Region + 8), v24);
        if ( v22 < *v21 )
          *v21 = v22;
      }
      v19 = v22;
    }
    while ( v22 > v16 );
    v17 = v55;
  }
  if ( v17 > v18 )
    MiJoinBitmapPages(v16, v18, (v17 - v18) >> 12, v19);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_87;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  if ( !LockHandle.LockQueue.Next )
  {
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) == &LockHandle )
      goto LABEL_87;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
  }
  LockHandle.LockQueue.Next = 0LL;
  _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
LABEL_87:
  __writecr8(LockHandle.OldIrql);
  result = v53;
  if ( v53 )
  {
    MiReturnSystemVa(v53, v56, 5LL, &v68);
    if ( v4 )
    {
      do
      {
        v43 = (_QWORD *)*v4;
        v44 = (unsigned __int64)((__int64)(v4 + 0xB000000000LL) / 48) >> 9;
        if ( qword_14034FBA8[0] )
        {
          v45 = ((unsigned __int64)((__int64)(v4 + 0xB000000000LL) / 48) >> 9) & 0x1F;
          LOBYTE(v46) = 1;
          v47 = (volatile signed __int32 *)(qword_14034FBA8[0]
                                          + 4 * ((unsigned __int64)((__int64)(v4 + 0xB000000000LL) / 48) >> 14));
          if ( v45 + 1 > 0x20 )
          {
            if ( (v44 & 0x1F) != 0 )
            {
              _InterlockedAnd(v47, ~(((1 << (32 - (v44 & 0x1F))) - 1) << v45));
              v46 = 1LL - (32 - (unsigned int)(v44 & 0x1F));
              ++v47;
              if ( v46 >= 0x20 )
              {
                v49 = v46 >> 5;
                v46 += -32LL * (v46 >> 5);
                do
                {
                  *v47++ = 0;
                  --v49;
                }
                while ( v49 );
              }
              if ( !v46 )
                goto LABEL_99;
            }
            v48 = (1 << v46) - 1;
          }
          else
          {
            v48 = 1 << v45;
          }
          _InterlockedAnd(v47, ~v48);
        }
LABEL_99:
        MiFreeLargePageMemory(v44 << 9);
        v61[0] += 512LL;
        v4 = v43;
      }
      while ( v43 );
    }
    result = v61[0];
    if ( v61[0] )
    {
      v62 = v61[0];
      return MiReturnNonPagedPoolCharges(v61);
    }
  }
  return result;
}
