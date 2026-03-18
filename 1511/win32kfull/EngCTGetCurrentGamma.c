/*
 * XREFs of EngCTGetCurrentGamma @ 0x1C00F8E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall EngCTGetCurrentGamma(HDEV hdev)
{
  ULONG result; // eax

  result = gulGamma;
  if ( gulGamma == 1200 )
  {
    result = *((_DWORD *)hdev + 618);
    if ( !result )
      return 1200;
  }
  return result;
}
