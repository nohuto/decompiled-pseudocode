/*
 * XREFs of InsertTailListPte @ 0x14006BAEC
 * Callers:
 *     MiExpandSystemCache @ 0x14006B790 (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 *     MiExpandSpecialPool @ 0x14021F2B8 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x14021F4BC (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x140225C20 (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x1402260B8 (MiUpdateLinkedListInPte.c)
 */

__int64 __fastcall InsertTailListPte(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 LinkedListPte; // rax
  __int64 *v6; // rdx
  __int64 v7; // rbx
  __int64 PteLink; // rbp
  __int64 updated; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 *v15; // rcx

  v3 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  LinkedListPte = MiMakeLinkedListPte((v3 - a1[2] - 0x98000000000LL) >> 3, a2);
  *v6 = LinkedListPte;
  v7 = LinkedListPte;
  if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(a2, LinkedListPte);
  PteLink = MiGetPteLink(a1[1]);
  updated = MiUpdateLinkedListInPte(v7, PteLink);
  *(_QWORD *)(a2 + 8) = updated;
  if ( (unsigned __int64)(a2 + 0x90482413008LL) <= 0x7F8 )
    MiWritePteShadow(a2 + 8, updated);
  v10 = a1[2];
  v11 = (v3 - v10 - 0x98000000000LL) >> 3;
  result = MiMakeLinkedListPte((a2 - v10) >> 3, v10);
  v14 = result;
  if ( PteLink == v11 )
  {
    *a1 = result;
  }
  else
  {
    v15 = (__int64 *)(v13 + 8 * PteLink);
    *v15 = result;
    result = (__int64)(v15 + 0x12090482600LL);
    if ( (unsigned __int64)(v15 + 0x12090482600LL) <= 0x7F8 )
      result = MiWritePteShadow(v15, v14);
  }
  a1[1] = v14;
  return result;
}
