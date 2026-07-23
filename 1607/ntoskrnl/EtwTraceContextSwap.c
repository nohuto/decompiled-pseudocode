/*
 * XREFs of EtwTraceContextSwap @ 0x1400D4300
 * Callers:
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     SwapContext @ 0x140166570 (SwapContext.c)
 * Callees:
 *     EtwpReleaseTraceBuffer @ 0x140074B60 (EtwpReleaseTraceBuffer.c)
 *     EtwpCCSwapTrace @ 0x1400D4430 (EtwpCCSwapTrace.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     EtwpReserveWithPebsIndex @ 0x140226BB4 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x140226C44 (EtwpReserveWithPmcCounters.c)
 *     EtwpStackTraceDispatcher @ 0x140229210 (EtwpStackTraceDispatcher.c)
 */

signed __int64 __fastcall EtwTraceContextSwap(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  unsigned int v3; // ebx
  int v4; // ebp
  bool i; // zf
  __int64 v6; // r8
  char *v9; // rdx
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  int v15; // eax
  signed __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  signed __int64 v23[4]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  result = (signed __int64)&retaddr;
  v3 = EtwpActiveSystemLoggers;
  v4 = 0;
  for ( i = !_BitScanForward((unsigned int *)&v6, EtwpActiveSystemLoggers);
        !i;
        i = !_BitScanForward((unsigned int *)&v6, v3) )
  {
    v3 &= v3 - 1;
    result = 32LL * (unsigned int)v6;
    v9 = (char *)&EtwpGroupMasks + result;
    if ( !(_UNKNOWN *)((char *)&EtwpGroupMasks + result) )
      continue;
    result = *((unsigned int *)v9 + 1);
    if ( (result & 4) == 0 )
      continue;
    result = (unsigned __int16)EtwpSystemLogger[2 * v6];
    if ( (unsigned int)result >= 0x40 )
    {
      v10 = 1LL;
    }
    else
    {
      _mm_lfence();
      result = EtwpHostSiloState;
      v10 = *(_QWORD *)(EtwpHostSiloState + 8LL * (unsigned __int16)EtwpSystemLogger[2 * v6] + 912);
    }
    if ( (v10 & 1) != 0 )
      continue;
    if ( v9 && (*((_DWORD *)v9 + 1) & 0x100) != 0 )
    {
      v11 = 1 << *(_DWORD *)(v10 + 200);
      result = (unsigned int)~v4;
      if ( ((unsigned int)result & v11) != 0 )
      {
        v12 = (*(__int64 (**)(void))(v10 + 40))();
        v13 = *(unsigned int *)(v10 + 200);
        v25 = v12;
        result = EtwpCCSwapTrace(a1, a2, v13, &v25);
        v4 |= v11;
      }
LABEL_11:
      v14 = *(_DWORD *)(v10 + 816);
      if ( (v14 & 0x80u) != 0 )
      {
        result = *(_QWORD *)(v10 + 832);
        if ( _bittest((const signed __int32 *)(result + 164), 4u) )
          result = EtwpStackTraceDispatcher(*(_DWORD *)v10 | v14 & 0xFFFF0000, &v25, a2, 3168770LL);
      }
      continue;
    }
    v15 = *(_DWORD *)(v10 + 816);
    if ( (v15 & 0xC00) == 0 )
      goto LABEL_22;
    if ( (v15 & 0x400) != 0 )
    {
      result = EtwpReserveWithPebsIndex(v10, 1316, 24, (unsigned int)v23, (__int64)&v25, 3168770);
      v16 = result;
      goto LABEL_24;
    }
    if ( (v15 & 0x800) != 0 && (v17 = 0LL, *(_DWORD *)(*(_QWORD *)(v10 + 848) + 16LL)) )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v10 + 848);
        if ( *(_WORD *)(v18 + 2 * v17 + 20) == 1316 )
          break;
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *(_DWORD *)(v18 + 16) )
          goto LABEL_22;
      }
      result = EtwpReserveWithPmcCounters(v10, 1316, 24, (unsigned int)v23, (__int64)&v25, 3168770);
      v16 = result;
    }
    else
    {
LABEL_22:
      result = EtwpReserveTraceBuffer(v10, 40, (unsigned int)v23, (unsigned int)&v25, 3168770);
      if ( !result )
        continue;
      v16 = result + 16;
      *(_QWORD *)(result + 8) = v25;
      *(_DWORD *)result = -1072627710;
      *(_DWORD *)(result + 4) = 86245416;
    }
LABEL_24:
    if ( v16 )
    {
      *(_DWORD *)v16 = *(_DWORD *)(a2 + 1592);
      *(_DWORD *)(v16 + 4) = *(_DWORD *)(a1 + 1592);
      *(_BYTE *)(v16 + 8) = *(_BYTE *)(a2 + 195);
      *(_BYTE *)(v16 + 9) = *(_BYTE *)(a1 + 195);
      *(_BYTE *)(v16 + 11) = *(_BYTE *)(a2 + 564);
      *(_BYTE *)(v16 + 12) = *(_BYTE *)(a1 + 643);
      *(_BYTE *)(v16 + 13) = *(_BYTE *)(a1 + 391);
      *(_BYTE *)(v16 + 14) = *(_BYTE *)(a1 + 388);
      *(_BYTE *)(v16 + 15) = *(_BYTE *)(a1 + 588);
      *(_DWORD *)(v16 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      *(_DWORD *)(v16 + 20) = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 72)) >> 10;
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (_KTHREAD *)a1 == CurrentPrcb->IdleThread )
      {
        *(_BYTE *)(v16 + 10) = 0;
        IdleStates = CurrentPrcb->PowerState.IdleStates;
        if ( IdleStates )
          *(_BYTE *)(v16 + 10) = IdleStates->ActualState;
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 104);
        if ( v21 )
        {
          v22 = v21 + CurrentPrcb->ScbOffset;
          while ( *(_DWORD *)(v22 + 116) <= 0xFFu )
          {
            LOBYTE(v21) = *(_BYTE *)(v22 + 116);
            if ( !(_BYTE)v21 )
            {
              v22 = *(_QWORD *)(v22 + 408);
              if ( v22 )
                continue;
            }
            goto LABEL_36;
          }
          LOBYTE(v21) = -1;
        }
LABEL_36:
        *(_BYTE *)(v16 + 10) = v21;
      }
      result = EtwpReleaseTraceBuffer(v23);
      goto LABEL_11;
    }
  }
  return result;
}
