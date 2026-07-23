/*
 * XREFs of CmpValueEnumStackEntryCleanup @ 0x1401B5B40
 * Callers:
 *     CmpValueEnumStackCleanup @ 0x14060B640 (CmpValueEnumStackCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValueEnumStackEntryCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[1] )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, a1 + 2);
  return result;
}
