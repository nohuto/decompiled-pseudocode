/*
 * XREFs of MxCreatePfn @ 0x140747FEC
 * Callers:
 *     MxCreatePfns @ 0x140747D18 (MxCreatePfns.c)
 * Callees:
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400C05B0 (MiPageToChannel.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall MxCreatePfn(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 result; // rax

  v4 = 48 * a1 - 0x58000000000LL;
  if ( a4 == 1 )
    memset((void *)(48 * a1 - 0x58000000000LL), 0, 0x30uLL);
  v8 = a3 ^ *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 8) = a2;
  *(_WORD *)(v4 + 32) = 1;
  *(_QWORD *)(v4 + 16) = 128LL;
  *(_QWORD *)(v4 + 40) ^= v8 & 0xFFFFFFFFFLL;
  LOBYTE(v8) = *(_BYTE *)(v4 + 34) & 0x28;
  *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (*(_QWORD *)(v4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(v4 + 34) = v8 | 0x56;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(a1, 0) << 58);
  v9 = *(_QWORD *)(v4 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(a1) & 3) << 36);
  result = 0x20000000000000LL;
  *(_QWORD *)(v4 + 40) = v9 | 0x20000000000000LL;
  return result;
}
