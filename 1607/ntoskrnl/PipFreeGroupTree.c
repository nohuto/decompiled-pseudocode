/*
 * XREFs of PipFreeGroupTree @ 0x1407B7D14
 * Callers:
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x1407B7D14 (PipFreeGroupTree.c)
 * Callees:
 *     PipFreeGroupTree @ 0x1407B7D14 (PipFreeGroupTree.c)
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
