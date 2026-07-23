/*
 * XREFs of SymCryptParallelSha256ResultDone @ 0x14023732C
 * Callers:
 *     SymCryptParallelHashSetNextWork @ 0x1402377EC (SymCryptParallelHashSetNextWork.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x140159710 (SymCryptWipeAsm.c)
 */

void __fastcall SymCryptParallelSha256ResultDone(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx
  __int64 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v3 = *(_QWORD **)(a3 + 16);
  v5 = (__int64 *)(a2 + 96);
  v6 = 4LL;
  do
  {
    v7 = *v5++;
    *v3++ = _byteswap_uint64(__ROL8__(v7, 32));
    --v6;
  }
  while ( v6 );
  SymCryptWipeAsm(a2, 0x80uLL);
  SymCryptSha256Init(a2);
}
