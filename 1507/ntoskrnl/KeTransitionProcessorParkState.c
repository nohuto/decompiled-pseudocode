/*
 * XREFs of KeTransitionProcessorParkState @ 0x14020AF40
 * Callers:
 *     PpmParkReportParkedCore @ 0x140242708 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x140242788 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiSetProcessorIdle @ 0x1400D53B0 (KiSetProcessorIdle.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400EC860 (KiGroupSchedulingGenerationEnd.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiFlushReadyLists @ 0x14020B470 (KiFlushReadyLists.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeTransitionProcessorParkState(__int64 a1)
{
  char v1; // r12
  __int64 v2; // rsi
  char v3; // r13
  unsigned __int64 v4; // r14
  volatile signed __int32 *v6; // rdi
  bool v7; // r15
  unsigned int v8; // ebp
  signed __int32 i; // edx
  unsigned __int64 v10; // r10
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // r11
  char v16; // al
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  int v21; // eax
  char v22; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v24; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char v26; // cl
  __int64 v27; // rdx
  __int64 v28; // rdx
  char v29; // r8
  __int64 result; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  char v34; // si
  char v35; // r8
  char v36; // bp
  struct _KPRCB *v37; // rcx
  struct _SINGLE_LIST_ENTRY *v38; // rdx
  _SINGLE_LIST_ENTRY *v39; // r8
  volatile signed __int32 *v40; // rdi
  unsigned int v41; // esi
  __int64 v42; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  char v44; // [rsp+60h] [rbp+8h]
  _QWORD *v45; // [rsp+70h] [rbp+18h] BYREF

  v45 = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 1600);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 1608);
  v44 = 0;
  _m_prefetchw((const void *)(v2 + 80));
  v6 = (volatile signed __int32 *)(v2 + 88);
  v7 = (v4 & *(_QWORD *)(v2 + 80)) != 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2 + 88);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v2 + 88));
    for ( i = *v6; (*v6 & 0xBFFFFFFF) != 0x80000000; i = *v6 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v6, i | 0x40000000, i);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  v10 = 0LL;
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v11);
        v10 = 0LL;
      }
    }
    while ( *(_QWORD *)(a1 + 48) );
  }
  _InterlockedXor64((volatile signed __int64 *)(v2 + 80), v4);
  v12 = *(_QWORD *)(a1 + 24768);
  if ( !v12 )
    goto LABEL_30;
  v13 = *(_QWORD *)(a1 + 24776);
  v14 = *(_QWORD *)(v2 + 80) & v12;
  if ( !v14 )
  {
    v15 = 1LL;
    v3 = 1;
    goto LABEL_31;
  }
  if ( v14 == v4 )
  {
    v15 = 1LL;
    *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 1616)
                                                                    + *(unsigned __int8 *)(v13 + 596)]]
              + 24784) = 0;
    v16 = *(_BYTE *)(a1 + 1617);
    *(_DWORD *)(a1 + 24784) = 1;
LABEL_26:
    *(_BYTE *)(v13 + 596) = v16;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a1 + 24784) )
  {
    v15 = 1LL;
    if ( v7 )
    {
      _BitScanReverse64(&v17, v14);
      v18 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 1616)
                                                                + (unsigned int)v17]];
      *(_DWORD *)(a1 + 24784) = 0;
      *(_DWORD *)(v18 + 24784) = 1;
      v16 = *(_BYTE *)(v18 + 1617);
      goto LABEL_26;
    }
  }
  else
  {
LABEL_30:
    v15 = 1LL;
  }
LABEL_31:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 88, retaddr);
    v10 = 0LL;
    v15 = 1LL;
  }
  else
  {
    *(_DWORD *)(v2 + 88) = 0;
  }
  v19 = *(_QWORD *)(a1 + 24);
  v20 = *(unsigned __int8 *)(a1 + 35);
  if ( !v7 )
  {
    if ( (v20 & 2) == 0 )
      __fastfail(0x21u);
    v21 = v20 - 2;
    *(_BYTE *)(a1 + 35) = v21;
    if ( !v21 )
      _InterlockedXor64((volatile signed __int64 *)v2, v4);
    v22 = 0;
    if ( !v21 )
    {
      *(_BYTE *)(a1 + 11755) = 1;
      v22 = 1;
    }
    if ( KiAbEnabled )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( *(char *)(v19 + 195) < 0 )
      {
        if ( *(_BYTE *)(v19 + 793) )
        {
          v24 = (struct _SINGLE_LIST_ENTRY *)(v19 + 1376);
          if ( *(_QWORD *)(v19 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
            {
              v24->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v24;
              _InterlockedAdd16((volatile signed __int16 *)(v19 + 1416), 1u);
              KiAbQueueAutoBoostDpc((__int64)CurrentPrcb);
              v10 = 0LL;
            }
          }
        }
      }
    }
    *(_BYTE *)(v19 + 195) = 0;
    if ( v22 )
    {
      if ( (*(_BYTE *)(v19 + 2) & 4) != 0 )
      {
        if ( *(_QWORD *)(v19 + 104)
          && (v27 = *(_QWORD *)(v19 + 104)) != 0
          && (v28 = *(unsigned int *)(a1 + 1624) + v27) != 0
          && (unsigned int)KiGetThreadEffectiveRankNonZero(v19, v28, 0) )
        {
          v26 = v29 + 1;
        }
        else
        {
          v26 = *(_BYTE *)(v19 + 195);
        }
      }
      else
      {
        v26 = 0;
      }
      **(_BYTE **)(a1 + 56) = v26;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), v10);
    result = 0xFFFFF7800000036AuLL;
    _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
    return result;
  }
  if ( (v20 & 2) != 0 )
    __fastfail(0x21u);
  v31 = v20 + 2;
  *(_BYTE *)(a1 + 35) = v31;
  if ( v31 == 2 )
    _InterlockedXor64((volatile signed __int64 *)v2, v4);
  v32 = *(_QWORD *)(a1 + 16);
  if ( v32 && v32 != v19 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    v1 = 1;
    *(_BYTE *)(v32 + 388) = 7;
    v45 = (_QWORD *)(v32 + 216);
    *(_QWORD *)(v32 + 216) = 0LL;
    v32 = 0LL;
  }
  v33 = *(_QWORD *)(a1 + 8);
  v34 = 1;
  if ( v33 != v19 )
  {
    if ( !v32 )
    {
      if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) == 0 )
      {
        *(_BYTE *)(v33 + 565) = 1;
        _interlockedbittestandset((volatile signed __int32 *)(v33 + 120), 0xBu);
        *(_QWORD *)(a1 + 16) = v19;
        KiSetProcessorIdle(a1, 1, 0);
        if ( ((unsigned __int8)v15 & *(_BYTE *)(a1 + 11756)) == 0 )
        {
          v36 = v15;
          v44 = v15;
          goto LABEL_72;
        }
        goto LABEL_90;
      }
      v34 = 0;
    }
LABEL_71:
    v36 = 0;
    goto LABEL_72;
  }
  if ( !v1 )
    goto LABEL_71;
  KiSetProcessorIdle(a1, 1, 0);
LABEL_90:
  v36 = v35;
LABEL_72:
  if ( KiAbEnabled != (_DWORD)v10 )
  {
    v37 = KeGetCurrentPrcb();
    if ( *(_BYTE *)(v19 + 195) != 127 && *(_BYTE *)(v19 + 793) > (unsigned __int8)v10 )
    {
      v38 = (struct _SINGLE_LIST_ENTRY *)(v19 + 1376);
      if ( *(_QWORD *)(v19 + 1376) == v15 )
      {
        v39 = &v37->AbPropagateBoostsList;
        if ( v37 != (struct _KPRCB *)-25656LL )
        {
          v38->Next = v39->Next;
          v39->Next = v38;
          _InterlockedAdd16((volatile signed __int16 *)(v19 + 1416), v15);
          KiAbQueueAutoBoostDpc((__int64)v37);
          LOBYTE(v10) = 0;
          LOBYTE(v15) = 1;
        }
      }
    }
  }
  *(_BYTE *)(v19 + 195) = 127;
  if ( v34 )
    **(_BYTE **)(a1 + 56) = 127;
  if ( KiGroupSchedulingEnabled != (_BYTE)v10 )
    KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], v15);
  KiFlushReadyLists(a1 + 22784, a1 + 22680, &v45);
  if ( v3 )
  {
    v40 = *(volatile signed __int32 **)(a1 + 24776);
    v41 = 0;
    while ( _interlockedbittestandset64(v40, 0LL) )
    {
      do
      {
        if ( (++v41 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v41);
      }
      while ( *(_QWORD *)v40 );
    }
    KiFlushReadyLists(v40 + 4, v40 + 2, &v45);
    _InterlockedAnd64((volatile signed __int64 *)v40, 0LL);
    v36 = v44;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  KiProcessDeferredReadyList(a1, &v45, 2u);
  result = 0xFFFFF7800000036AuLL;
  _InterlockedDecrement16((volatile signed __int16 *)0xFFFFF7800000036ALL);
  if ( v36 )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      result = 1LL;
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      LOBYTE(v42) = 2;
      return HalRequestSoftwareInterrupt(v42);
    }
  }
  return result;
}
