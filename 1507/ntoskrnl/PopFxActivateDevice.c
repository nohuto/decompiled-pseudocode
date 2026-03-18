/*
 * XREFs of PopFxActivateDevice @ 0x140026F98
 * Callers:
 *     PoFxActivateDevice @ 0x140026F90 (PoFxActivateDevice.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x1401489D8 (PoFxActivateDeviceForSystemTransition.c)
 *     PopFxActivateDevicesForSx @ 0x140149310 (PopFxActivateDevicesForSx.c)
 *     PoFxStartDevicePowerManagement @ 0x140169748 (PoFxStartDevicePowerManagement.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023914C (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x14023BA2C (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14023C580 (PopPepResetDeviceAccountingLevel.c)
 * Callees:
 *     PoFxActivateComponent @ 0x140027650 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400277F0 (PopFxAddRefDevice.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

LONG __fastcall PopFxActivateDevice(__int64 a1, char a2)
{
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // ebx
  signed __int32 v7; // eax
  ULONG_PTR v8; // rbx
  LONG result; // eax
  unsigned int i; // esi
  __int64 j; // rsi
  ULONG_PTR v12; // rdi
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = (volatile signed __int32 *)(v3 + 88);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 88);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 88);
    while ( 1 )
    {
      v7 = *v4;
      if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v7 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v4, v7 | 0x40000000, v7);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  if ( (*(_DWORD *)(v3 + 296) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 80) + 616LL) & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 88, retaddr);
    else
      *v4 = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v8 = 0LL;
    ++*(_DWORD *)(v3 + 120);
    if ( (*(_DWORD *)(v3 + 296) & 4) != 0 )
    {
      v8 = *(_QWORD *)(v3 + 80);
      PopFxAddRefDevice(v8);
      for ( i = 0; i < *(_DWORD *)(v8 + 620); ++i )
        PoFxActivateComponent(v8, i);
      if ( a2 )
        _InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    else
      *v4 = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v8 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v8 + 620); j = (unsigned int)(j + 1) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v8 + 624) + 8 * j);
        if ( (*(_DWORD *)(v12 + 88) & 0x3FFFFFFF) == 0 )
          PopFxBugCheck(0x608uLL, *(_QWORD *)(*(_QWORD *)(v8 + 624) + 8 * j), v12 + 88, 0LL);
        KeWaitForSingleObject((PVOID)(v12 + 104), Executive, 0, 0, 0LL);
        if ( *(int *)(v12 + 88) >= 0 )
          PopFxBugCheck(0x608uLL, v12, v12 + 88, 0LL);
      }
      KeWaitForSingleObject((PVOID)(v8 + 536), Executive, 0, 0, 0LL);
      result = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 212), 0xFFFFFFFF);
      if ( result == 1 )
        return KeSetEvent((PRKEVENT)(v8 + 216), 0, 0);
    }
  }
  return result;
}
