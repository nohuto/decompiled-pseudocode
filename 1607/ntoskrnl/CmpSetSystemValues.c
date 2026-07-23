/*
 * XREFs of CmpSetSystemValues @ 0x1407AE99C
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     NtOpenKey @ 0x140414318 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14056022C (RtlCreateUnicodeStringFromAsciiz.c)
 */

__int64 __fastcall CmpSetSystemValues(__int64 a1)
{
  NTSTATUS v2; // eax
  HANDLE v3; // rdi
  NTSTATUS v4; // ebx
  BOOLEAN v5; // al
  wchar_t *Buffer; // rsi
  BOOLEAN v7; // al
  int Data; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+98h] [rbp-70h] BYREF

  ObjectAttributes.Length = 48;
  KeyHandle = 0LL;
  Destination.Buffer = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"df";
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v3 = KeyHandle;
  v4 = v2;
  if ( v2 < 0 )
    goto LABEL_16;
  v4 = NtSetValueKey(
         KeyHandle,
         (PUNICODE_STRING)&CmpSystemStartOptionsString,
         0,
         1u,
         CmpLoadOptions.Buffer,
         CmpLoadOptions.Length);
  if ( v4 < 0 )
    goto LABEL_16;
  v5 = RtlCreateUnicodeStringFromAsciiz(&Destination, *(PCSZ *)(a1 + 184));
  Buffer = Destination.Buffer;
  if ( v5 )
  {
    v4 = NtSetValueKey(
           v3,
           (PUNICODE_STRING)&CmpSystemBootDeviceString,
           0,
           1u,
           Destination.Buffer,
           Destination.Length + 2);
    if ( v4 < 0 )
      goto LABEL_14;
    if ( Buffer )
    {
      RtlFreeAnsiString(&Destination);
      Destination.Buffer = 0LL;
    }
    v7 = RtlCreateUnicodeStringFromAsciiz(&Destination, *(PCSZ *)(a1 + 192));
    Buffer = Destination.Buffer;
    if ( v7 )
    {
      v4 = NtSetValueKey(
             v3,
             (PUNICODE_STRING)&CmpFirmwareBootDeviceString,
             0,
             1u,
             Destination.Buffer,
             Destination.Length + 2);
      if ( v4 >= 0 )
      {
        Data = *(_BYTE *)(*(_QWORD *)(a1 + 240) + 116LL) & 1;
        v4 = NtSetValueKey(v3, (PUNICODE_STRING)&CmpLastBootSucceededString, 0, 4u, &Data, 4u);
        if ( v4 >= 0 )
        {
          Data = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 240) + 116LL) >> 1) & 1;
          v4 = NtSetValueKey(v3, (PUNICODE_STRING)&CmpLastBootShutdownString, 0, 4u, &Data, 4u);
          if ( v4 >= 0 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 2) == 0 )
            {
              if ( NtQueryValueKey(
                     v3,
                     (PUNICODE_STRING)&CmpDirtyShutdownCountString,
                     KeyValueFullInformation,
                     KeyValueInformation,
                     0x100u,
                     &ResultLength) >= 0
                && KeyValueInformation[1] == 4 )
              {
                v10 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1;
              }
              else
              {
                v10 = 1;
              }
              v4 = NtSetValueKey(v3, (PUNICODE_STRING)&CmpDirtyShutdownCountString, 0, 4u, &v10, 4u);
            }
            if ( v4 >= 0 )
              v4 = 0;
          }
        }
      }
      goto LABEL_14;
    }
  }
  v4 = -1073741823;
LABEL_14:
  if ( Buffer )
    RtlFreeAnsiString(&Destination);
LABEL_16:
  if ( v3 )
    NtClose(v3);
  return (unsigned int)v4;
}
