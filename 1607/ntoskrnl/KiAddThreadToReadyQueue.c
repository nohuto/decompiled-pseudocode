/*
 * XREFs of KiAddThreadToReadyQueue @ 0x1401D7BA8
 * Callers:
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 * Callees:
 *     KiAddThreadToScbQueue @ 0x140098D0C (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A361C (KiAddThreadToPrcbQueue.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 */

unsigned int __fastcall KiAddThreadToReadyQueue(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  char v5; // di
  __int64 v7; // rbx
  char v10; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v7 = a2;
  if ( !a4 )
    *(_DWORD *)(a3 + 436) = MEMORY[0xFFFFF78000000320];
  if ( !a2 )
  {
    v7 = *(_QWORD *)(a3 + 104);
    if ( v7 )
      v7 += *(unsigned int *)(a1 + 1624);
  }
  *(_BYTE *)(a3 + 388) = 1;
  v10 = 0;
  if ( v7 && (*(_DWORD *)(a3 + 120) & 0x600) == 0 )
  {
    if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a3, v7, a3, 0, (bool *)&v10) )
      return KiAddThreadToScbQueue(a1, v7, a3, a5);
    v5 = v10;
  }
  return KiAddThreadToPrcbQueue(a1, a3, *(char *)(a3 + 195), a5, v5);
}
