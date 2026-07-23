/*
 * XREFs of ZwQueryDefaultLocale @ 0x14017F290
 * Callers:
 *     NtInitializeNlsFiles @ 0x140465080 (NtInitializeNlsFiles.c)
 *     VfZwQueryDefaultLocale @ 0x140756EB8 (VfZwQueryDefaultLocale.c)
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
