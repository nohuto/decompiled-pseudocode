/*
 * XREFs of PopPepLockActivityLink @ 0x1400DBDD8
 * Callers:
 *     PopPepProcessEvent @ 0x1400DB930 (PopPepProcessEvent.c)
 *     PopPepCompleteComponentIdleState @ 0x1401ED038 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1401ED110 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1401ED1F0 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1401ED2E0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepLockActivityLink(__int64 a1, volatile LONG *a2, unsigned int a3, unsigned int a4, KIRQL *a5)
{
  char v5; // bl
  KIRQL v9; // al
  bool v10; // zf

  v5 = 0;
  if ( !a2 || *(_DWORD *)(a1 + 168) == 1 )
    goto LABEL_2;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
      goto LABEL_2;
  }
  else if ( a3 <= 5 && *((_BYTE *)&ActivityAttributes + 136 * (int)a3) == 1 )
  {
    goto LABEL_2;
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
LABEL_2:
  v5 = 1;
  *a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  return v5;
}
