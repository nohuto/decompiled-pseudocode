/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x14000FCE0
 * Callers:
 *     SetRedrawProp @ 0x14000FC8C (SetRedrawProp.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetGlobalAtomTableOfWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) + 656LL);
  if ( result )
    return *(_QWORD *)(result + 136);
  return result;
}
