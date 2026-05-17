/*
 * XREFs of wcsnlen @ 0x18009C750
 * Callers:
 *     _wcslwr_s @ 0x180098400 (_wcslwr_s.c)
 *     _wcsupr_s @ 0x1800988E0 (_wcsupr_s.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800E5480 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800E5508 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E6A40 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6C60 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Source )
  {
    if ( !*Source )
      break;
    ++result;
  }
  return result;
}
