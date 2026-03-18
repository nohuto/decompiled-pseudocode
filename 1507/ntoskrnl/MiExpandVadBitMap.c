/*
 * XREFs of MiExpandVadBitMap @ 0x140467ED4
 * Callers:
 *     MiInitializeVadBitMap @ 0x140467E18 (MiInitializeVadBitMap.c)
 *     MiFindEmptyAddressRange @ 0x1404B61A0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiUpdateVadBits @ 0x140468060 (MiUpdateVadBits.c)
 *     MiMakeHyperRangeAccessible @ 0x1404680B8 (MiMakeHyperRangeAccessible.c)
 *     MiExpandVadBitMapDown @ 0x1406A55E4 (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned int a1)
{
  int v2; // edi
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  int HyperRangeAccessible; // eax
  int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // r8d
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = MEMORY[0xFFFFF5801080420C] + 8 * MEMORY[0xFFFFF58010804230];
  if ( a1 > MEMORY[0xFFFFF58010804214] - v2 + 1 )
    return MiExpandVadBitMapDown(a1);
  v3 = MEMORY[0xFFFFF58010804230] + ((unsigned __int64)MEMORY[0xFFFFF5801080420C] >> 3);
  v4 = (MEMORY[0xFFFFF5801080420C] + 0x540000000000LL + 8LL * MEMORY[0xFFFFF58010804230]) << 16;
  HyperRangeAccessible = MiMakeHyperRangeAccessible(
                           v3,
                           MEMORY[0xFFFFF58010804230] + ((unsigned __int64)(a1 + MEMORY[0xFFFFF5801080420C] - 1) >> 3),
                           &v12);
  v6 = 0;
  if ( HyperRangeAccessible < 0 )
    return 0LL;
  MEMORY[0xFFFFF58010804210] += v12;
  _InterlockedExchangeAdd64(&qword_14034FD00, v12);
  if ( v3 == 0xFFFFF58000000000uLL )
  {
    MEMORY[0xFFFFF58000000000] |= 1u;
    if ( MEMORY[0xFFFFF5801080420C] )
      MEMORY[0xFFFFF580108041FC] = 1;
    MEMORY[0xFFFFF58010804204] = 0;
    MEMORY[0xFFFFF58010804200] = 1;
  }
  v7 = 8 * (((a1 & 0x3F) != 0) + (a1 >> 6));
  LOBYTE(v6) = (v7 & 0xFFF) != 0;
  v8 = v6 + (v7 >> 12);
  v9 = (v8 << 15) + v2;
  v10 = MEMORY[0xFFFFF5801080420C] + (v8 << 15);
  MEMORY[0xFFFFF5801080420C] = v10;
  if ( v9 > MEMORY[0xFFFFF58010804214] + 1 )
    MEMORY[0xFFFFF5801080420C] = v10 - v9 + MEMORY[0xFFFFF58010804214] + 1;
  MiUpdateVadBits(v4, v4 + ((unsigned __int64)v8 << 31));
  return 1LL;
}
