/*
 * XREFs of PopPepReleaseActivityLink @ 0x140027E84
 * Callers:
 *     PopPepProcessEvent @ 0x140027CF4 (PopPepProcessEvent.c)
 *     PopPepTryPowerDownDevice @ 0x140029034 (PopPepTryPowerDownDevice.c)
 *     PopPepUpdateConstraints @ 0x140136D3C (PopPepUpdateConstraints.c)
 *     PopPepSurprisePowerOn @ 0x14014BE7C (PopPepSurprisePowerOn.c)
 *     PopPepComponentSetResidency @ 0x14017143C (PopPepComponentSetResidency.c)
 *     PopPepComponentSetLatency @ 0x1401715E4 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleState @ 0x14023B284 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14023B35C (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PopPepReleaseActivityLink(__int64 a1, _DWORD *a2, char a3, unsigned __int8 a4)
{
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  __int64 result; // rax
  volatile signed __int32 *v9; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 == 1 )
  {
    v6 = 0;
    v7 = (_QWORD *)(a1 + 72);
    while ( !*v7 || !*(_DWORD *)*v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= 6 )
      {
        if ( *(_BYTE *)(a1 + 136) )
          *(_BYTE *)(a1 + 125) = 0;
        break;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
    else
      *(_DWORD *)(a1 + 64) = 0;
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2, retaddr);
    else
      *a2 = 0;
    v9 = (volatile signed __int32 *)(a1 + 64);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
    }
    else
    {
      _InterlockedAnd(v9, 0xBFFFFFFF);
      _InterlockedDecrement(v9);
    }
  }
  result = a4;
  __writecr8(a4);
  return result;
}
