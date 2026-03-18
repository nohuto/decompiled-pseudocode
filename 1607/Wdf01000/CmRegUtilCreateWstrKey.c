/*
 * XREFs of CmRegUtilCreateWstrKey @ 0x1C00CD194
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1C00CCB3C (PiRegStateOpenClassKey.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00CCFB0 (PpRegStateUpdateStackCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C009CE04 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilCreateUcKey @ 0x1C00CD0F8 (CmRegUtilCreateUcKey.c)
 */

__int64 __fastcall CmRegUtilCreateWstrKey(
        void *BaseHandle,
        wchar_t *KeyName,
        unsigned int SecurityDescriptor,
        unsigned int Disposition,
        void *Handle,
        unsigned int *BaseHandle_0,
        void **KeyName_0)
{
  __int64 result; // rax
  unsigned int v8; // r8d
  void *v9; // r9
  _UNICODE_STRING unicodeStringKeyName; // [rsp+40h] [rbp-18h] BYREF

  result = WdmlibRtlInitUnicodeStringEx(&unicodeStringKeyName, KeyName);
  if ( (int)result >= 0 )
    return CmRegUtilCreateUcKey(v9, &unicodeStringKeyName, v8, (unsigned int)v9, Handle, BaseHandle_0, KeyName_0);
  return result;
}
