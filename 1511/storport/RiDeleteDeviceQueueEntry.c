/*
 * XREFs of RiDeleteDeviceQueueEntry @ 0x1C0009D2C
 * Callers:
 *     RaidDeleteDeviceQueueEntry @ 0x1C0009CDC (RaidDeleteDeviceQueueEntry.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RiDeleteDeviceQueueEntry(__int64 a1, int a2)
{
  LONG result; // eax
  int v3; // edx

  if ( a2 )
    *(_BYTE *)(a1 + 38) = 0;
  --*(_DWORD *)(a1 + 76);
  result = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 76);
  if ( result )
    *(_DWORD *)(a1 + 32) = --result;
  if ( !v3 )
  {
    if ( *(_DWORD *)(a1 + 40) )
      return KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  }
  return result;
}
