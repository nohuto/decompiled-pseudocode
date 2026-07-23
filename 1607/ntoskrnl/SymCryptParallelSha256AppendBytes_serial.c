/*
 * XREFs of SymCryptParallelSha256AppendBytes_serial @ 0x1402370E0
 * Callers:
 *     SymCryptParallelSha256Append @ 0x140235CD4 (SymCryptParallelSha256Append.c)
 * Callees:
 *     SymCryptSha256AppendBlocks_ul1 @ 0x140136F40 (SymCryptSha256AppendBlocks_ul1.c)
 *     SymCryptSha256AppendBlocks_shani @ 0x140235918 (SymCryptSha256AppendBlocks_shani.c)
 */

__int64 __fastcall SymCryptParallelSha256AppendBytes_serial(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 i; // rbx
  __m128i **v7; // rax
  const __m128i *v8; // rdx
  __m128i *v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    for ( i = 0LL; i < a2; ++i )
    {
      v7 = *(__m128i ***)(a1 + 8 * i);
      v8 = v7[4];
      v9 = *v7 + 6;
      if ( (g_SymCryptCpuFeaturesNotPresent & 0x42) != 0 )
        SymCryptSha256AppendBlocks_ul1(v9->m128i_i32, (__int64)v8, a3, &v11);
      else
        SymCryptSha256AppendBlocks_shani(v9, v8, a3, &v11);
      *(_QWORD *)(*(_QWORD *)(a1 + 8 * i) + 32LL) += a3;
      result = *(_QWORD *)(a1 + 8 * i);
      *(_QWORD *)(result + 40) -= a3;
    }
  }
  return result;
}
