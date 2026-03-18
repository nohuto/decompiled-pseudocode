/*
 * XREFs of MiInitializeWorkingSetList @ 0x1404631F0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 */

__int64 __fastcall MiInitializeWorkingSetList(_QWORD *a1)
{
  __int64 PteAddress; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // r8
  unsigned __int64 *v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  __int64 *v8; // r8
  unsigned __int64 v9; // rdx

  MEMORY[0xFFFFF58010804010] = a1[172];
  MEMORY[0xFFFFF580108041F0] = 0xFFFFF58010804350uLL;
  MEMORY[0xFFFFF58010804040] = 8;
  MEMORY[0xFFFFF58010804060] = qword_1402FE990;
  MEMORY[0xFFFFF58010804068] = qword_1402FE998;
  MEMORY[0xFFFFF58010804058] = qword_1402FE9A0;
  PteAddress = MiGetPteAddress(0xFFFFF6FB7DBED000uLL);
  MEMORY[0xFFFFF58010804350] = PteAddress & 0xFFFFFFFFFFFFF000uLL | 9;
  v3 = (_QWORD *)MiGetPteAddress(PteAddress & 0xFFFFFFFFFFFFF000uLL);
  v4 = (_QWORD *)(48 * ((*v3 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( (v4[5] & 0xFFFFFFFFFLL) != 48 * ((*v3 >> 12) & 0xFFFFFFFFFLL) / 48 )
    *v4 = 0LL;
  v5 = (unsigned __int64 *)0xFFFFF58010804358LL;
  v6 = 4LL;
  v7 = 0xFFFFF58010804000uLL;
  do
  {
    *v5 = v7 | 9;
    v7 = MiGetPteAddress(v7);
    v8 = (__int64 *)(48 * ((*(_QWORD *)v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( (v8[5] & 0xFFFFFFFFFLL) != 48 * ((*(_QWORD *)v7 >> 12) & 0xFFFFFFFFFLL) / 48 )
      *v8 = (__int64)(v5 + 0x14FFDEFF796LL) >> 3;
    ++v5;
    --v6;
  }
  while ( v6 );
  v9 = (__int64)(v5 + 0x14FFDEFF796LL) >> 3;
  MEMORY[0xFFFFF58010804008] = v9;
  MEMORY[0xFFFFF58010804018] = v9;
  a1[173] = 1LL;
  a1[174] = 1LL;
  a1[175] = v9;
  a1[176] = v9;
  a1[115] = v9;
  MEMORY[0xFFFFF58010804020] = 405LL;
  return MiPopulateWorkingSetFreeList((__int64)(a1 + 160), v9, 0x195uLL);
}
