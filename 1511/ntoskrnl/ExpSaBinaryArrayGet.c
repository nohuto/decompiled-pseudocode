/*
 * XREFs of ExpSaBinaryArrayGet @ 0x140167010
 * Callers:
 *     ExSaDecodeHandleForIndex @ 0x14012CDD8 (ExSaDecodeHandleForIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSaBinaryArrayGet(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx

  _BitScanReverse(&v3, a2);
  return *(_QWORD *)(*(_QWORD *)(a1 + 8LL * (v3 - 2)) + 8LL * (a2 ^ (1 << v3)) + 8);
}
