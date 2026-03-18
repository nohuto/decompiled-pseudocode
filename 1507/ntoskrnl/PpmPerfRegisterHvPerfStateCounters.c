/*
 * XREFs of PpmPerfRegisterHvPerfStateCounters @ 0x1406BE5EC
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401ED4CC (HvlRegisterPerfFeedbackCounters.c)
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 */

__int64 __fastcall PpmPerfRegisterHvPerfStateCounters(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // r15
  unsigned int v4; // r12d
  __int64 v5; // rsi
  int v6; // r14d
  unsigned __int8 *v7; // rsi
  unsigned __int16 v8; // ax
  unsigned int v9; // edi
  __int64 v10; // rcx

  if ( (HvlEnlightenments & 0x400) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_DWORD *)(v2 + 12);
    v5 = *(_QWORD *)(v2 + 392);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v6 = 0;
    if ( v4 )
    {
      v7 = (unsigned __int8 *)(v5 + 2);
      while ( !v7[1] )
      {
        v8 = *((_WORD *)v7 - 1);
        if ( v8 || *v7 )
        {
          if ( v8 >= (unsigned __int16)KiMaximumGroups || *v7 >= 0x40u )
          {
            v9 = -1;
          }
          else
          {
            v9 = KiProcessorNumberToIndexMappingTable[64 * v8 + *v7];
            if ( !v9 )
              break;
          }
          if ( v9 == -1 )
            break;
        }
        else
        {
          v9 = 0;
        }
        v1 = HvlRegisterPerfFeedbackCounters(v9);
        if ( v1 < 0 )
          goto LABEL_13;
        if ( v9 >= (unsigned int)KeNumberProcessors_0 )
          v10 = 0LL;
        else
          v10 = KiProcessorBlock[v9];
        v7 += 32;
        *(_DWORD *)(v10 + 24024) = 3;
        v3 += 104LL;
        if ( ++v6 >= v4 )
          return (unsigned int)PpmRegisterPerfStates((unsigned int *)v2, 1);
      }
      v1 = -1073741811;
LABEL_13:
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      return (unsigned int)PpmRegisterPerfStates((unsigned int *)v2, 1);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v1;
}
