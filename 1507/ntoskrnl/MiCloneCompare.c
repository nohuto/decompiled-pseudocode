/*
 * XREFs of MiCloneCompare @ 0x140001A80
 * Callers:
 *     MiInsertClone @ 0x140001A08 (MiInsertClone.c)
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCloneCompare(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 24) > *(_QWORD *)(a2 + 32) )
    return 1LL;
  else
    return (unsigned int)-(*(_QWORD *)(a1 + 32) < *(_QWORD *)(a2 + 24));
}
