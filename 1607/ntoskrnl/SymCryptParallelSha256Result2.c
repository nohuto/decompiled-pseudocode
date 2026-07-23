/*
 * XREFs of SymCryptParallelSha256Result2 @ 0x1402372C0
 * Callers:
 *     SymCryptParallelHashSetNextWork @ 0x1402377EC (SymCryptParallelHashSetNextWork.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x140159710 (SymCryptWipeAsm.c)
 */

char __fastcall SymCryptParallelSha256Result2(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rbx
  char result; // al

  v4 = a2 + 32;
  SymCryptWipeAsm(a2 + 32, 0x40uLL);
  *(_QWORD *)(a2 + 88) = _byteswap_uint64(8LL * *(_QWORD *)(a2 + 16));
  result = 1;
  *(_QWORD *)(a3 + 32) = v4;
  *(_QWORD *)(a3 + 40) = 64LL;
  *(_BYTE *)(a3 + 8) = 4;
  *a4 = 1;
  return result;
}
