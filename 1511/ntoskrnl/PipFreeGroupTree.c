/*
 * XREFs of PipFreeGroupTree @ 0x140753C0C
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x140753C0C (PipFreeGroupTree.c)
 * Callees:
 *     PipFreeGroupTree @ 0x140753C0C (PipFreeGroupTree.c)
 */

void __fastcall PipFreeGroupTree(_QWORD *a1)
{
  if ( *a1 )
    PipFreeGroupTree();
  if ( a1[2] )
    PipFreeGroupTree();
  if ( a1[1] )
    PipFreeGroupTree();
  ExFreePoolWithTag(a1, 0);
}
