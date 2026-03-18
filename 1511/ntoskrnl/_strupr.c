/*
 * XREFs of _strupr @ 0x140143974
 * Callers:
 *     InbvDetermineFunction @ 0x140137C18 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140767874 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x14076791C (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
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
