/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14012250C
 * Callers:
 *     PopRequestPowerIrp @ 0x140121B34 (PopRequestPowerIrp.c)
 *     VerifierIofCallDriver @ 0x1406C08BC (VerifierIofCallDriver.c)
 *     VerifierPoCallDriver @ 0x1406C0B18 (VerifierPoCallDriver.c)
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
