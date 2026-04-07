/*
 * XREFs of sub_180001010 @ 0x180001010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int (__fastcall *sub_180001010())(wil::details *__hidden this, int)
{
  unsigned int (__fastcall *result)(wil::details *__hidden, int); // rax

  wil::details::g_pfnGetModuleName = (CIconicAnimatedVisual *)wil::details::GetCurrentModuleName;
  wil::details::g_pfnFailFastInLoaderCallout = (void (*)(void))wil::details::FailFastInLoaderCallout;
  result = wil::details::RtlNtStatusToDosErrorNoTeb;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (unsigned int (*)(int))wil::details::RtlNtStatusToDosErrorNoTeb;
  return result;
}
