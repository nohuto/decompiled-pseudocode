/*
 * XREFs of CmpValueEnumStackInitialize @ 0x14060B6C0
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1401B5A7C (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpValueEnumStackEntryInitialize @ 0x140171BD8 (CmpValueEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackInitialize(_DWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x58uLL);
  *a1 = -1;
  v2 = 2LL;
  v3 = (__int64)(a1 + 4);
  do
  {
    result = CmpValueEnumStackEntryInitialize(v3);
    v3 += 32LL;
    --v2;
  }
  while ( v2 );
  return result;
}
