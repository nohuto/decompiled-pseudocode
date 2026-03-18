/*
 * XREFs of RIMCALMInitializeCALM @ 0x1C007215C
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0072410 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

int __fastcall RIMCALMInitializeCALM(_QWORD *a1)
{
  int result; // eax
  __int64 v3; // rbx
  __int64 v4; // rbx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xDu,
    (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids);
  a1 += 76;
  memset(a1, 0, 0x28uLL);
  a1[1] = a1;
  *a1 = a1;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\FastInputSwitching");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"Disable");
    ResultLength = 0;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
    {
      if ( ResultLength )
      {
        v3 = Win32AllocPool();
        if ( v3 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 (PVOID)v3,
                 ResultLength,
                 &ResultLength) >= 0
            && *(_DWORD *)(v3 + 4) == 4
            && *(_BYTE *)(v3 + 12) == 1 )
          {
            gFastSwitchingEnabled = 0;
          }
          Win32FreePool();
        }
      }
    }
    RtlInitUnicodeString(&ValueName, L"DetectHandedness");
    ResultLength = 0;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
    {
      if ( ResultLength )
      {
        v4 = Win32AllocPool();
        if ( v4 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 (PVOID)v4,
                 ResultLength,
                 &ResultLength) >= 0
            && *(_DWORD *)(v4 + 4) == 4
            && *(_BYTE *)(v4 + 12) == 1 )
          {
            gDetectHandedness = 1;
          }
          Win32FreePool();
        }
      }
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
