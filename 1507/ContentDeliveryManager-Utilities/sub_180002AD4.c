/*
 * XREFs of sub_180002AD4 @ 0x180002AD4
 * Callers:
 *     StartAddress @ 0x180009330 (StartAddress.c)
 * Callees:
 *     <none>
 */

HRESULT (__stdcall *sub_180002AD4())(IUnknown **ppunk)
{
  HRESULT (__stdcall *result)(IUnknown **); // rax

  result = SHGetThreadRef;
  qword_18003AB70 = (__int64)SHGetThreadRef;
  return result;
}
