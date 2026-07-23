/*
 * XREFs of PiSwFindBusRelations @ 0x1403F0978
 * Callers:
 *     PiSwFindChildren @ 0x1403F0958 (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x140484B98 (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int128 *a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  Buffer = *a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, &Buffer);
}
