/*
 * XREFs of ExpInitFullProcessSecurityInfo @ 0x140580644
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall ExpInitFullProcessSecurityInfo(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v4; // edi
  NTSTATUS v5; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-59h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+70h] [rbp-29h] BYREF
  unsigned int Size; // [rsp+78h] [rbp-21h]
  size_t Size_4; // [rsp+7Ch] [rbp-1Dh] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  v4 = 1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
    return 0;
  v5 = ZwQueryValueKey(
         KeyHandle,
         &stru_1402F3FD0,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x54u,
         &ResultLength);
  if ( v5 >= 0 )
  {
    if ( Size > 0x44 )
    {
      v5 = -1073741789;
    }
    else
    {
      memmove(&ExpFullProcessInformationSid, &Size_4, Size);
      *a3 = &ExpFullProcessInformationSid;
    }
  }
  ZwClose(KeyHandle);
  if ( v5 < 0 )
    return 0;
  return v4;
}
