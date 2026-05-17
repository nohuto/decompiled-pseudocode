/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180073E20
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x1800742CC (FindNodeOrParent_0.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFullAvl(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int NodeOrParent_0; // eax

  NodeOrParent_0 = FindNodeOrParent_0();
  *a4 = NodeOrParent_0;
  if ( NodeOrParent_0 == 1 )
    return *a3 + 32LL;
  else
    return 0LL;
}
