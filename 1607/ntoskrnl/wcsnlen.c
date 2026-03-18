/*
 * XREFs of wcsnlen @ 0x14014F0B4
 * Callers:
 *     _wcslwr_s @ 0x14014D82C (_wcslwr_s.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x14057FBFC (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406885BC (RtlpSetTimeZoneInformationWorker.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D518C (BiGetObjectReferenceFromEfiEntry.c)
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
