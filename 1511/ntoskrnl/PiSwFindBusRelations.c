/*
 * XREFs of PiSwFindBusRelations @ 0x140496770
 * Callers:
 *     PiSwCloseDescendants @ 0x140496720 (PiSwCloseDescendants.c)
 *     PiSwFindChildren @ 0x140496750 (PiSwFindChildren.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14008FDF0 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int128 *a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  Buffer = *a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, &Buffer);
}
