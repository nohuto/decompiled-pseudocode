/*
 * XREFs of atol @ 0x14014D538
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x14014CEC8 (HvlDebuggerSupportInitialize.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
