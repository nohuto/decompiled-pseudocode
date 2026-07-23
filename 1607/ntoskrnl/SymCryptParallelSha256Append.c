/*
 * XREFs of SymCryptParallelSha256Append @ 0x140235CD4
 * Callers:
 *     SymCryptParallelHashProcess @ 0x140237378 (SymCryptParallelHashProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SymCryptParallelSha256AppendBlocks_xmm @ 0x140235DA0 (SymCryptParallelSha256AppendBlocks_xmm.c)
 *     SymCryptParallelSha256AppendBlocks_ymm @ 0x140236738 (SymCryptParallelSha256AppendBlocks_ymm.c)
 *     SymCryptParallelSha256AppendBytes_serial @ 0x1402370E0 (SymCryptParallelSha256AppendBytes_serial.c)
 */

__int64 __fastcall SymCryptParallelSha256Append(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r10d
  unsigned __int64 i; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD v13[8]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v14[8]; // [rsp+60h] [rbp-58h] BYREF

  v5 = (a2 + 3) & 0xFFFFFFFC;
  if ( a2 < 2 )
    return SymCryptParallelSha256AppendBytes_serial(a1, a2, a3, a2);
  for ( i = 0LL; i < a2; *(_QWORD *)(v12 + 40) -= a3 )
  {
    v10 = *(_QWORD **)(a1 + 8 * i);
    v14[i] = *v10 + 96LL;
    v11 = v10[4];
    v13[i] = v11;
    v10[4] = a3 + v11;
    v12 = *(_QWORD *)(a1 + 8 * i++);
  }
  while ( i < v5 )
  {
    v14[i] = v14[0];
    v13[i++] = v13[0];
  }
  if ( v5 == 8 )
    return SymCryptParallelSha256AppendBlocks_ymm(v14, v13, a3, a4);
  else
    return SymCryptParallelSha256AppendBlocks_xmm(v14, v13, a3, a4);
}
