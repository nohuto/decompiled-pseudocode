/*
 * XREFs of MiExpandVadBitMapDown @ 0x1406A55E4
 * Callers:
 *     MiExpandVadBitMap @ 0x140467ED4 (MiExpandVadBitMap.c)
 * Callees:
 *     MiUpdateVadBits @ 0x140468060 (MiUpdateVadBits.c)
 *     MiMakeHyperRangeAccessible @ 0x1404680B8 (MiMakeHyperRangeAccessible.c)
 */

__int64 __fastcall MiExpandVadBitMapDown(unsigned int a1)
{
  int v1; // ebx
  unsigned int v3; // edi
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  ULONG v6; // ebx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 8 * MEMORY[0xFFFFF58010804230];
  if ( a1 > 8 * MEMORY[0xFFFFF58010804230] )
    return 0LL;
  v3 = 8 * (((a1 & 0x3F) != 0) + (a1 >> 6));
  v4 = ((v3 & 0xFFF) != 0) + (v3 >> 12);
  v5 = MEMORY[0xFFFFF58010804230] - (v4 << 12);
  if ( (int)MiMakeHyperRangeAccessible(v5, MEMORY[0xFFFFF58010804230] - 1LL, &v7) < 0 )
    return 0LL;
  MEMORY[0xFFFFF58010804210] += v7;
  _InterlockedExchangeAdd64(&qword_14034FD00, v7);
  MEMORY[0xFFFFF58010804230] = v5;
  v6 = v1 - (v4 << 15);
  MEMORY[0xFFFFF5801080420C] += v4 << 15;
  if ( v5 == 0xFFFFF58000000000uLL )
  {
    MEMORY[0xFFFFF58000000000] |= 1u;
    v6 = 1;
  }
  MEMORY[0xFFFFF580108041FC] = v6;
  MEMORY[0xFFFFF58010804204] = 0;
  MEMORY[0xFFFFF58010804200] = v6;
  MiUpdateVadBits(
    (MEMORY[0xFFFFF58010804230] + 0xA8000000000LL) << 19,
    (void *)(((MEMORY[0xFFFFF58010804230] + 0xA8000000000LL) << 19) + ((unsigned __int64)v4 << 31)));
  return 1LL;
}
