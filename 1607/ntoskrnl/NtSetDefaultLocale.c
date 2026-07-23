/*
 * XREFs of NtSetDefaultLocale @ 0x140549180
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x1401328A8 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1401328C8 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ExpCheckFullProcessInformationAccess @ 0x14048DB7C (ExpCheckFullProcessInformationAccess.c)
 *     MmSetSessionLocaleId @ 0x140549354 (MmSetSessionLocaleId.c)
 *     ExpValidateLocale @ 0x1406AC844 (ExpValidateLocale.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  __int64 v2; // r8
  __int64 v3; // r9
  NTSTATUS result; // eax
  HANDLE v7; // rax
  ULONG v8; // ecx
  int v9; // ebx
  LCID *v10; // rdx
  unsigned int j; // r11d
  unsigned __int16 v12; // cx
  unsigned int v13; // eax
  LCID v14; // r8d
  __int64 v15; // rdx
  _WORD *v16; // rcx
  _WORD *i; // rcx
  unsigned int v18; // eax
  __int16 v19; // ax
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v21; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v24; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _WORD KeyValueInformation[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v27; // [rsp+ACh] [rbp-5Ch]
  unsigned int v28; // [rsp+B0h] [rbp-58h]
  LCID v29; // [rsp+B4h] [rbp-54h] BYREF

  v21 = 0LL;
  if ( UserProfile )
  {
    result = OpenGlobalizationUserSettingsKey(UserProfile, 3u, v2, v3, &v21);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Locale");
    RtlInitUnicodeString(&v24, L"Control Panel\\International");
    v7 = v21;
    v8 = 1600;
  }
  else
  {
    result = ExpCheckFullProcessInformationAccess(KeGetCurrentThread()->PreviousMode);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Default");
    RtlInitUnicodeString(&v24, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
    v7 = 0LL;
    v8 = 576;
    v21 = 0LL;
  }
  ObjectAttributes.RootDirectory = v7;
  ObjectAttributes.ObjectName = &v24;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( DefaultLocaleId )
  {
    v9 = ExpValidateLocale(DefaultLocaleId);
    if ( v9 < 0 )
      goto LABEL_17;
    v9 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
    if ( v9 < 0 )
      goto LABEL_17;
    v14 = DefaultLocaleId;
    v15 = UserProfile != 0 ? 8 : 4;
    v16 = &KeyValueInformation[v15];
    *v16 = 0;
    for ( i = v16 - 1; i >= KeyValueInformation; v14 >>= 4 )
    {
      v18 = v14 & 0xF;
      if ( v18 > 9 )
        v19 = v18 + 55;
      else
        v19 = v18 + 48;
      *i-- = v19;
    }
    v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, KeyValueInformation, 2 * v15 + 2);
    goto LABEL_16;
  }
  v9 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    v9 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength);
    if ( v9 >= 0 )
    {
      if ( v27 == 1 )
      {
        v10 = &v29;
        for ( j = 0; j < v28; DefaultLocaleId = v13 | (16 * DefaultLocaleId) )
        {
          v12 = *(_WORD *)v10;
          v10 = (LCID *)((char *)v10 + 2);
          if ( (unsigned __int16)(v12 - 48) > 9u )
          {
            if ( (unsigned __int16)(v12 - 65) <= 5u )
            {
              v13 = v12 - 55;
            }
            else
            {
              if ( (unsigned __int16)(v12 - 97) > 5u )
                break;
              v13 = v12 - 87;
            }
          }
          else
          {
            v13 = v12 - 48;
          }
          if ( v13 >= 0x10 )
            break;
          j += 2;
        }
      }
      else if ( v27 == 4 && v28 == 4 )
      {
        DefaultLocaleId = v29;
      }
      else
      {
        v9 = -1073741823;
      }
    }
LABEL_16:
    ZwClose(KeyHandle);
  }
LABEL_17:
  if ( v21 )
    CloseGlobalizationUserSettingsKey((char *)v21);
  if ( v9 >= 0 )
  {
    if ( UserProfile )
      MmSetSessionLocaleId(DefaultLocaleId);
    else
      PsDefaultSystemLocaleId = DefaultLocaleId;
  }
  return v9;
}
