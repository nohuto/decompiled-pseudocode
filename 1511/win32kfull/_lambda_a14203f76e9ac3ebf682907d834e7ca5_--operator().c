/*
 * XREFs of _lambda_a14203f76e9ac3ebf682907d834e7ca5_::operator() @ 0x1C029B9E4
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall lambda_a14203f76e9ac3ebf682907d834e7ca5_::operator()(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  PVOID result; // rax

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 )
    {
      result = MmSystemRangeStart;
      if ( v2 < (unsigned __int64)MmSystemRangeStart )
        *(_QWORD *)(a2 + 8) = 0LL;
    }
  }
  return result;
}
