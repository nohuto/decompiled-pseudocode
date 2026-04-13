/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeDesktopFamily__ @ 0x180001290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeDesktopFamily__())(wil::details *__hidden this, int)
{
  unsigned int (__fastcall *result)(wil::details *__hidden, int); // rax

  wil::details::g_pfnGetModuleName = (const char *(*)(void))wil::details::GetCurrentModuleName;
  wil::details::g_pfnFailFastInLoaderCallout = (void (*)(void))wil::details::FailFastInLoaderCallout;
  result = wil::details::RtlNtStatusToDosErrorNoTeb;
  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (unsigned int (*)(int))wil::details::RtlNtStatusToDosErrorNoTeb;
  return result;
}
