/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x14060BD38
 * Callers:
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B3550 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3B28 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14060A088 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x14060A730 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14060A77C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14060B7CC (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140581D00 (CmpKeyNodeStackEntryInitialize.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(_DWORD *a1)
{
  _DWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = a1 + 2;
  v3 = 2LL;
  do
  {
    result = CmpKeyNodeStackEntryInitialize(v2);
    v2 += 8;
    --v3;
  }
  while ( v3 );
  return result;
}
