/*
 * XREFs of PipFreeGroupTree @ 0x1407BA724
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 *     PipFreeGroupTree @ 0x1407BA724 (PipFreeGroupTree.c)
 * Callees:
 *     PipFreeGroupTree @ 0x1407BA724 (PipFreeGroupTree.c)
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
