/*
 * XREFs of PnpCopyDeviceInstancePath @ 0x14054B8D0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpCopyDeviceInstancePath(__int64 a1, const UNICODE_STRING *a2)
{
  RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 40), a2);
}
