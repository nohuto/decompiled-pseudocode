/*
 * XREFs of CmpKeyEnumStackEntryInitialize @ 0x14060A5A0
 * Callers:
 *     CmpKeyEnumStackInitialize @ 0x14060A730 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A814 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryInitialize(void *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  _DWORD *v4; // rdx
  __int64 v5; // r8

  memset(a1, 0, 0x80uLL);
  HvpGetCellContextReinitialize((__int64)a1 + 16);
  v2 = (__int64)a1 + 96;
  do
  {
    HvpGetCellContextReinitialize(v2 - 40);
    result = HvpGetCellContextReinitialize(v2);
    *v4 = -1;
    v2 += 8LL;
  }
  while ( v5 != 1 );
  return result;
}
