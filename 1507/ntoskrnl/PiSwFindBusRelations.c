/*
 * XREFs of PiSwFindBusRelations @ 0x140538A4C
 * Callers:
 *     PiSwFindChildren @ 0x140538A2C (PiSwFindChildren.c)
 *     PiSwCloseDecendents @ 0x140538D44 (PiSwCloseDecendents.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140017F60 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PiSwFindBusRelations(__int128 *a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)a1 + 1) )
    return 0LL;
  Buffer = *a1;
  return RtlLookupElementGenericTableAvl(&PiSwBusRelationsTable, &Buffer);
}
