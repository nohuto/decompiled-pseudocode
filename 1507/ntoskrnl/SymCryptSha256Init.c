/*
 * XREFs of SymCryptSha256Init @ 0x140131C28
 * Callers:
 *     SymCryptSha256 @ 0x14015F0B4 (SymCryptSha256.c)
 *     KeComputeParallelSha256 @ 0x1401FFB64 (KeComputeParallelSha256.c)
 *     SymCryptParallelSha256ResultDone @ 0x14026C93C (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_14029A140;
  *(_OWORD *)(a1 + 112) = xmmword_14029A150;
}
