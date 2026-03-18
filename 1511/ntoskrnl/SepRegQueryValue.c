/*
 * XREFs of SepRegQueryValue @ 0x1403BEC3C
 * Callers:
 *     SepRegQueryDwordValue @ 0x1403BEBC8 (SepRegQueryDwordValue.c)
 *     SepAdtInitializeBounds @ 0x14049B55C (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14049B5D8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14049B63C (SepAdtInitializeCrashOnFail.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall SepRegQueryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, unsigned int a4, _DWORD *a5)
{
  size_t v6; // rsi
  NTSTATUS v8; // ebx
  int v9; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-90h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-78h] BYREF
  int v14; // [rsp+54h] [rbp-74h]
  int v15; // [rsp+58h] [rbp-70h]
  _DWORD Src[17]; // [rsp+5Ch] [rbp-6Ch] BYREF

  v6 = a4;
  RtlInitUnicodeString(&DestinationString, a2);
  v8 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x50u,
         &ResultLength);
  if ( v8 >= 0 )
  {
    if ( v14 == a3 && v15 == (_DWORD)v6 )
    {
      v9 = a3 - 3;
      if ( v9 )
      {
        if ( v9 == 1 && (unsigned int)v6 >= 4 )
          *a5 = Src[0];
        else
          return (unsigned int)-1073741811;
      }
      else
      {
        memmove(a5, Src, v6);
      }
    }
    else
    {
      return (unsigned int)-1073741788;
    }
  }
  return (unsigned int)v8;
}
