/*
 * XREFs of SymCryptSha256Init @ 0x1400B3D68
 * Callers:
 *     SymCryptSha256 @ 0x140136DE8 (SymCryptSha256.c)
 *     KeComputeParallelSha256 @ 0x1401D24A8 (KeComputeParallelSha256.c)
 *     SymCryptParallelSha256ResultDone @ 0x14023732C (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140271FE0;
  *(_OWORD *)(a1 + 112) = xmmword_140271FF0;
}
