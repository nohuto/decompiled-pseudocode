/*
 * XREFs of atol @ 0x140171C20
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x140170870 (HvlDebuggerSupportInitialize.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((char *)Str, 0LL, 10, 1);
  else
    return 0;
}
