/*
 * XREFs of KiSearchForNewThread @ 0x140082AC0
 * Callers:
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x1400DF180 (KiIdleSchedule.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiIsThreadRankNonZero @ 0x140014D90 (KiIsThreadRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140082E30 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400C375C (KiSelectThreadFromSchedulingGroup.c)
 *     KiSetProcessorIdle @ 0x1400EC330 (KiSetProcessorIdle.c)
 */

__int64 __fastcall KiSearchForNewThread(struct _KPRCB *a1, char a2)
{
  __int64 result; // rax
  int v3; // r12d
  char v6; // di
  __int64 ready; // r11
  _RTL_BALANCED_NODE *Min; // rax
  int IdleState; // eax
  _KNODE *ParentNode; // rdx
  int v11; // eax
  unsigned __int64 CoreProcessorSet; // rcx
  __int64 IdleThread; // rcx
  char EffectivePriorityThread; // dl
  BOOL v15; // ecx
  __int64 v16; // rsi
  int Group; // edx
  int v18; // r13d
  unsigned __int64 v19; // rbp
  char GroupIndex; // r15
  __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  int v23; // r14d
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  int v28; // r14d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  _RTL_BALANCED_NODE **v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // [rsp+60h] [rbp+8h]
  int v36; // [rsp+70h] [rbp+18h] BYREF

  result = (__int64)a1->NextThread;
  v3 = 0;
  if ( result )
  {
LABEL_34:
    a1->NextThread = 0LL;
    a1->CurrentThread = (_KTHREAD *)result;
    *(_BYTE *)(result + 388) = 2;
  }
  else
  {
    v6 = 1;
    while ( 1 )
    {
      ready = KiSelectReadyThread(1LL, a1);
      if ( !ready )
      {
        Min = a1->ScbQueue.Min;
        for ( ready = 0LL; Min; Min = v32[48] )
        {
          v32 = &Min[-4].Children[1];
          ready = KiSelectThreadFromSchedulingGroup(a1, &Min[-4].Right, 0LL);
          if ( ready )
            break;
        }
        if ( !ready )
        {
          ready = KiSelectReadyThread(0LL, a1);
          if ( !ready )
            break;
        }
      }
      if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
      {
        if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
        {
          if ( !KiIsThreadRankNonZero(ready, a1) )
            v6 = *(_BYTE *)(ready + 195);
        }
        else
        {
          v6 = *(_BYTE *)(ready + 195);
        }
        *a1->PriorityState = v6;
        a1->CurrentThread = (_KTHREAD *)ready;
        *(_BYTE *)(ready + 388) = 2;
        if ( a2 )
          KiSetProcessorIdle(a1, 0LL, 0LL);
        return ready;
      }
      *(_BYTE *)(ready + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
      KiDeferredReadyThread(a1, ready);
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v36, v33, v34);
        while ( a1->PrcbLock );
      }
      if ( a2 && a1->NextThread == a1->IdleThread )
        a1->NextThread = 0LL;
      result = (__int64)a1->NextThread;
      if ( result )
        goto LABEL_34;
    }
    if ( !a2 )
    {
      IdleState = a1->IdleState;
      ParentNode = a1->ParentNode;
      a1->IdleSchedule = 0;
      if ( (IdleState & 1) == 0 )
        __fastfail(0x21u);
      v11 = IdleState - 1;
      a1->IdleState = v11;
      if ( !v11 )
        _interlockedbittestandset64((volatile signed __int32 *)ParentNode, a1->GroupIndex);
      _interlockedbittestandset64((volatile signed __int32 *)&ParentNode->IdleCpuSet, a1->GroupIndex);
      CoreProcessorSet = a1->CoreProcessorSet;
      if ( (CoreProcessorSet & ParentNode->IdleCpuSet) == CoreProcessorSet )
        _InterlockedOr64((volatile signed __int64 *)&ParentNode->IdleSmtSet, CoreProcessorSet);
      IdleThread = (__int64)a1->IdleThread;
      if ( (*(_BYTE *)(IdleThread + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(IdleThread, (__int64)a1);
      else
        EffectivePriorityThread = *(_BYTE *)(IdleThread + 195);
      *a1->PriorityState = EffectivePriorityThread;
    }
    v15 = (a1->IdleState & 2) != 0;
    _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
    if ( v15 )
    {
      return 0LL;
    }
    else
    {
      v16 = (__int64)a1->ParentNode;
      Group = a1->Group;
      v18 = *(unsigned __int16 *)(v16 + 146);
      LODWORD(v19) = *(_DWORD *)(v16 + 128);
      GroupIndex = a1->GroupIndex;
      v35 = Group;
LABEL_18:
      v21 = *(_QWORD *)(v16 + 152);
      if ( *(unsigned __int16 *)(v16 + 146) == v18 )
        v21 &= ~a1->SharedReadyQueueMask;
      if ( v21 )
      {
        v22 = __ROR8__(v21, GroupIndex);
        v23 = Group << 6;
        while ( 1 )
        {
          _BitScanForward64(&v24, v22);
          v22 ^= 1LL << v24;
          result = KiSearchForNewThreadOnProcessor(
                     a1,
                     0LL,
                     *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v23
                                                                                     + (((_BYTE)v24 + GroupIndex) & 0x3F)]]
                               + 24776));
          if ( result )
            break;
          if ( !v22 )
          {
            Group = v35;
            goto LABEL_25;
          }
        }
      }
      else
      {
LABEL_25:
        v25 = *(_QWORD *)(v16 + 136);
        if ( *(unsigned __int16 *)(v16 + 146) == v18 )
          v25 ^= a1->GroupSetMember;
        v26 = ~*(_QWORD *)(v16 + 16) & v25;
        if ( v26 )
        {
          v27 = __ROR8__(v26, GroupIndex);
          v28 = Group << 6;
          while ( 1 )
          {
            _BitScanForward64(&v29, v27);
            v27 ^= 1LL << v29;
            result = KiSearchForNewThreadOnProcessor(
                       a1,
                       KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v28 + (((_BYTE)v29 + GroupIndex) & 0x3F)]],
                       0LL);
            if ( result )
              break;
            if ( !v27 )
              goto LABEL_31;
          }
        }
        else
        {
LABEL_31:
          v19 = (unsigned int)v19 & (unsigned __int64)~(1LL << *(_WORD *)(v16 + 146));
          if ( (_DWORD)v19 )
          {
            while ( ++v3 != (unsigned __int16)KeNumberNodes )
            {
              v30 = *((unsigned __int16 *)qword_1402FE6B8 + v3 + v18 * (unsigned int)(unsigned __int16)KeNumberNodes);
              v31 = (unsigned int)v19;
              if ( _bittest64(&v31, v30) )
              {
                v16 = KeNodeBlock[v30];
                Group = v35;
                goto LABEL_18;
              }
            }
          }
          return 0LL;
        }
      }
    }
  }
  return result;
}
