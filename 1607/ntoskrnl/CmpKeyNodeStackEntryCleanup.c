/*
 * XREFs of CmpKeyNodeStackEntryCleanup @ 0x14060BCC4
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14060A1B8 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpCleanupKeyNodeStack @ 0x14060B8B0 (CmpCleanupKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyNodeStackEntryCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[2] )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, a1 + 3);
  return result;
}
