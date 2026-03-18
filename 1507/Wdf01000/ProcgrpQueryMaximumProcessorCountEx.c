/*
 * XREFs of ProcgrpQueryMaximumProcessorCountEx @ 0x1C00A4EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcgrpQueryMaximumProcessorCountEx(unsigned __int16 GroupNumber)
{
  if ( (unsigned __int16)(GroupNumber - 1) > 0xFFFDu )
    return ((__int64 (*)(void))PfnKeQueryMaximumProcessorCount)();
  else
    return 0LL;
}
