/*
 * XREFs of atol @ 0x140143BA0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x140142A08 (HvlDebuggerSupportInitialize.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
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
