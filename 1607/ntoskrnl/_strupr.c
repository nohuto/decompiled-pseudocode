/*
 * XREFs of _strupr @ 0x14014D1E0
 * Callers:
 *     InbvDetermineFunction @ 0x140141720 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x1407B1F00 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x1407B1FA8 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

char *__cdecl strupr(char *String)
{
  char *v1; // rdx

  v1 = String;
  if ( String )
  {
    while ( *String )
    {
      if ( (unsigned __int8)(*String - 97) <= 0x19u )
        *String -= 32;
      ++String;
    }
    return v1;
  }
  else
  {
    xHalFreeMessageTarget();
    return 0LL;
  }
}
