/*
 * XREFs of InsertTailListPte @ 0x140017A50
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x1400A1428 (MiExpandSystemCache.c)
 *     MiExpandSpecialPool @ 0x1401EB444 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB748 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x1401F24AC (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x1401F256C (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x1401F281C (MiUpdateLinkedListInPte.c)
 */

__int64 __fastcall InsertTailListPte(__int64 *a1)
{
  __int64 LinkedListPte; // rax
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 PteLink; // rdi
  __int64 v7; // r9
  __int64 updated; // rax
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r11
  __int64 *v17; // rcx
  __int64 v18; // rcx

  LinkedListPte = MiMakeLinkedListPte((__int64)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - a1[2] - 0x98000000000LL) >> 3);
  *v3 = LinkedListPte;
  if ( (unsigned int)MiPteInShadowRange(v3, v3) )
    MiWritePteShadow(v4, v5);
  PteLink = MiGetPteLink(a1[1]);
  updated = MiUpdateLinkedListInPte(v7, PteLink);
  *(_QWORD *)(v9 + 8) = updated;
  if ( (unsigned int)MiPteInShadowRange(v9 + 8, updated) )
    MiWritePteShadow(v11, v10);
  result = MiMakeLinkedListPte((v12 - a1[2]) >> 3);
  v15 = result;
  if ( PteLink == v16 )
  {
    *a1 = result;
  }
  else
  {
    v17 = (__int64 *)(v14 + 8 * PteLink);
    *v17 = result;
    result = MiPteInShadowRange(v17, v14);
    if ( (_DWORD)result )
      result = MiWritePteShadow(v18, v15);
  }
  a1[1] = v15;
  return result;
}
