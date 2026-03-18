/*
 * XREFs of KeClockInterruptNotify @ 0x1400A6130
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateTimeAssist @ 0x1400A3B90 (KiUpdateTimeAssist.c)
 *     PoExecutePerfCheck @ 0x1400A3DE0 (PoExecutePerfCheck.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 *     KiUpdateRunTime @ 0x1400AC2C0 (KiUpdateRunTime.c)
 *     KiSetPendingTick @ 0x1400E6C5C (KiSetPendingTick.c)
 *     KiEventClockStateChange @ 0x1400E6C9C (KiEventClockStateChange.c)
 *     KiShouldScanSharedReadyQueue @ 0x14011B3C4 (KiShouldScanSharedReadyQueue.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiGenerateHeteroSets @ 0x140206EF4 (KiGenerateHeteroSets.c)
 *     KiGetHeteroCpuPolicyThread @ 0x140206F38 (KiGetHeteroCpuPolicyThread.c)
 */

unsigned __int64 __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  char v2; // cl
  char v3; // bp
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  unsigned __int16 v9; // r15
  __int64 *v10; // rdx
  __int64 v11; // r8
  unsigned __int16 v12; // cx
  __int64 v13; // rdi
  unsigned __int16 v14; // cx
  unsigned __int16 *v15; // rdi
  struct _KPRCB *v16; // rbp
  unsigned __int16 v17; // si
  __int64 v18; // rcx
  __int64 v19; // r8
  __int16 *v20; // rdi
  __int64 v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // rdx
  unsigned __int16 v24; // dx
  unsigned __int16 i; // dx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  __int16 *v29; // rdi
  unsigned __int16 v30; // dx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // r14
  unsigned __int16 v35; // di
  unsigned __int16 v36; // r10
  unsigned int v37; // edx
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int16 *v41; // rdi
  unsigned __int16 v42; // dx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  int *v46; // r8
  unsigned __int16 v47; // di
  unsigned __int16 v48; // dx
  unsigned int v49; // edi
  __int64 v50; // rcx
  unsigned __int16 v51; // cx
  unsigned __int16 v52; // dx
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rdi
  __int64 v57; // rcx
  unsigned __int64 result; // rax
  struct _KPRCB *v59; // rdi
  __int16 v60; // ax
  int v61; // ebx
  __int64 j; // rcx
  _KTHREAD *CurrentThread; // r11
  int HeteroCpuPolicyThread; // eax
  __int64 v65; // r11
  unsigned __int64 *v66; // r10
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char v68; // al
  unsigned __int8 v69; // [rsp+30h] [rbp-1E8h]
  __int64 v71; // [rsp+38h] [rbp-1E0h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-1D8h]
  __int64 v73; // [rsp+48h] [rbp-1D0h] BYREF
  unsigned __int64 v74; // [rsp+50h] [rbp-1C8h] BYREF
  char v75[8]; // [rsp+58h] [rbp-1C0h] BYREF
  _QWORD *v76; // [rsp+60h] [rbp-1B8h]
  unsigned __int64 v77; // [rsp+68h] [rbp-1B0h] BYREF
  char v78[16]; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned __int16 v79; // [rsp+80h] [rbp-198h] BYREF
  unsigned __int16 v80; // [rsp+82h] [rbp-196h]
  int v81; // [rsp+84h] [rbp-194h]
  _QWORD v82[21]; // [rsp+88h] [rbp-190h] BYREF
  __int64 v83; // [rsp+130h] [rbp-E8h] BYREF
  _QWORD v84[21]; // [rsp+138h] [rbp-E0h] BYREF
  int v85; // [rsp+210h] [rbp-8h]

  v2 = *(_BYTE *)(a1 + 368) & 1;
  v71 = 0LL;
  v69 = v2;
  if ( KeGetCurrentPrcb()->ClockOwner )
  {
    v76 = (_QWORD *)(0x140000000LL + 24LL * (unsigned int)KiClockTickTraceIndex + 3380032);
    KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
    v3 = 0;
    v76[1] = MEMORY[0xFFFFF78000000008];
    v4 = MEMORY[0xFFFFF78000000320];
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTimeAssist(0LL, (__int64)&v77, (__int64)&v74);
    if ( (v85 & 0x200) != 0 )
      _enable();
    v5 = v74;
    if ( v74 != v4 && !--KiBalanceSetManagerCount )
    {
      KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
      KiInsertQueueDpc((__int64)&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL, 0LL, 0);
    }
    PoExecutePerfCheck();
    v6 = v77 >> 18;
    if ( KiGroupSchedulingEnabled && v5 > KiGenerationEndTick )
    {
      v3 = 1;
      KiGenerationEndTick += (unsigned int)KiGenerationTicks;
    }
    v7 = KeNumberProcessors_0;
    LODWORD(v71) = KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
      goto LABEL_102;
    v8 = 1;
    v9 = KeActiveProcessors[0];
    if ( !PoDisableSkipTick )
    {
      v83 = 1310721LL;
      memset(v84, 0, 0xA0uLL);
      if ( KeNumberNodes )
      {
        v10 = KeNodeBlock;
        v11 = (unsigned __int16)KeNumberNodes;
        do
        {
          v12 = *(_WORD *)(*v10 + 144);
          v13 = *(_QWORD *)(*v10 + 64);
          if ( (unsigned __int16)v83 <= v12 )
            LOWORD(v83) = v12 + 1;
          ++v10;
          v84[v12] |= v13;
          --v11;
        }
        while ( v11 );
      }
      v14 = 0;
      if ( (_WORD)v83 )
      {
        while ( !v84[v14] )
        {
          if ( ++v14 >= (unsigned __int16)v83 )
            goto LABEL_20;
        }
        v21 = 0LL;
        v22 = (unsigned __int16)v83;
        v23 = (unsigned __int16)v83;
        do
        {
          v82[v21] = ~v84[v21];
          ++v21;
          --v23;
        }
        while ( v23 );
        v24 = WORD1(v83);
        v17 = WORD1(v83);
        if ( v22 < WORD1(v83) )
          memset(&v82[v22], 0xFFu, 8LL * (WORD1(v83) - v22));
        v81 = 0;
        v80 = v24;
        if ( v24 >= v9 )
          v17 = v9;
        v79 = v17;
        for ( i = 0; i < v79; v17 = v79 )
        {
          v26 = i++;
          v82[v26] &= *(_QWORD *)&KeActiveProcessors[2 * v26 + 2];
        }
        v81 = 0;
        v80 = 20;
        if ( i < 0x14u )
        {
          do
          {
            v27 = i++;
            v82[v27] = 0LL;
          }
          while ( i < v80 );
          v17 = v79;
        }
        if ( v3 )
        {
          LOWORD(v28) = KiGroupSchedulingOverQuotaMask[0];
          if ( v17 >= (unsigned int)KiGroupSchedulingOverQuotaMask[0] )
          {
            v29 = (__int16 *)&v79;
          }
          else
          {
            v29 = KiGroupSchedulingOverQuotaMask;
            LOWORD(v28) = v17;
          }
          v80 = 20;
          v30 = 0;
          v79 = *v29;
          v17 = v79;
          if ( (_WORD)v28 )
          {
            v30 = v28;
            v31 = 0LL;
            v28 = (unsigned __int16)v28;
            do
            {
              v82[v31 / 4] |= *(_QWORD *)&KiGroupSchedulingOverQuotaMask[v31 + 4];
              v31 += 4LL;
              --v28;
            }
            while ( v28 );
            v17 = v79;
          }
          if ( v30 < (unsigned __int16)*v29 )
          {
            do
            {
              v32 = v30++;
              v82[v32] = *(_QWORD *)&v29[4 * v32 + 4];
            }
            while ( v30 < (unsigned __int16)*v29 );
            v17 = v79;
          }
          v81 = 0;
          if ( v30 < v80 )
          {
            do
            {
              v33 = v30++;
              v82[v33] = 0LL;
            }
            while ( v30 < v80 );
            v17 = v79;
          }
        }
        if ( !KiSerializeTimerExpiration )
        {
          v34 = KiLastForwardedHand;
          v83 = 1310721LL;
          v35 = 0;
          memset(v84, 0, 0xA0uLL);
          v36 = KiActiveGroups;
          do
          {
            LOBYTE(v37) = v34 - 1;
            v38 = qword_1403D2238[2 * v35];
            do
            {
              v37 = (unsigned __int8)(v37 + 1);
              v39 = *(_QWORD *)(((unsigned __int64)v37 << 6) + v38);
              if ( (unsigned __int16)v83 <= v35 )
                LOWORD(v83) = v35 + 1;
              v84[v35] |= v39;
            }
            while ( v37 != (unsigned __int8)v6 );
            ++v35;
          }
          while ( v35 < v36 );
          LOWORD(v40) = v83;
          if ( v17 >= (unsigned __int16)v83 )
          {
            v41 = &v79;
          }
          else
          {
            v41 = (unsigned __int16 *)&v83;
            LOWORD(v40) = v17;
          }
          v42 = 0;
          v80 = 20;
          v79 = *v41;
          v17 = v79;
          if ( (_WORD)v40 )
          {
            v42 = v40;
            v43 = 0LL;
            v40 = (unsigned __int16)v40;
            do
            {
              v82[v43] |= v84[v43];
              ++v43;
              --v40;
            }
            while ( v40 );
            v17 = v79;
          }
          if ( v42 < *v41 )
          {
            do
            {
              v44 = v42++;
              v82[v44] = *(_QWORD *)&v41[4 * v44 + 4];
            }
            while ( v42 < *v41 );
            v17 = v79;
          }
          v81 = 0;
          if ( v42 < v80 )
          {
            do
            {
              v45 = v42++;
              v82[v45] = 0LL;
            }
            while ( v42 < v80 );
            v17 = v79;
          }
          v7 = v71;
        }
        if ( v17 >= v9 )
        {
          v46 = (int *)&v79;
          v47 = v9;
        }
        else
        {
          v46 = KeActiveProcessors;
          v47 = v17;
        }
        v48 = 0;
        if ( v47 )
        {
          while ( v82[v48] == *(_QWORD *)&KeActiveProcessors[2 * v48 + 2] )
          {
            if ( ++v48 >= v47 )
              goto LABEL_84;
          }
          goto LABEL_88;
        }
LABEL_84:
        if ( v48 < *(_WORD *)v46 )
        {
          while ( !*(_QWORD *)&v46[2 * v48 + 2] )
          {
            if ( ++v48 >= *(_WORD *)v46 )
              goto LABEL_20;
          }
LABEL_88:
          v16 = CurrentPrcb;
          v49 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
          v50 = v49 >> 6;
          if ( v17 > (unsigned int)v50 )
          {
            v82[v50] &= ~(1LL << (v49 & 0x3F));
            v17 = v79;
          }
          v15 = &v79;
          v8 = 0;
          v51 = 0;
          if ( !v17 )
            goto LABEL_24;
          while ( !v82[v51] )
          {
            if ( ++v51 >= v17 )
              goto LABEL_24;
          }
LABEL_23:
          HalRequestClockInterrupt(v8, v15);
          v17 = v79;
          KiLastForwardedHand = v6;
LABEL_24:
          if ( (_BYTE)KdDebuggerEnabled )
          {
            v18 = (unsigned int)KiPollSlotNext;
            KiPollSlot = KiPollSlotNext++;
            if ( KiPollSlotNext >= v7 )
              KiPollSlotNext = 0;
            if ( (_DWORD)v18 != v16->Number
              && ((v82[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v18] >> 6] >> (KiProcessorIndexToNumberMappingTable[v18] & 0x3F)) & 1) == 0 )
            {
              KiPollSlot = v16->Number;
            }
          }
          LOWORD(v19) = KiClockCheckPending[0];
          if ( (unsigned int)KiClockCheckPending[0] >= v17 )
          {
            v20 = KiClockCheckPending;
            LOWORD(v19) = v17;
          }
          else
          {
            v20 = (__int16 *)&v79;
          }
          v52 = 0;
          word_14031EA82 = 20;
          KiClockCheckPending[0] = *v20;
          if ( (_WORD)v19 )
          {
            v52 = v19;
            v53 = 0LL;
            v19 = (unsigned __int16)v19;
            do
            {
              *(_QWORD *)&KiClockCheckPending[v53 / 2 + 4] |= v82[v53 / 8];
              v53 += 8LL;
              --v19;
            }
            while ( v19 );
          }
          for ( ; v52 < (unsigned __int16)*v20; *(_QWORD *)&KiClockCheckPending[4 * v54 + 4] = *(_QWORD *)&v20[4 * v54 + 4] )
            v54 = v52++;
          for ( dword_14031EA84 = 0;
                v52 < (unsigned __int16)word_14031EA82;
                *(_QWORD *)&KiClockCheckPending[4 * v55 + 4] = 0LL )
          {
            v55 = v52++;
          }
LABEL_102:
          KiUpdateRunTime(v69, a2);
          v56 = v76;
          *v76 = MEMORY[0xFFFFF78000000350];
          if ( KiClockState == 2 )
          {
            v71 = (unsigned int)KiLastRequestedTimeIncrement;
            off_140321A50();
            LOBYTE(v57) = 1;
            KiSetPendingTick(v57);
            _InterlockedExchange(&KiClockState, 0);
            KiEventClockStateChange(0LL, 2LL, v75, &v71);
          }
          result = MEMORY[0xFFFFF78000000008] + (unsigned int)KeTimeIncrement;
          v56[2] = MEMORY[0xFFFFF78000000008];
          KiClockTimerNextTickTime = result;
          return result;
        }
      }
    }
LABEL_20:
    v15 = 0LL;
    v80 = HIWORD(KeActiveProcessors[0]);
    v79 = v9;
    v81 = 0;
    if ( v9 )
      memmove(v82, qword_1403D15E8, 8LL * v9);
    v16 = CurrentPrcb;
    goto LABEL_23;
  }
  v59 = KeGetCurrentPrcb();
  v60 = v85;
  ++v59->ClockInterrupts;
  ++v59->InterruptLastCount;
  _disable();
  v61 = MEMORY[0xFFFFF78000000320];
  if ( (v60 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((_DWORD)v59, v59->LastTick, MEMORY[0xFFFFF78000000320], a2, v2);
  CurrentThread = v59->CurrentThread;
  v59->ClockKeepAlive = 1;
  if ( CurrentThread != v59->IdleThread
    && ((result = CurrentThread->CycleTime, result >= CurrentThread->QuantumTarget)
     || CurrentThread->SystemHeteroCpuPolicy
     && (HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(CurrentThread, v59),
         KiGenerateHeteroSets(
           v59->ParentNode,
           *(_QWORD *)(v65 + 576),
           HeteroCpuPolicyThread,
           (unsigned int)&v73,
           (__int64)v78),
         (v59->GroupSetMember & v73) == 0)
     && (result = *v66, (*v66 & v73) != 0))
    || (result = MEMORY[0xFFFFF78000000320], MEMORY[0xFFFFF78000000320] > v59->GenerationTarget) )
  {
LABEL_127:
    v59->QuantumEnd = 1;
    if ( v59->NestingLevel )
    {
      v59->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(j) = 2;
      return HalRequestSoftwareInterrupt(j);
    }
  }
  else
  {
    SchedulingGroup = CurrentThread->SchedulingGroup;
    if ( SchedulingGroup )
    {
      result = v59->ScbOffset;
      for ( j = (__int64)SchedulingGroup + result; j; j = *(_QWORD *)(j + 392) )
      {
        v68 = *(_BYTE *)(j + 112);
        if ( (v68 & 4) != 0 )
        {
          if ( (v68 & 0x10) == 0 )
          {
            result = *(_QWORD *)(j + 16);
            if ( *(_QWORD *)j > result )
              goto LABEL_127;
          }
          result = *(_QWORD *)(j + 24);
        }
        else
        {
          result = *(_QWORD *)(j + 8);
        }
        if ( *(_QWORD *)j > result )
          goto LABEL_127;
      }
    }
    if ( (signed int)(v59->ReadyScanTick - v61) < 0 )
    {
      result = KiShouldScanSharedReadyQueue(v59);
      if ( !(_DWORD)result || (result = v59->SharedReadyQueue->ReadySummary, (result & 0x7FFE) == 0) )
      {
        if ( (v59->ReadySummary & 0x7FFE) == 0 )
        {
          result = (unsigned int)(v61 + 75);
          v59->ReadyScanTick = result;
        }
      }
    }
  }
  return result;
}
