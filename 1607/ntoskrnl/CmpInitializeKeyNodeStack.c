/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x14060BC84
 * Callers:
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B366C (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3C44 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140609FD4 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x14060A67C (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14060A6C8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14060B718 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140581850 (CmpKeyNodeStackEntryInitialize.c)
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
