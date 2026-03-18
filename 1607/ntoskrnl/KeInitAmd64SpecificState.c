/*
 * XREFs of KeInitAmd64SpecificState @ 0x1407988CC
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x14079A9D8 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     KiFilterFiberContext @ 0x140777A80 (KiFilterFiberContext.c)
 */

__int64 KeInitAmd64SpecificState()
{
  __int64 result; // rax

  if ( !InitSafeBootMode )
    return (unsigned int)(__ROR4__((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent, 1)
                        / (((unsigned __int8)KdPitchDebugger | (unsigned __int8)KdDebuggerNotPresent) != 0 ? -1 : 17));
  return result;
}
