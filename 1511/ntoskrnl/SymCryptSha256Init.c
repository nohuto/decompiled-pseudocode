/*
 * XREFs of SymCryptSha256Init @ 0x1400F4680
 * Callers:
 *     SymCryptSha256 @ 0x1401346FC (SymCryptSha256.c)
 *     KeComputeParallelSha256 @ 0x1401C3AE8 (KeComputeParallelSha256.c)
 *     SymCryptParallelSha256ResultDone @ 0x14021CE2C (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140249BD8;
  *(_OWORD *)(a1 + 112) = xmmword_140249BE8;
}
