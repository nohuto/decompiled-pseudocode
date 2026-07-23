/*
 * XREFs of ZwQueryDefaultLocale @ 0x14015A490
 * Callers:
 *     NtInitializeNlsFiles @ 0x1404B66CC (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile);
}
