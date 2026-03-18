/*
 * XREFs of KiAddThreadToReadyQueue @ 0x1401C95D8
 * Callers:
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 */

unsigned int __fastcall KiAddThreadToReadyQueue(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v8; // r10

  v5 = a3;
  v6 = a2;
  if ( !a4 )
    *(_DWORD *)(a3 + 436) = MEMORY[0xFFFFF78000000320];
  if ( !a2 )
  {
    v6 = *(_QWORD *)(a3 + 104);
    if ( v6 )
      v6 += *(unsigned int *)(a1 + 1624);
  }
  *(_BYTE *)(a3 + 388) = 1;
  if ( v6 && (*(_DWORD *)(a3 + 120) & 0x600) == 0 && (unsigned int)KiGetThreadEffectiveRankNonZero(a3, v6, 0) )
    return KiAddThreadToScbQueue(a1, v8, v5, a5);
  else
    return KiAddThreadToPrcbQueue(a1, v5, (unsigned int)*(char *)(v5 + 195), a5);
}
