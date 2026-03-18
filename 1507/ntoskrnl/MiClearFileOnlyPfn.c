/*
 * XREFs of MiClearFileOnlyPfn @ 0x140195D84
 * Callers:
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall MiClearFileOnlyPfn(_OWORD *a1)
{
  __int128 v1; // xmm1
  char v2; // al
  __int64 result; // rax
  __int128 v4; // xmm0
  _OWORD v5[3]; // [rsp+20h] [rbp-30h] BYREF

  memset(v5, 0, sizeof(v5));
  *((_QWORD *)&v5[1] + 1) |= 0x8000000000000000uLL;
  v1 = v5[1];
  v2 = BYTE2(v5[2]) & 0x38;
  *a1 = v5[0];
  BYTE2(v5[2]) = v2 | 0x45;
  result = 0x30000000000000LL;
  *((_QWORD *)&v5[2] + 1) |= 0x30000000000000uLL;
  v4 = v5[2];
  a1[1] = v1;
  a1[2] = v4;
  return result;
}
