/*
 * XREFs of PoFxIdleDevice @ 0x140026DEC
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x140149210 (PopFxIdleDevicesFromSx.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023914C (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x14023BA2C (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14023C580 (PopPepResetDeviceAccountingLevel.c)
 *     PiProcessQueryDeviceState @ 0x140461484 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x1404616A8 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404E3D54 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140536AEC (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x140680AE4 (PnpCancelStopDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140693CC4 (PiProcessResourceRequirementsChanged.c)
 *     PipProcessRestartPhase2 @ 0x1406973D8 (PipProcessRestartPhase2.c)
 * Callees:
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void **__fastcall PoFxIdleDevice(__int64 a1)
{
  void **result; // rax
  char *v2; // rdi
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // esi
  signed __int32 v6; // eax
  ULONG_PTR v7; // rsi
  unsigned int i; // edi
  void *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a1 )
  {
    result = *(void ***)(a1 + 312);
    v2 = (char *)result[5];
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
  {
    v3 = (volatile signed __int32 *)(v2 + 88);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2 + 88);
    }
    else
    {
      v5 = 0;
      if ( _interlockedbittestandset(v3, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire(v2 + 88);
      while ( 1 )
      {
        v6 = *v3;
        if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v6 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v3, v6 | 0x40000000, v6);
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
    }
    if ( (*((_DWORD *)v2 + 74) & 4) == 0 || (*(_DWORD *)(*((_QWORD *)v2 + 10) + 616LL) & 1) == 0 )
    {
      --*((_DWORD *)v2 + 30);
      if ( (*((_DWORD *)v2 + 74) & 4) != 0 )
      {
        v7 = *((_QWORD *)v2 + 10);
        for ( i = 0; i < *(_DWORD *)(v7 + 620); ++i )
          PopFxIdleComponent(v7, i);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
    else
      *v3 = 0;
    result = (void **)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
