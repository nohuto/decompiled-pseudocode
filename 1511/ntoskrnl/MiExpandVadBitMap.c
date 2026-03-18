/*
 * XREFs of MiExpandVadBitMap @ 0x140462D7C
 * Callers:
 *     MiInitializeVadBitMap @ 0x140462CA0 (MiInitializeVadBitMap.c)
 *     MiFindEmptyAddressRange @ 0x14047A1A0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiUpdateVadBits @ 0x140462EC8 (MiUpdateVadBits.c)
 *     MiMakeHyperRangeAccessible @ 0x140462F18 (MiMakeHyperRangeAccessible.c)
 *     MiExpandVadBitMapDown @ 0x140625B7C (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned int *a1, unsigned int a2)
{
  unsigned __int64 v3; // r14
  int v5; // ebp
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r15
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // ebp
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = v3 + 8 * a1[2];
  if ( a2 > MEMORY[0xFFFFF5801080425C] - v5 + 1 )
    return MiExpandVadBitMapDown(a2);
  v7 = *((_QWORD *)a1 + 1);
  v8 = v7 + (v3 >> 3);
  v9 = (v3 + 0x540000000000LL + 8 * v7) << 16;
  if ( (int)MiMakeHyperRangeAccessible(v8, v7 + ((unsigned __int64)((unsigned int)v3 + a2 - 1) >> 3), &v13) < 0 )
    return 0LL;
  MEMORY[0xFFFFF58010804258] += v13;
  _InterlockedExchangeAdd64(&qword_1402FF840, v13);
  v10 = 8 * (((a2 & 0x3F) != 0) + (a2 >> 6));
  v11 = ((v10 & 0xFFF) != 0) + (v10 >> 12);
  *a1 += v11 << 15;
  v12 = (v11 << 15) + v5;
  if ( v12 > MEMORY[0xFFFFF5801080425C] + 1 )
    *a1 = *a1 - v12 + MEMORY[0xFFFFF5801080425C] + 1;
  if ( v8 == 0xFFFFF58000000000uLL )
  {
    **((_DWORD **)a1 + 1) |= 1u;
    if ( (_DWORD)v3 )
      a1[4] = 1;
  }
  MiUpdateVadBits(v9, v9 + ((unsigned __int64)v11 << 31));
  return 1LL;
}
