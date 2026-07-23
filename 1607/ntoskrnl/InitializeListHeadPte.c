/*
 * XREFs of InitializeListHeadPte @ 0x1401FDE28
 * Callers:
 *     MiInitializeSpecialPool @ 0x14053629C (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x14055453C (MiInitializeSystemCache.c)
 * Callees:
 *     MiMakeLinkedListPte @ 0x1401F256C (MiMakeLinkedListPte.c)
 */

__int64 __fastcall InitializeListHeadPte(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r8

  *(_QWORD *)(a1 + 16) = a2;
  result = MiMakeLinkedListPte((__int64)(((a1 >> 9) & 0x7FFFFFFFF8LL) - a2 - 0x98000000000LL) >> 3);
  *v3 = result;
  v3[1] = result;
  return result;
}
