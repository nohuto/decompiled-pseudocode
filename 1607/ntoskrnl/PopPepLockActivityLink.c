/*
 * XREFs of PopPepLockActivityLink @ 0x1400C059C
 * Callers:
 *     PopPepProcessEvent @ 0x1400C00D8 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1401422B0 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14014C2A0 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x140205CAC (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x140205D84 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepLockActivityLink(__int64 a1, volatile LONG *a2, unsigned int a3, unsigned int a4, KIRQL *a5)
{
  char v5; // bl
  KIRQL v9; // al
  bool v10; // zf

  v5 = 0;
  if ( !a2 || *(_DWORD *)(a1 + 168) == 1 )
    goto LABEL_3;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
      goto LABEL_3;
  }
  else if ( a3 <= 5 && *((_BYTE *)&ActivityAttributes + 136 * (int)a3) == 1 )
  {
    goto LABEL_3;
  }
  if ( a4 > 5 || *((_BYTE *)&ActivityAttributes + 136 * (int)a4) != 1 )
  {
    v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    v10 = *(_BYTE *)(a1 + 125) == 1;
    *a5 = v9;
    if ( !v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(a2);
      return v5;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v9);
  }
LABEL_3:
  v5 = 1;
  *a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  return v5;
}
