/*
 * XREFs of EtwpSwitchBuffer @ 0x18004B028
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x18004A5F4 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     EtwpAllocateFreeBuffers @ 0x1800454F8 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x18004B150 (EtwpDequeueFreeBuffer.c)
 *     RtlSleepConditionVariableCS @ 0x180067A90 (RtlSleepConditionVariableCS.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 */

char __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // bp
  bool v5; // r12
  __int64 v6; // rbx
  char v7; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx

  v4 = 1;
  v5 = (*(_DWORD *)(a1 + 332) & 0x400) != 0;
  v6 = a3;
  v7 = 0;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  v9 = *(_QWORD *)(a1 + 8 * v6 + 536);
  v10 = (unsigned int)v6;
  while ( !v9 || a2 == v9 )
  {
    v11 = EtwpDequeueFreeBuffer(a1);
    if ( v11 )
      goto LABEL_4;
    if ( (*(_DWORD *)(a1 + 332) & 0x400) == 0 )
    {
      do
      {
        if ( (unsigned int)EtwpAllocateFreeBuffers(a1, 1u) != 1 )
          break;
        v11 = EtwpDequeueFreeBuffer(a1);
      }
      while ( !v11 );
      if ( v11 )
      {
LABEL_4:
        *(_WORD *)(v11 + 40) = *(_WORD *)(*(_QWORD *)(a1 + 528) + 4 * v10 + 2);
        *(_WORD *)(v11 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 528) + 4 * v10);
        *(_QWORD *)(a1 + 8 * v10 + 536) = v11;
        if ( a2 && a2 == v9 )
        {
          if ( v5 )
          {
            *(_DWORD *)(a2 + 44) = 0;
            *(_QWORD *)(a2 + 32) = 0LL;
            *(_QWORD *)(a2 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 424));
            **(_QWORD **)(a1 + 264) = a2 + 32;
            *(_QWORD *)(a1 + 264) = a2 + 32;
            _InterlockedAdd((volatile signed __int32 *)(a1 + 232), 1u);
          }
          else
          {
            *(_DWORD *)(a2 + 44) = 3;
            v7 = 1;
            **(_QWORD **)(a1 + 288) = a2 + 32;
            *(_QWORD *)(a1 + 288) = a2 + 32;
          }
        }
        break;
      }
    }
    if ( (*(_DWORD *)(a1 + 332) & 0x20000000) == 0 || !*(_DWORD *)(a1 + 336) )
    {
      v4 = 0;
      break;
    }
    RtlSleepConditionVariableCS((PRTL_CONDITION_VARIABLE)(a1 + 80), (PRTL_CRITICAL_SECTION)(a1 + 88), 0LL);
    v9 = *(_QWORD *)(a1 + 8 * v10 + 536);
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
  if ( v7
    && (!*(_DWORD *)(a1 + 376)
     || (unsigned int)(*(_DWORD *)(a1 + 228) - *(_DWORD *)(a1 + 204) - *(_DWORD *)(a1 + 232)) >= *(_DWORD *)(a1 + 376)) )
  {
    ZwSetEvent(*(HANDLE *)(a1 + 128), 0LL);
  }
  return v4;
}
