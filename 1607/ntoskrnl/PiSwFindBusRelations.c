/*
 * XREFs of PiSwFindBusRelations @ 0x1403F1AB4
 * Callers:
 *     PiSwFindChildren @ 0x1403F1A94 (PiSwFindChildren.c)
 *     PiSwCloseDescendants @ 0x1404C6390 (PiSwCloseDescendants.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400C3B20 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int128 *a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  Buffer = *a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, &Buffer);
}
