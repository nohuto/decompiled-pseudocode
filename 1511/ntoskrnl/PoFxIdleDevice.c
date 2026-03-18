/*
 * XREFs of PoFxIdleDevice @ 0x1400DC378
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x14011A82C (PopFxIdleDevicesFromSx.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1401EB1EC (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x1401EDA28 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1401EE27C (PopPepResetDeviceAccountingLevel.c)
 *     PipEnumerateDevice @ 0x1403D0244 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404573BC (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404A01A8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x1404A0664 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessQueryDeviceState @ 0x1404ECBB8 (PiProcessQueryDeviceState.c)
 *     PnpCancelStopDeviceNode @ 0x140605D40 (PnpCancelStopDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140614E5C (PiProcessResourceRequirementsChanged.c)
 *     PipProcessRestartPhase2 @ 0x140618DE8 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     PopFxIdleComponent @ 0x1400DC4DC (PopFxIdleComponent.c)
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
