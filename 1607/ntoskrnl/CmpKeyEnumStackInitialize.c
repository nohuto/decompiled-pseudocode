/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x14060A730
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1401B30E8 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14060A114 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x14060A5A0 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpInitializeKeyNodeStack @ 0x14060BD38 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackInitialize(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x160uLL);
  CmpInitializeKeyNodeStack(a1 + 8);
  v2 = a1 + 88;
  v3 = 2LL;
  do
  {
    result = CmpKeyEnumStackEntryInitialize(v2);
    v2 += 128;
    --v3;
  }
  while ( v3 );
  return result;
}
