/*
 * XREFs of ExpSetBorrowedTimeOnTimestamp @ 0x1406F86D4
 * Callers:
 *     ExpAllocateUuids @ 0x140555964 (ExpAllocateUuids.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpSetBorrowedTimeOnTimestamp(__int64 a1, _DWORD *a2)
{
  int v2; // ecx
  char result; // al

  v2 = 0;
  result = ExpUuidTimeSequenceNumber & 1;
  if ( (ExpUuidTimeSequenceNumber & 1) != 0 )
    v2 = 0x8000000;
  if ( (ExpUuidTimeSequenceNumber & 2) != 0 )
    v2 |= 0x4000000u;
  if ( (ExpUuidTimeSequenceNumber & 4) != 0 )
    v2 |= 0x2000000u;
  if ( (ExpUuidTimeSequenceNumber & 8) != 0 )
    v2 |= 0x1000000u;
  if ( (ExpUuidTimeSequenceNumber & 0x10) != 0 )
    v2 |= 0x800000u;
  *a2 |= v2;
  return result;
}
