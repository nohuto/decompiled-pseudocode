/*
 * XREFs of wcsnlen @ 0x140173D08
 * Callers:
 *     _wcslwr_s @ 0x14017248C (_wcslwr_s.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1405C1D2C (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406CC07C (RtlpSetTimeZoneInformationWorker.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407104E4 (BiGetObjectReferenceFromEfiEntry.c)
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
