/*
 * XREFs of _lambda_2bebfff6b575bd8d8c3dff654a013d7e_::operator() @ 0x1C029C074
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall lambda_2bebfff6b575bd8d8c3dff654a013d7e_::operator()(__int64 a1, __int64 a2)
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
