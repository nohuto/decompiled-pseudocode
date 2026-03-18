/*
 * XREFs of _strupr @ 0x1401719F4
 * Callers:
 *     InbvDetermineFunction @ 0x14016641C (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x1407DB3A8 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x1407DB450 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
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
    PopPoCoalescinCallback();
    return 0LL;
  }
}
