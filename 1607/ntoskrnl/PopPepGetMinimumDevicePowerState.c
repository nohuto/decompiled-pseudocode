/*
 * XREFs of PopPepGetMinimumDevicePowerState @ 0x14020602C
 * Callers:
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402039EC (PopFxSetDeviceAccountingCsPlatformState.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetMinimumDevicePowerState(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v4; // esi
  int v6; // r14d
  KIRQL v7; // al
  bool v8; // bl
  _DWORD *v9; // rcx
  unsigned int v10; // eax

  v4 = 0;
  v6 = 1 << a2;
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 160) == 2;
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v7);
  if ( v8 )
  {
    v9 = (_DWORD *)(a1 + 144);
    do
    {
      if ( (v6 & *v9) == 0 )
        break;
      ++v4;
      ++v9;
    }
    while ( v4 < 3 );
    v10 = v4 + 1;
    LOBYTE(v4) = 1;
    *a3 = v10;
  }
  return v4;
}
