/*
 * XREFs of PoFxIdleDevice @ 0x14000842C
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x140124E84 (PopFxIdleDevicesFromSx.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x140203BC0 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x1402065A8 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x140206E00 (PopPepResetDeviceAccountingLevel.c)
 *     PiProcessQueryDeviceState @ 0x1403F13A8 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x1403F1CBC (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1403F2B90 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404C55B8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x1404C58C8 (PnpDeleteLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x14062FF20 (PnpCancelStopDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406498B8 (PiProcessResourceRequirementsChanged.c)
 *     PipProcessRestartPhase2 @ 0x14064DF9C (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     PopFxIdleComponent @ 0x1400C1B10 (PopFxIdleComponent.c)
 */

void __fastcall PoFxIdleDevice(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  volatile LONG *v3; // rsi
  KIRQL v4; // bp
  ULONG_PTR v5; // rdi

  v1 = 0;
  if ( a1 )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v2 = 0LL;
  if ( v2 )
  {
    v3 = (volatile LONG *)(v2 + 88);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
    if ( (*(_DWORD *)(v2 + 296) & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v2 + 80) + 616LL) & 1) == 0 )
    {
      --*(_DWORD *)(v2 + 120);
      if ( (*(_DWORD *)(v2 + 296) & 4) != 0 )
      {
        v5 = *(_QWORD *)(v2 + 80);
        if ( *(_DWORD *)(v5 + 620) )
        {
          do
            PopFxIdleComponent(v5, v1++);
          while ( v1 < *(_DWORD *)(v5 + 620) );
        }
      }
    }
    ExReleaseSpinLockExclusive(v3, v4);
  }
}
