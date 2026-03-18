/*
 * XREFs of MiInitializeWorkingSetList @ 0x1404683F8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeWorkingSetList(_QWORD *a1)
{
  _QWORD *v1; // r8
  unsigned __int64 *v2; // r8
  unsigned __int64 v3; // r11
  __int64 v4; // r10
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdx

  MEMORY[0xFFFFF58010804010] = a1[171];
  MEMORY[0xFFFFF580108041F0] = 0xFFFFF58010804300uLL;
  MEMORY[0xFFFFF58010804040] = 8;
  MEMORY[0xFFFFF58010804060] = qword_14034EE50;
  MEMORY[0xFFFFF58010804068] = qword_14034EE58;
  MEMORY[0xFFFFF58010804058] = qword_14034EE60;
  MEMORY[0xFFFFF58010804300] = 0xFFFFF6FB7DBED009uLL;
  v1 = (_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( (v1[5] & 0xFFFFFFFFFLL) != 48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) / 48 )
    *v1 = 0LL;
  v2 = (unsigned __int64 *)0xFFFFF58010804308LL;
  v3 = 0xFFFFF58010804000uLL;
  v4 = 4LL;
  do
  {
    *v2 = v3 | 9;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = (__int64 *)(48 * ((*(_QWORD *)v3 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( (v5[5] & 0xFFFFFFFFFLL) != 48 * ((*(_QWORD *)v3 >> 12) & 0xFFFFFFFFFLL) / 48 )
      *v5 = (__int64)(v2 + 0x14FFDEFF7A0LL) >> 3;
    ++v2;
    --v4;
  }
  while ( v4 );
  v6 = (__int64)(v2 + 0x14FFDEFF7A0LL) >> 3;
  MEMORY[0xFFFFF58010804008] = v6;
  MEMORY[0xFFFFF58010804018] = v6;
  a1[172] = 1LL;
  a1[173] = 1LL;
  a1[174] = v6;
  a1[175] = v6;
  a1[115] = v6;
  MEMORY[0xFFFFF58010804020] = 415LL;
  return MiPopulateWorkingSetFreeList((__int64)(a1 + 159), v6, 0x19FuLL);
}
