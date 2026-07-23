/*
 * XREFs of ZwQueryDefaultLocale @ 0x1401508C0
 * Callers:
 *     NtInitializeNlsFiles @ 0x1404625A4 (NtInitializeNlsFiles.c)
 *     VfZwQueryDefaultLocale @ 0x1406D32F0 (VfZwQueryDefaultLocale.c)
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
