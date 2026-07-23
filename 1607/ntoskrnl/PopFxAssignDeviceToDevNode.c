/*
 * XREFs of PopFxAssignDeviceToDevNode @ 0x140142408
 * Callers:
 *     PopFxRegisterDevice @ 0x14056711C (PopFxRegisterDevice.c)
 *     PopFxUnregisterDevice @ 0x14066D670 (PopFxUnregisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PopFxAssignDeviceToDevNode(__int64 a1, __int64 a2)
{
  KIRQL v4; // cl
  int v5; // eax

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  if ( a2 )
  {
    *(_DWORD *)(a1 + 296) &= ~8u;
    *(_WORD *)(a1 + 96) = 0;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
  }
  else
  {
    *(_DWORD *)(a1 + 296) &= ~4u;
  }
  v5 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 120) = v5;
  *(_QWORD *)(a1 + 80) = a2;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v4);
}
