/*
 * XREFs of EtwTraceContextSwap @ 0x140017470
 * Callers:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     SwapContext @ 0x14018A640 (SwapContext.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     EtwpCCSwapTrace @ 0x1400177F0 (EtwpCCSwapTrace.c)
 *     EtwpReserveWithPebsIndex @ 0x14025E1D0 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14025E260 (EtwpReserveWithPmcCounters.c)
 *     EtwpStackTraceDispatcher @ 0x1402601B0 (EtwpStackTraceDispatcher.c)
 */

unsigned __int64 __fastcall EtwTraceContextSwap(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // ebp
  int v4; // r15d
  bool i; // zf
  __int64 v6; // r8
  char *v9; // rcx
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  char ActualState; // al
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 *v24; // roff
  __int64 v25; // rdx
  unsigned __int64 v26; // rtt
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 *v28; // [rsp+38h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v30; // [rsp+98h] [rbp+10h] BYREF

  result = (unsigned __int64)&retaddr;
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
      v10 = WmipLoggerContext[result];
    }
    if ( (v10 & 1) != 0 )
      continue;
    if ( v9 && (*((_DWORD *)v9 + 1) & 0x100) != 0 )
    {
      v11 = 1 << *(_DWORD *)(v10 + 216);
      result = (unsigned int)~v4;
      if ( ((unsigned int)result & v11) != 0 )
      {
        v12 = (*(__int64 (**)(void))(v10 + 40))();
        v13 = *(unsigned int *)(v10 + 216);
        v30 = v12;
        result = EtwpCCSwapTrace(a1, a2, v13, &v30);
        v4 |= v11;
      }
      goto LABEL_12;
    }
    v15 = *(_DWORD *)(v10 + 832);
    if ( (v15 & 0xC00) == 0 )
      goto LABEL_24;
    if ( (v15 & 0x400) != 0 )
    {
      result = EtwpReserveWithPebsIndex(v10, 1316, 24, (unsigned int)&v27, (__int64)&v30, 3168770);
      v16 = result;
      goto LABEL_26;
    }
    if ( (v15 & 0x800) != 0 && (v17 = 0LL, *(_DWORD *)(*(_QWORD *)(v10 + 864) + 16LL)) )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v10 + 864);
        if ( *(_WORD *)(v18 + 2 * v17 + 20) == 1316 )
          break;
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *(_DWORD *)(v18 + 16) )
          goto LABEL_24;
      }
      result = EtwpReserveWithPmcCounters(v10, 1316, 24, (unsigned int)&v27, (__int64)&v30, 3168770);
      v16 = result;
    }
    else
    {
LABEL_24:
      result = EtwpReserveTraceBuffer((unsigned int *)v10, 0x28u, (__int64)&v27, &v30, 3168770);
      if ( !result )
        continue;
      v16 = result + 16;
      *(_QWORD *)(result + 8) = v30;
      *(_DWORD *)result = -1072627710;
      *(_DWORD *)(result + 4) = 86245416;
    }
LABEL_26:
    if ( v16 )
    {
      *(_DWORD *)v16 = *(_DWORD *)(a2 + 1584);
      *(_DWORD *)(v16 + 4) = *(_DWORD *)(a1 + 1584);
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
        {
          ActualState = IdleStates->ActualState;
          goto LABEL_36;
        }
      }
      else
      {
        v22 = *(_QWORD *)(a1 + 104);
        if ( v22 )
        {
          v23 = v22 + CurrentPrcb->ScbOffset;
          if ( *(_DWORD *)(v23 + 116) > 0xFFu )
            ActualState = -1;
          else
            ActualState = *(_BYTE *)(v23 + 116);
        }
        else
        {
          ActualState = 0;
        }
LABEL_36:
        *(_BYTE *)(v16 + 10) = ActualState;
      }
      v24 = v28;
      _m_prefetchw(v28);
      result = *v24;
      v25 = v27;
      if ( (v27 ^ *v24) >= 0xF )
      {
LABEL_40:
        _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
      }
      else
      {
        while ( 1 )
        {
          v26 = result;
          result = _InterlockedCompareExchange64((volatile signed __int64 *)v28, result + 1, result);
          if ( v26 == result )
            break;
          v25 = v27;
          if ( (v27 ^ result) >= 0xF )
            goto LABEL_40;
        }
      }
LABEL_12:
      v14 = *(_DWORD *)(v10 + 832);
      if ( (v14 & 0x80u) != 0 )
      {
        result = *(_QWORD *)(v10 + 848);
        if ( _bittest((const signed __int32 *)(result + 164), 4u) )
          result = EtwpStackTraceDispatcher(*(_DWORD *)v10 | v14 & 0xFFFF0000, &v30, a2, 3168770LL);
      }
    }
  }
  return result;
}
