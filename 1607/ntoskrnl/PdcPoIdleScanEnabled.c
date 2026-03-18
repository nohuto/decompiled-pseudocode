/*
 * XREFs of PdcPoIdleScanEnabled @ 0x14066FA4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PdcPoIdleScanEnabled()
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( PopIdleScanInterval )
    return 0LL;
  return result;
}
