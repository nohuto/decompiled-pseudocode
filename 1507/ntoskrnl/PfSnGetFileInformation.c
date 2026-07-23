/*
 * XREFs of PfSnGetFileInformation @ 0x1400B7EF0
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x14001A220 (PfSnLogPageFaultCommon.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  _RTL_BALANCED_NODE *v2; // rbx
  _RTL_BALANCED_NODE **v3; // rax
  BOOLEAN v4; // r14
  int v5; // r15d
  _DWORD *v8; // r12
  unsigned __int8 CurrentIrql; // r13
  signed __int32 v10; // ett
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rax
  char *PoolWithTag; // rax
  char *v15; // r13
  unsigned __int8 v16; // bp
  unsigned int v17; // esi
  signed __int32 v18; // edx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rtt
  BOOLEAN v22; // r8
  _RTL_BALANCED_NODE *v23; // rdx
  _RTL_BALANCED_NODE *v24; // rax
  unsigned int v25; // ebx
  unsigned __int64 v26; // rtt
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (_RTL_BALANCED_NODE *)a2[3];
  v3 = (_RTL_BALANCED_NODE **)(a1 + 488);
  v4 = 0;
  v5 = 0;
  if ( a1 + 488 < (unsigned __int64)(a1 + 520) )
  {
    do
    {
      if ( *v3 == v2 )
        return 0LL;
      ++v3;
    }
    while ( (unsigned __int64)v3 < a1 + 520 );
  }
  v8 = (_DWORD *)(a1 + 576);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 576);
  }
  else
  {
    _m_prefetchw(v8);
    v10 = *v8 & 0x7FFFFFFF;
    if ( v10 != _InterlockedCompareExchange(v8, v10 + 1, v10) )
      ExpWaitForSpinLockSharedAndAcquire(v8);
  }
  v11 = *(_QWORD **)(a1 + 520);
  while ( v11 )
  {
    v12 = v11[3];
    if ( v12 > (unsigned __int64)v2 )
    {
      v11 = (_QWORD *)*v11;
    }
    else
    {
      if ( v12 >= (unsigned __int64)v2 )
        break;
      v11 = (_QWORD *)v11[1];
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v8, retaddr);
  }
  else
  {
    _InterlockedAnd(v8, 0xBFFFFFFF);
    _InterlockedDecrement(v8);
  }
  __writecr8(CurrentIrql);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v2;
    return 0LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6E506343u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
      _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0x30uLL);
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *((_QWORD *)v15 + 5) = a2;
  *((_QWORD *)v15 + 3) = v2;
  v16 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
  }
  else
  {
    v17 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v17 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
    while ( 1 )
    {
      v18 = *v8;
      if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v18 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v8, v18 | 0x40000000, v18);
      if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v17);
    }
  }
  v19 = *(_QWORD **)(a1 + 520);
  while ( v19 )
  {
    v20 = v19[3];
    if ( v20 > (unsigned __int64)v2 )
    {
      v19 = (_QWORD *)*v19;
    }
    else
    {
      if ( v20 >= (unsigned __int64)v2 )
      {
        v25 = 0;
LABEL_48:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
        else
          *v8 = 0;
        __writecr8(v16);
        ObfDereferenceObjectWithTag(*((PVOID *)v15 + 5), 0x746C6644u);
        ExFreePoolWithTag(v15, 0);
        return v25;
      }
      v19 = (_QWORD *)v19[1];
    }
  }
  if ( !*(_QWORD *)(a1 + 568) )
  {
    _m_prefetchw((const void *)(a1 + 360));
    v21 = *(_QWORD *)(a1 + 360) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v21 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 360), v21 + 2, v21) )
    {
      v4 = 1;
    }
    else
    {
      v4 = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
      if ( !v4 )
      {
        v25 = -1073741431;
        goto LABEL_48;
      }
    }
    *(_QWORD *)(a1 + 568) = a1;
    *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
    v5 = 1;
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  *((_QWORD *)v15 + 4) = *(_QWORD *)(a1 + 536);
  v22 = 0;
  *(_QWORD *)(a1 + 536) = v15 + 32;
  v23 = *(_RTL_BALANCED_NODE **)(a1 + 520);
  if ( !v23 )
    goto LABEL_41;
  while ( v23[1].Children[0] > v2 )
  {
    v24 = v23->Children[0];
    if ( !v23->Children[0] )
    {
      v22 = 0;
      goto LABEL_41;
    }
LABEL_36:
    v23 = v24;
  }
  v24 = v23->Children[1];
  if ( v24 )
    goto LABEL_36;
  v22 = 1;
LABEL_41:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), v23, v22, (PRTL_BALANCED_NODE)v15);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
  else
    *v8 = 0;
  __writecr8(v16);
  if ( v5 )
  {
    v4 = 0;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
  }
  *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v2;
  if ( v4 )
  {
    _m_prefetchw((const void *)(a1 + 360));
    v26 = *(_QWORD *)(a1 + 360) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v26 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 360), v26 - 2, v26) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
  }
  return 0LL;
}
