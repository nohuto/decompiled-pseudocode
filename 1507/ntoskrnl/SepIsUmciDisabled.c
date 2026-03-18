/*
 * XREFs of SepIsUmciDisabled @ 0x1406D08B0
 * Callers:
 *     SepInitializeDebugOptions @ 0x1407E5EE4 (SepInitializeDebugOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 */

bool SepIsUmciDisabled()
{
  bool v0; // bl
  HANDLE KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+37h] BYREF
  int v6; // [rsp+74h] [rbp+3Bh]
  int v7; // [rsp+78h] [rbp+3Fh]
  int v8; // [rsp+7Ch] [rbp+43h]

  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"jl";
  v0 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_1402ACE60,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v6 == 4
      && v7 == 4 )
    {
      v0 = v8 == 1;
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
