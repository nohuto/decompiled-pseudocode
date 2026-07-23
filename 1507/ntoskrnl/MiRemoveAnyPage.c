/*
 * XREFs of MiRemoveAnyPage @ 0x140100180
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiReplenishPageSlist @ 0x1401009F0 (MiReplenishPageSlist.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeCheckForZeroPage @ 0x140186B40 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140200CD0 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiPageNotZero @ 0x1402262F4 (MiPageNotZero.c)
 */

__int64 __fastcall MiRemoveAnyPage(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // r14
  char v4; // r11
  __int64 v5; // rdi
  int i; // edx
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // di
  _DWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // r10
  unsigned int v23; // r12d
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  _SLIST_HEADER *v30; // rcx
  PSLIST_ENTRY v31; // rax
  _QWORD *p_Next; // rsi
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // r15
  _SLIST_HEADER *v35; // rcx
  PSLIST_ENTRY v36; // rax
  __int64 DemandZeroPte; // rax
  _QWORD *v38; // rdx
  __int64 v39; // r9
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  __int64 v42; // rbx
  _SLIST_HEADER *v43; // rcx
  PSLIST_ENTRY v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // r8
  _SLIST_HEADER *v47; // rcx
  PSLIST_ENTRY v48; // rax
  _QWORD *v49; // rdi
  unsigned __int64 v50; // rsi
  unsigned __int8 v51[4]; // [rsp+20h] [rbp-48h] BYREF
  int v52; // [rsp+24h] [rbp-44h]
  int v53; // [rsp+28h] [rbp-40h]
  int v54; // [rsp+2Ch] [rbp-3Ch]
  __int64 v55; // [rsp+30h] [rbp-38h]
  __int64 v56; // [rsp+38h] [rbp-30h] BYREF
  volatile signed __int64 *v57; // [rsp+40h] [rbp-28h]
  void *retaddr; // [rsp+98h] [rbp+30h]
  unsigned __int8 v60; // [rsp+A8h] [rbp+40h] BYREF
  int v61; // [rsp+B0h] [rbp+48h]
  unsigned __int8 v62; // [rsp+B8h] [rbp+50h] BYREF

  v61 = a3;
  v3 = a2;
  v4 = a3;
  v5 = a1;
  i = a3 & 2;
  v52 = i;
  if ( (a3 & 2) != 0 )
  {
    v7 = 0;
    v8 = 1;
  }
  else
  {
    v7 = 1;
    v8 = 0;
  }
  v53 = dword_14034EBB8;
  v9 = *(_QWORD *)(a1 + 40) + 1336 * (v3 >> byte_14034EB89);
  v54 = v3;
  v10 = v8;
  if ( (unsigned int)MmNumberOfChannels <= 1 )
  {
    if ( !*(_QWORD *)(v9 + 8LL * v7 + 1168) )
    {
      do
      {
        if ( v7 == v8 )
          goto LABEL_76;
        v7 = v8;
      }
      while ( !*(_QWORD *)(v9 + 8LL * v8 + 1168) );
    }
    goto LABEL_12;
  }
  v11 = 2LL * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v3 >> byte_14034EB98))
      + 154;
  if ( *(_QWORD *)(v9 + 8 * (v11 + v7)) )
  {
LABEL_12:
    v12 = v7;
    v55 = v7;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v5 + 8 * v12 + 1472);
      v14 = *(_QWORD *)(v13 + 40 * v3 + 16);
      v15 = v13 + 40 * v3;
      if ( v14 == 0xFFFFFFFFFLL )
        goto LABEL_23;
      v16 = 48 * v14 - 0x58000000000LL;
      if ( (v4 & 1) != 0 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          goto LABEL_23;
        CurrentIrql = 17;
LABEL_17:
        if ( (*(_BYTE *)(v16 + 34) & 7) == v7 )
        {
          v18 = (_DWORD *)(v15 + 32);
          v57 = (volatile signed __int64 *)(v15 + 32);
          v56 = 0LL;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            if ( !(unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(&v56) )
            {
              v12 = v55;
              v4 = v61;
              v10 = v8;
LABEL_42:
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( CurrentIrql != 17 )
                __writecr8(CurrentIrql);
              v5 = a1;
              goto LABEL_23;
            }
          }
          else
          {
            _m_prefetchw(v18);
            if ( *v18 || _InterlockedCompareExchange64((volatile signed __int64 *)v18, (signed __int64)&v56, 0LL) )
            {
              _mm_pause();
              goto LABEL_42;
            }
          }
          if ( v14 == *(_QWORD *)(v15 + 16) )
          {
            MiUnlinkFreeOrZeroedPage(v14, v15);
            _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (v61 & 1) != 0 )
            {
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                KiReleaseQueuedSpinLockInstrumented(&v56, retaddr);
                return v14;
              }
              _m_prefetchw(&v56);
              v21 = v56;
              if ( v56 )
              {
LABEL_51:
                v56 = 0LL;
                _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
              }
              else if ( (__int64 *)_InterlockedCompareExchange64(v57, 0LL, (signed __int64)&v56) != &v56 )
              {
                v21 = KxWaitForLockChainValid(&v56);
                goto LABEL_51;
              }
              return v14;
            }
            v22 = a1;
            v23 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * v7 + 1488) + 16LL * (unsigned int)v3);
            if ( v7 == 1 )
            {
              v24 = *(_DWORD *)(a1 + 4820);
              if ( v23 < v24 )
              {
                v25 = 1LL;
                goto LABEL_67;
              }
            }
            else
            {
              if ( !*(_QWORD *)(v16 + 16)
                && (MiFlags & 0x80u) != 0
                && v14 < 0x200000
                && (*(_BYTE *)(48 * v14 - 0x57FFFFFFFDDLL) & 0x40) == 0
                && (++dword_14034F204 & MmPageValidationFrequency) == 0 )
              {
                if ( KeGetCurrentPrcb()->HyperPte )
                {
                  v26 = MiMapPageInHyperSpaceWorker(v14, &v60);
                  if ( KeCheckForZeroPage(v26) )
                    MiPageNotZero(v26, v14);
                  MiUnmapPageInHyperSpaceWorker(v26, v60);
                  v22 = a1;
                }
              }
              v24 = *(_DWORD *)(v22 + 4820);
              if ( v23 < v24 )
              {
                v25 = 0LL;
LABEL_67:
                MiReplenishPageSlist(v22, v25, (unsigned int)v3, v24 - v23);
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v56, retaddr);
              __writecr8(CurrentIrql);
              return v14;
            }
            _m_prefetchw(&v56);
            v27 = v56;
            if ( v56 )
            {
LABEL_73:
              v56 = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(v27 + 8), 1uLL);
            }
            else if ( (__int64 *)_InterlockedCompareExchange64(v57, 0LL, (signed __int64)&v56) != &v56 )
            {
              v27 = KxWaitForLockChainValid(&v56);
              goto LABEL_73;
            }
            __writecr8(CurrentIrql);
            return v14;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v56, retaddr);
            goto LABEL_38;
          }
          _m_prefetchw(&v56);
          v19 = v56;
          if ( !v56 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v57, 0LL, (signed __int64)&v56) == &v56 )
              goto LABEL_38;
            v19 = KxWaitForLockChainValid(&v56);
          }
          v56 = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
LABEL_38:
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql != 17 )
            __writecr8(CurrentIrql);
          v12 = v55;
          v5 = a1;
          v4 = v61;
          v10 = v8;
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql != 17 )
            __writecr8(CurrentIrql);
          v5 = a1;
        }
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
          goto LABEL_17;
        __writecr8(CurrentIrql);
        v5 = a1;
LABEL_23:
        v3 = (unsigned int)v3 & ~v53 | v53 & ((_DWORD)v3 + 1);
        if ( (_DWORD)v3 == v54 )
        {
          if ( v12 == v10 )
            goto LABEL_75;
          v7 = v8;
          v55 = v10;
          v12 = v10;
        }
      }
    }
  }
  while ( v7 != v8 )
  {
    v7 = v8;
    if ( *(_QWORD *)(v9 + 8 * (v11 + v8)) )
      goto LABEL_12;
  }
LABEL_75:
  for ( i = v52; ; i = v52 )
  {
LABEL_76:
    if ( i )
    {
      v28 = *(_QWORD *)(v5 + 1488);
      v29 = 16LL * (unsigned int)v3;
      v30 = (_SLIST_HEADER *)(v29 + v28);
      if ( LOWORD(v30->Alignment) )
      {
        v31 = RtlpInterlockedPopEntrySList(v30);
        p_Next = &v31->Next;
        if ( v31 )
        {
          v31[1].Next = 0LL;
          v33 = (__int64)&v31[0x5800000000LL] / 48;
          if ( (MiFlags & 0x80u) != 0
            && v33 < 0x200000
            && (*(_BYTE *)(48 * v33 - 0x57FFFFFFFDDLL) & 0x40) == 0
            && (++dword_14034F204 & MmPageValidationFrequency) == 0 )
          {
            if ( KeGetCurrentPrcb()->HyperPte )
            {
              v34 = MiMapPageInHyperSpaceWorker(v33, &v62);
              if ( KeCheckForZeroPage(v34) )
                MiPageNotZero(v34, v33);
              MiUnmapPageInHyperSpaceWorker(v34, v62);
            }
          }
          *p_Next = 0LL;
          if ( v33 != -1LL )
            return v33;
        }
      }
      v35 = (_SLIST_HEADER *)(v29 + *(_QWORD *)(a1 + 1496));
      if ( LOWORD(v35->Alignment) )
      {
        v36 = RtlpInterlockedPopEntrySList(v35);
        if ( v36 )
        {
          v36[1].Next = 0LL;
          DemandZeroPte = MiMakeDemandZeroPte(4LL);
          v38[2] = DemandZeroPte;
          *v38 = v39;
          v40 = (__int64)((unsigned __int128)((__int64)(v38 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
          v41 = (v40 >> 63) + v40;
          if ( v41 != -1LL )
            return v41;
        }
      }
LABEL_106:
      v5 = a1;
      goto LABEL_107;
    }
    v42 = 16LL * (unsigned int)v3;
    v43 = (_SLIST_HEADER *)(v42 + *(_QWORD *)(v5 + 1496));
    if ( LOWORD(v43->Alignment) )
    {
      v44 = RtlpInterlockedPopEntrySList(v43);
      if ( v44 )
      {
        v44[1].Next = 0LL;
        v45 = MiMakeDemandZeroPte(4LL);
        v46[2] = v45;
        *v46 = 0LL;
        if ( v41 != -1LL )
          return v41;
      }
    }
    v47 = (_SLIST_HEADER *)(v42 + *(_QWORD *)(v5 + 1488));
    if ( LOWORD(v47->Alignment) )
    {
      v48 = RtlpInterlockedPopEntrySList(v47);
      v49 = &v48->Next;
      if ( v48 )
      {
        v48[1].Next = 0LL;
        v33 = (__int64)&v48[0x5800000000LL] / 48;
        if ( (MiFlags & 0x80u) != 0
          && v33 < 0x200000
          && (*(_BYTE *)(48 * v33 - 0x57FFFFFFFDDLL) & 0x40) == 0
          && (++dword_14034F204 & MmPageValidationFrequency) == 0 )
        {
          if ( KeGetCurrentPrcb()->HyperPte )
          {
            v50 = MiMapPageInHyperSpaceWorker(v33, v51);
            if ( KeCheckForZeroPage(v50) )
              MiPageNotZero(v50, v33);
            MiUnmapPageInHyperSpaceWorker(v50, v51[0]);
          }
        }
        *v49 = 0LL;
        if ( v33 != -1LL )
          return v33;
      }
      goto LABEL_106;
    }
LABEL_107:
    LODWORD(v3) = v3 & ~v53 | v53 & (v3 + 1);
    if ( (_DWORD)v3 == v54 )
      break;
  }
  return -1LL;
}
