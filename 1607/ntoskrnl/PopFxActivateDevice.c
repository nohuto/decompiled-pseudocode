/*
 * XREFs of PopFxActivateDevice @ 0x140008088
 * Callers:
 *     PoFxActivateDevice @ 0x140008080 (PoFxActivateDevice.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14011450C (PoFxActivateDeviceForSystemTransition.c)
 *     PopFxActivateDevicesForSx @ 0x140124F70 (PopFxActivateDevicesForSx.c)
 *     PoFxStartDevicePowerManagement @ 0x140141B30 (PoFxStartDevicePowerManagement.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x140203BC0 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepInitializeVetoMasks @ 0x1402065A8 (PopPepInitializeVetoMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x140206E00 (PopPepResetDeviceAccountingLevel.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     IoReleaseRemoveLockEx @ 0x14009DD7C (IoReleaseRemoveLockEx.c)
 *     PoFxActivateComponent @ 0x1400C10E0 (PoFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400C16F4 (PopFxAddRefDevice.c)
 *     PopFxBugCheck @ 0x1402022F4 (PopFxBugCheck.c)
 */

void __fastcall PopFxActivateDevice(__int64 a1, char a2)
{
  __int64 v3; // rdi
  volatile LONG *v4; // rsi
  KIRQL v5; // bp
  ULONG_PTR v6; // rbx
  unsigned int i; // edi
  __int64 j; // rsi
  ULONG_PTR v9; // rdi

  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = (volatile LONG *)(v3 + 88);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88));
  if ( (*(_DWORD *)(v3 + 296) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 80) + 616LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88), v5);
  }
  else
  {
    v6 = 0LL;
    ++*(_DWORD *)(v3 + 120);
    if ( (*(_DWORD *)(v3 + 296) & 4) != 0 )
    {
      v6 = *(_QWORD *)(v3 + 80);
      PopFxAddRefDevice(v6);
      for ( i = 0; i < *(_DWORD *)(v6 + 620); ++i )
        PoFxActivateComponent(v6, i);
      if ( a2 )
        _InterlockedOr((volatile signed __int32 *)(v6 + 32), 1u);
    }
    ExReleaseSpinLockExclusive(v4, v5);
    if ( v6 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v6 + 620); j = (unsigned int)(j + 1) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v6 + 624) + 8 * j);
        if ( (*(_DWORD *)(v9 + 88) & 0x3FFFFFFF) == 0 )
          PopFxBugCheck(0x608uLL, *(_QWORD *)(*(_QWORD *)(v6 + 624) + 8 * j), v9 + 88, 0LL);
        KeWaitForSingleObject((PVOID)(v9 + 104), Executive, 0, 0, 0LL);
        if ( *(int *)(v9 + 88) >= 0 )
          PopFxBugCheck(0x608uLL, v9, v9 + 88, 0LL);
      }
      KeWaitForSingleObject((PVOID)(v6 + 536), Executive, 0, 0, 0LL);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 208), 0LL, 0x20u);
    }
  }
}
