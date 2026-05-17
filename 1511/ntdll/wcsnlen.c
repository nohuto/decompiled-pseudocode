/*
 * XREFs of wcsnlen @ 0x18009B3B0
 * Callers:
 *     _wcslwr_s @ 0x180097030 (_wcslwr_s.c)
 *     _wcsupr_s @ 0x180097510 (_wcsupr_s.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800DC240 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800DC2C8 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800DD810 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800DDA30 (RtlpConvertLCIDsToCultureNames.c)
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
