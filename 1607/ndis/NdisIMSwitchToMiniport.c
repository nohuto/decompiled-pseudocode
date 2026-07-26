/*
 * XREFs of NdisIMSwitchToMiniport @ 0x1C005C7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NdisIMSwitchToMiniport(__int64 a1, KIRQL *a2)
{
  char v4; // di

  *a2 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 520) )
  {
    *(_QWORD *)a2 = -1LL;
    return 1;
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    v4 = 0;
    *(_DWORD *)(a1 + 1856) = 723868;
    if ( !*(_BYTE *)(a1 + 89) )
    {
      v4 = 1;
      *(_DWORD *)(a1 + 1860) = 723870;
      *(_BYTE *)(a1 + 89) = 1;
      *(_QWORD *)(a1 + 1864) = KeGetCurrentThread();
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  }
  return v4;
}
