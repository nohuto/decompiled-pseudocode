/*
 * XREFs of PopPepGetMinimumComponentIdleState @ 0x140205F78
 * Callers:
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402039EC (PopFxSetDeviceAccountingCsPlatformState.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetMinimumComponentIdleState(__int64 a1, unsigned int a2, char a3, unsigned int *a4)
{
  __int64 v5; // r12
  char v6; // si
  int v8; // r14d
  KIRQL v9; // al
  bool v10; // bl
  unsigned int v11; // edx
  unsigned int v12; // r8d

  v5 = a2;
  v6 = 0;
  v8 = 1 << a3;
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v10 = *(_DWORD *)(a1 + 160) == 2;
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v9);
  if ( v10 )
  {
    v11 = 0;
    v12 = *(_DWORD *)(200 * v5 + a1 + 364);
    if ( v12 )
    {
      do
      {
        if ( (v8 & *(_DWORD *)(*(_QWORD *)(200 * v5 + a1 + 368) + 24LL * v11 + 16)) == 0 )
          break;
        ++v11;
      }
      while ( v11 < v12 );
    }
    if ( v11 < v12 )
    {
      *a4 = v11;
      return 1;
    }
  }
  return v6;
}
