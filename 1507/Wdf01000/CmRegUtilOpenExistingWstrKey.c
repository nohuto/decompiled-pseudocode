/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x1C00D5234
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1C00D4A54 (PiRegStateOpenClassKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00D4D84 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00A4DB0 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilOpenExistingUcKey @ 0x1C00D51DC (CmRegUtilOpenExistingUcKey.c)
 */

NTSTATUS __fastcall CmRegUtilOpenExistingWstrKey(
        void *BaseHandle,
        unsigned __int16 *KeyName,
        unsigned int DesiredAccess,
        void **Handle)
{
  NTSTATUS result; // eax
  void **v5; // r9
  ACCESS_MASK v6; // r10d
  void *v7; // r11
  _UNICODE_STRING unicodeStringKeyName; // [rsp+20h] [rbp-18h] BYREF

  result = WdmlibRtlInitUnicodeStringEx(&unicodeStringKeyName, KeyName);
  if ( result >= 0 )
    return CmRegUtilOpenExistingUcKey(v7, &unicodeStringKeyName, v6, v5);
  return result;
}
