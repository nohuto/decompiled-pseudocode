/*
 * XREFs of PopPepGetComponentVetoMasks @ 0x140205E68
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x14052C510 (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetComponentVetoMasks(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  KIRQL v7; // al
  bool v8; // bl

  v5 = 200LL * a2;
  v6 = 0LL;
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 160) == 2;
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v7);
  if ( v8 )
  {
    if ( *(_DWORD *)(v5 + a1 + 364) )
    {
      do
      {
        *(_DWORD *)(a3 + 4 * v6) = *(_DWORD *)(*(_QWORD *)(v5 + a1 + 368) + 24 * v6 + 16);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *(_DWORD *)(v5 + a1 + 364) );
    }
    LOBYTE(v6) = 1;
  }
  return v6;
}
