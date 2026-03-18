/*
 * XREFs of MiResidentPagesForSpan @ 0x14054BA90
 * Callers:
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiResidentPagesForSpan(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  unsigned __int64 v3; // r8
  __int64 v4; // r11
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax

  v2 = 0LL;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 3LL;
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v6 = (__int64)(v5 - v3) >> 3;
    v7 = (v3 & 0xFFF) + 4095;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 += ((unsigned __int64)(v7 + ((8 * (_WORD)v6 + 8) & 0xFFFu)) >> 12) + ((unsigned __int64)(8 * v6 + 8) >> 12);
    --v4;
  }
  while ( v4 );
  return v2;
}
