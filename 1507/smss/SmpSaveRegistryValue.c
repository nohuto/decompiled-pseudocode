/*
 * XREFs of SmpSaveRegistryValue @ 0x140009FA8
 * Callers:
 *     SmpConfigureOneTimeExecute @ 0x140009CB0 (SmpConfigureOneTimeExecute.c)
 *     SmpConfigureSubSystems @ 0x140009EA0 (SmpConfigureSubSystems.c)
 *     SmpConfigureDosDevices @ 0x140009F80 (SmpConfigureDosDevices.c)
 *     SmpConfigureExistingPageFiles @ 0x14000A8C0 (SmpConfigureExistingPageFiles.c)
 *     SmpConfigureExcludeKnownDlls @ 0x140011D20 (SmpConfigureExcludeKnownDlls.c)
 *     SmpConfigureExecute @ 0x140011DA0 (SmpConfigureExecute.c)
 *     SmpConfigureFileRenames @ 0x140011DF0 (SmpConfigureFileRenames.c)
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x14000A480 (SmpSaveRegistryValue_U.c)
 */

__int64 __fastcall SmpSaveRegistryValue(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned int a4, __int64 a5)
{
  struct _UNICODE_STRING *v8; // r8
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  v8 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(&v10, a3);
    v8 = &v10;
  }
  return SmpSaveRegistryValue_U(a1, &DestinationString, v8, a4, a5);
}
