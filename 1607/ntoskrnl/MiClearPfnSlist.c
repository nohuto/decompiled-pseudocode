/*
 * XREFs of MiClearPfnSlist @ 0x1401F2A84
 * Callers:
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiClearPfnSlist(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), 4294967293LL);
  *(_QWORD *)(v2 + 16) = result;
  return result;
}
