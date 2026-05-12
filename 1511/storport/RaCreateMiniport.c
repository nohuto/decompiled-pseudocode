/*
 * XREFs of RaCreateMiniport @ 0x1C0050F0C
 * Callers:
 *     RaidCreateAdapter @ 0x1C000AC10 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall RaCreateMiniport(__int64 a1)
{
  __int64 result; // rax

  memset((void *)(a1 + 8), 0, 0xE0uLL);
  result = 0LL;
  *(_BYTE *)(a1 + 248) &= 0xFCu;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
