/*
 * XREFs of ACPIEcUnloadPending @ 0x1C009B454
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C0003EB4 (ACPIEcServiceDevice.c)
 *     ACPIEcDispatchQueries @ 0x1C004D104 (ACPIEcDispatchQueries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcUnloadPending(_BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1[122] && !a1[456] && !a1[488] )
    a1[121] = 2;
  return result;
}
