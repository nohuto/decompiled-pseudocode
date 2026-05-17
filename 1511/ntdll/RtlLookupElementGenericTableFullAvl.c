/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x1800686B0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1800688E4 (FindNodeOrParent.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFullAvl(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int NodeOrParent; // eax

  NodeOrParent = FindNodeOrParent();
  *a4 = NodeOrParent;
  if ( NodeOrParent == 1 )
    return *a3 + 32LL;
  else
    return 0LL;
}
