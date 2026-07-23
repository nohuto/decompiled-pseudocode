/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14012BAEC
 * Callers:
 *     PopRequestPowerIrp @ 0x14012B108 (PopRequestPowerIrp.c)
 *     VerifierIofCallDriver @ 0x14070C954 (VerifierIofCallDriver.c)
 *     VerifierPoCallDriver @ 0x14070CBB0 (VerifierPoCallDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IofCallDriverSpecifyReturn(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  if ( pIofCallDriver )
    return pIofCallDriver(a1, a2, a3);
  else
    return IopfCallDriver(a1, a2);
}
