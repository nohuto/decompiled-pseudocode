/*
 * XREFs of MiObtainSystemCacheView @ 0x14003DD60
 * Callers:
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1405AC3CC (MmReserveViewInSystemCache.c)
 * Callees:
 *     RemoveListHeadPte @ 0x14003E468 (RemoveListHeadPte.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiExpandSystemCache @ 0x14006B790 (MiExpandSystemCache.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiCompleteSystemCacheViewFlush @ 0x140129E24 (MiCompleteSystemCacheViewFlush.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1401396E8 (MiWaitForSystemCacheViewFlush.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140156C90 (KeFlushMultipleRangeCurrentTb.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT @ 0x140217790 (MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 *     MiUpdateLinkedListInPte @ 0x1402260B8 (MiUpdateLinkedListInPte.c)
 */

_QWORD *MiObtainSystemCacheView()
{
  unsigned __int64 v0; // rbp
  unsigned int v1; // esi
  __int64 CurrentIrql; // rdi
  unsigned __int64 v3; // r13
  __int64 v4; // r12
  _QWORD *v5; // r14
  __int64 PteLink; // rax
  __int64 Process; // r8
  unsigned int v8; // r15d
  int v9; // edi
  __int64 v10; // rax
  _QWORD *v11; // r14
  int v12; // eax
  int v13; // r15d
  char v14; // dl
  unsigned int v15; // ecx
  int v16; // esi
  unsigned int v17; // edi
  _KPROCESS *v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r15d
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int8 v26; // di
  __int64 v27; // rax
  int v28; // eax
  int v29; // edx
  unsigned int v30; // edx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned int v41; // r11d
  int v42; // r11d
  signed __int32 v43[16]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+40h] [rbp+0h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+188h]

  v0 = (unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( !(unsigned int)MiChargeWsles(dword_14034FD40, 64LL) )
    return 0LL;
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 20LL;
  *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0;
  v1 = 0;
  *(_WORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) = 0;
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = CurrentIrql;
  __writecr8(2uLL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_14034EEA8, (PKLOCK_QUEUE_HANDLE)(v0 + 8));
  v3 = ((unsigned __int64)&qword_14034EE90 >> 9) & 0x7FFFFFFFF8LL;
  if ( MiGetPteLink(qword_14034EE90) != (__int64)(v3 - qword_14034EEA0 - 0x98000000000LL) >> 3 )
    goto LABEL_5;
  while ( MiExpandSystemCache() )
  {
    if ( MiGetPteLink(qword_14034EE90) != (__int64)(v3 - qword_14034EEA0 - 0x98000000000LL) >> 3 )
      goto LABEL_5;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v0 + 8, retaddr);
    goto LABEL_14;
  }
  _m_prefetchw((const void *)(v0 + 8));
  v10 = *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  if ( !v10 )
  {
    if ( _InterlockedCompareExchange64(
           *(volatile signed __int64 **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
           0LL,
           ((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 8) == v0 + 8 )
      goto LABEL_14;
    v10 = KxWaitForLockChainValid(v0 + 8);
  }
  *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
LABEL_14:
  __writecr8((unsigned __int8)CurrentIrql);
  if ( (unsigned int)CcUnmapInactiveViews(64LL, 0LL, v0 + 32) != 1 )
  {
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v26;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_14034EEA8, (PKLOCK_QUEUE_HANDLE)(v0 + 8));
    if ( MiGetPteLink(qword_14034EE90) == (__int64)(v3 - qword_14034EEA0 - 0x98000000000LL) >> 3 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(v0 + 8, retaddr);
LABEL_64:
        __writecr8(v26);
        MiChargeWsles(dword_14034FD40, -64LL);
        return 0LL;
      }
      _m_prefetchw((const void *)(v0 + 8));
      v27 = *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      if ( !v27 )
      {
        if ( _InterlockedCompareExchange64(
               *(volatile signed __int64 **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
               0LL,
               ((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 8) == v0 + 8 )
          goto LABEL_64;
        v27 = KxWaitForLockChainValid(v0 + 8);
      }
      *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v27 + 8), 1uLL);
      goto LABEL_64;
    }
LABEL_5:
    v4 = RemoveListHeadPte(&qword_14034EE90);
    MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT(v4 << 25 >> 16);
    v5 = (_QWORD *)(v4 + 24);
    PteLink = MiGetPteLink(*(_QWORD *)(v4 + 24));
    v8 = 1;
    if ( PteLink )
    {
      if ( PteLink == 1 )
      {
        v9 = 1;
        goto LABEL_77;
      }
      _InterlockedOr(v43, 0);
      v28 = MiGetPteLink(*(_QWORD *)(v4 + 16));
      v30 = (v29 - v28) & 0xFFFFF;
      if ( v30 <= 2 && ((v28 & 1) != 0 || v30 < 2) )
      {
        v31 = v4;
        do
        {
          if ( *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) )
          {
            v32 = v1++;
            *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0 + 8 * v32) = v31;
          }
          v33 = v31 << 25 >> 16;
          *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v33;
          MiInsertTbFlushEntry(v0 + 48, v33, 64LL, 0LL);
          *v5 = MiUpdateLinkedListInPte(*v5, 1LL);
          if ( v1 == 12 )
            break;
          v34 = MiGetPteLink(*(_QWORD *)v31);
          Process = 0x98000000000LL;
          if ( v34 == (__int64)(v3 - qword_14034EEA0 - 0x98000000000LL) >> 3 )
            break;
          v31 = qword_14034EEA0 + 8 * v34;
          v5 = (_QWORD *)(v31 + 24);
        }
        while ( MiGetPteLink(*(_QWORD *)(v31 + 24)) == 2 );
        v5 = (_QWORD *)(v4 + 24);
      }
    }
    v9 = 0;
LABEL_77:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v0 + 8, retaddr);
      goto LABEL_83;
    }
    _m_prefetchw((const void *)(v0 + 8));
    v35 = *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( !v35 )
    {
      if ( _InterlockedCompareExchange64(
             *(volatile signed __int64 **)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
             0LL,
             ((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 8) == v0 + 8 )
        goto LABEL_83;
      v35 = KxWaitForLockChainValid(v0 + 8);
    }
    *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v35 + 8), 1uLL);
LABEL_83:
    if ( !*(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) )
    {
LABEL_103:
      __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28));
      if ( v9 == 1 )
        MiWaitForSystemCacheViewFlush(v4);
      *(_QWORD *)v4 = 0LL;
      if ( (unsigned __int64)(v4 + 0x90482413000LL) <= 0x7F8 )
        MiWritePteShadow(v4, 0LL);
      *(_QWORD *)(v4 + 8) = 0LL;
      if ( (unsigned __int64)(v4 + 0x90482413008LL) <= 0x7F8 )
        MiWritePteShadow(v4 + 8, 0LL);
      *(_QWORD *)(v4 + 16) = 0LL;
      if ( (unsigned __int64)(v4 + 0x90482413010LL) <= 0x7F8 )
        MiWritePteShadow(v4 + 16, 0LL);
      *v5 = 0LL;
      if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v5, 0LL);
      return (_QWORD *)v4;
    }
    v36 = qword_14034EBD8;
    if ( (*(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) & 2) != 0 )
    {
      v37 = *(unsigned int *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    }
    else
    {
      v37 = *(unsigned int *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( !*(_QWORD *)(Process + 1824) )
      {
        if ( !*(_QWORD *)(Process + 720) )
          goto LABEL_90;
        if ( (_DWORD)v37 != 1 )
        {
LABEL_92:
          if ( *(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x35)
            || *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) > v36 )
          {
            if ( (*(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) & 1) != 0 )
              KeFlushCurrentTbOnly(v37, v36, Process);
            else
              KeFlushTb(v37, v8, Process);
            *(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x35) = 0;
          }
          else
          {
            v38 = v0 + 72;
            v39 = (unsigned int)v37;
            v40 = *(unsigned int *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C);
            if ( (*(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) & 1) != 0 )
              KeFlushMultipleRangeCurrentTb(v40, v38, v39);
            else
              KeFlushMultipleRangeTb(v40, v38, v39, v8);
          }
          *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0;
          v41 = 0;
          *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
          if ( v1 )
          {
            do
            {
              MiCompleteSystemCacheViewFlush(*(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL)
                                                       + 0xF0
                                                       + 8LL * v41));
              v41 = v42 + 1;
            }
            while ( v41 != v1 );
          }
          goto LABEL_103;
        }
      }
      v36 = -1LL;
    }
LABEL_90:
    if ( (_DWORD)v37 == 1 )
      v8 = 0;
    goto LABEL_92;
  }
  v11 = (_QWORD *)(((*(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) >> 9) & 0x7FFFFFFFF8LL)
                 - 0x98000000000LL);
  MiChargeWsles(dword_14034FD40, -64LL);
  if ( MiGetPteLink(v11[3]) == 2 )
  {
    v12 = MiGetPteLink(v11[2]);
    v13 = v12;
    _InterlockedOr(v43, 0);
    v14 = KiTbFlushTimeStamp;
    v15 = (KiTbFlushTimeStamp - v12) & 0xFFFFF;
    if ( v15 <= 2 )
    {
      v16 = v12 & 1;
      while ( 1 )
      {
        if ( !v16 && v15 >= 2 )
          goto LABEL_50;
        if ( (v14 & 1) == 0 )
          break;
        v17 = 0;
        _InterlockedOr(v43, 0);
        while ( _bittest(&KiTbFlushTimeStamp, 0) )
        {
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        if ( v16 )
        {
          _InterlockedOr(v43, 0);
          v14 = KiTbFlushTimeStamp;
          v15 = (KiTbFlushTimeStamp - v13) & 0xFFFFF;
          if ( v15 <= 2 )
            continue;
        }
        goto LABEL_50;
      }
      MiInsertTbFlushEntry(v0 + 48, *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20), 64LL, 0LL);
      if ( !*(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) )
        goto LABEL_50;
      v19 = qword_14034EBD8;
      if ( (*(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) & 2) != 0 )
      {
        v20 = *(unsigned int *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
      }
      else
      {
        v20 = *(unsigned int *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
        v18 = KeGetCurrentThread()->ApcState.Process;
        if ( !v18[2].ActiveProcessors.Bitmap[11] )
        {
          if ( !v18->SecurePid )
            goto LABEL_37;
          if ( (_DWORD)v20 != 1 )
            goto LABEL_39;
        }
        v19 = -1LL;
      }
LABEL_37:
      if ( (_DWORD)v20 == 1 )
      {
        v21 = 0;
        goto LABEL_40;
      }
LABEL_39:
      v21 = 1;
LABEL_40:
      if ( *(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x35)
        || *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) > v19 )
      {
        if ( (*(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) & 1) != 0 )
          KeFlushCurrentTbOnly(v20, v19, v18);
        else
          KeFlushTb(v20, v21, v18);
        *(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x35) = 0;
      }
      else
      {
        v22 = v0 + 72;
        v23 = (unsigned int)v20;
        v24 = *(unsigned int *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C);
        if ( (*(_BYTE *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) & 1) != 0 )
          KeFlushMultipleRangeCurrentTb(v24, v22, v23);
        else
          KeFlushMultipleRangeTb(v24, v22, v23, v21);
      }
      *(_DWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0;
      *(_QWORD *)(((unsigned __int64)&v44 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
    }
  }
LABEL_50:
  *v11 = 0LL;
  if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v11, 0LL);
  v11[1] = 0LL;
  if ( (unsigned __int64)(v11 + 0x12090482601LL) <= 0x7F8 )
    MiWritePteShadow(v11 + 1, 0LL);
  v11[2] = 0LL;
  if ( (unsigned __int64)(v11 + 0x12090482602LL) <= 0x7F8 )
    MiWritePteShadow(v11 + 2, 0LL);
  return v11;
}
