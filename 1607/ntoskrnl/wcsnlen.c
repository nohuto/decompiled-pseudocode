/*
 * XREFs of wcsnlen @ 0x14014F674
 * Callers:
 *     _wcslwr_s @ 0x14014DD9C (_wcslwr_s.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1405800A8 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406886A0 (RtlpSetTimeZoneInformationWorker.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D52C4 (BiGetObjectReferenceFromEfiEntry.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Src )
  {
    if ( !*Src )
      break;
    ++result;
  }
  return result;
}
