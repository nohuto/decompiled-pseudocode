/*
 * XREFs of UnInitEnergyCounters @ 0x1C0019330
 * Callers:
 *     <none>
 * Callees:
 *     DeactivateFixedFunctionCounters @ 0x1C0002E70 (DeactivateFixedFunctionCounters.c)
 */

unsigned __int64 UnInitEnergyCounters()
{
  unsigned __int64 result; // rax

  result = (unsigned int)dword_1C000DC48;
  if ( (dword_1C000DC48 & 1) != 0 )
    return (unsigned __int64)DeactivateFixedFunctionCounters();
  return result;
}
