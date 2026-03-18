/*
 * XREFs of wcsnlen @ 0x140145CD8
 * Callers:
 *     _wcslwr_s @ 0x14014440C (_wcslwr_s.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x14054A790 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140648FF8 (RtlpSetTimeZoneInformationWorker.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406909CC (BiGetObjectReferenceFromEfiEntry.c)
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
