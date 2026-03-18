/*
 * XREFs of SymCryptParallelSha256AppendBytes_serial @ 0x14026C700
 * Callers:
 *     SymCryptParallelSha256Append @ 0x14026B2E0 (SymCryptParallelSha256Append.c)
 * Callees:
 *     SymCryptSha256AppendBlocks_ul1 @ 0x14016A704 (SymCryptSha256AppendBlocks_ul1.c)
 */

__int64 __fastcall SymCryptParallelSha256AppendBytes_serial(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 i; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    for ( i = 0LL; i < a2; ++i )
    {
      SymCryptSha256AppendBlocks_ul1(
        (int *)(**(_QWORD **)(a1 + 8 * i) + 96LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 8 * i) + 32LL),
        a3,
        &v8);
      *(_QWORD *)(*(_QWORD *)(a1 + 8 * i) + 32LL) += a3;
      result = *(_QWORD *)(a1 + 8 * i);
      *(_QWORD *)(result + 40) -= a3;
    }
  }
  return result;
}
