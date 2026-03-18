/*
 * XREFs of MxCreatePfn @ 0x1407C70B4
 * Callers:
 *     MxCreatePfns @ 0x1407C6C34 (MxCreatePfns.c)
 * Callees:
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400FFFF0 (MiPageToChannel.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MxCreatePfn(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  char v9; // dl
  char v10; // dl
  unsigned __int64 v11; // rcx
  __int64 result; // rax

  v4 = 48 * a1 - 0x58000000000LL;
  if ( a4 == 1 )
    memset((void *)(48 * a1 - 0x58000000000LL), 0, 0x30uLL);
  v8 = a3 ^ *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 8) = a2;
  *(_WORD *)(v4 + 32) = 1;
  *(_QWORD *)(v4 + 40) ^= v8 & 0xFFFFFFFFFLL;
  v9 = *(_BYTE *)(v4 + 34) & 0x38;
  *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (*(_QWORD *)(v4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(v4 + 34) = v9 | 0x46;
  *(_QWORD *)(v4 + 16) = MiMakeDemandZeroPte(4);
  *(_BYTE *)(v4 + 34) = v10 | 0x10;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(a1, 0) << 58);
  v11 = *(_QWORD *)(v4 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(a1) & 3) << 36);
  result = 0x20000000000000LL;
  *(_QWORD *)(v4 + 40) = v11 | 0x20000000000000LL;
  return result;
}
