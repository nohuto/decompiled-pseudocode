/*
 * XREFs of PopPepGetDeviceVetoMasks @ 0x1402060D0
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x14052B8C0 (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetDeviceVetoMasks(__int64 a1, __int64 a2)
{
  char v4; // si
  KIRQL v5; // al
  bool v6; // bl

  v4 = 0;
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v6 = *(_DWORD *)(a1 + 160) == 2;
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v5);
  if ( v6 )
  {
    v4 = 1;
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 152);
  }
  return v4;
}
