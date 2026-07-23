/*
 * XREFs of CmLogMcUpdateStatus @ 0x1401E0138
 * Callers:
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     NtOpenKey @ 0x1404F5530 (NtOpenKey.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1404FEDE4 (RtlIntegerToChar.c)
 *     CmpInitializeRegistryNode @ 0x1405A5A9C (CmpInitializeRegistryNode.c)
 */

__int64 __fastcall CmLogMcUpdateStatus(ULONG Value, __int64 a2)
{
  NTSTATUS v4; // eax
  HANDLE v5; // rsi
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  void *v8; // r15
  HANDLE v9; // rdi
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _STRING v16; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v17[18]; // [rsp+B0h] [rbp-50h] BYREF
  CHAR String[16]; // [rsp+100h] [rbp+0h] BYREF
  char v19; // [rsp+110h] [rbp+10h] BYREF

  ObjectAttributes.Attributes = 64;
  Handle = (HANDLE)-1LL;
  *(_QWORD *)&v16.Length = -1LL;
  KeyHandle = (HANDLE)-1LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = KeyHandle;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_14077FC70;
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenKey((PHANDLE)&v16, 0x20019u, &ObjectAttributes);
  v8 = *(void **)&v16.Length;
  v6 = v7;
  if ( v7 >= 0 )
  {
    RtlIntegerToChar(Value, 0xAu, 0xCu, String);
    RtlInitAnsiString(&v16, String);
    *(_DWORD *)&DestinationString.Length = 1572864;
    DestinationString.Buffer = (wchar_t *)&v19;
    RtlAnsiStringToUnicodeString(&DestinationString, &v16, 0);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) < 0 )
    {
      CmpConfigurationData = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      if ( !CmpConfigurationData )
      {
        v6 = -1073741670;
LABEL_6:
        v9 = Handle;
LABEL_13:
        if ( v9 != (HANDLE)-1LL )
          NtClose(v9);
        goto LABEL_15;
      }
      memset(v17, 0, sizeof(v17));
      v17[6] = 1;
      v17[7] = 1;
      v17[10] = Value;
      v6 = CmpInitializeRegistryNode(
             (unsigned int)v17,
             (_DWORD)v5,
             (unsigned int)&Handle,
             -1,
             -1,
             (__int64)&CmpDeviceIndexTable);
      ExFreePoolWithTag(CmpConfigurationData, 0);
      CmpConfigurationData = 0LL;
      if ( v6 < 0 )
        goto LABEL_6;
    }
    RtlInitUnicodeString(&ValueName, L"Update Revision");
    v9 = Handle;
    v6 = ZwSetValueKey(Handle, &ValueName, 0, 3u, (PVOID)(a2 + 8), 4u);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Previous Update Revision");
      v6 = ZwSetValueKey(v9, &ValueName, 0, 3u, (PVOID)(a2 + 12), 4u);
      if ( v6 >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Update Status");
        v6 = ZwSetValueKey(v9, &ValueName, 0, 4u, (PVOID)(a2 + 4), 4u);
        if ( v6 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Platform Specific Field 1");
          v6 = ZwSetValueKey(v9, &ValueName, 0, 4u, (PVOID)(a2 + 16), 4u);
          if ( v6 >= 0 )
          {
            RtlInitUnicodeString(&ValueName, L"Platform Specific Field 2");
            v6 = ZwSetValueKey(v9, &ValueName, 0, 3u, (PVOID)(a2 + 20), 4u);
          }
        }
      }
    }
    goto LABEL_13;
  }
LABEL_15:
  if ( v8 != (void *)-1LL )
    NtClose(v8);
LABEL_17:
  if ( v5 != (HANDLE)-1LL )
    NtClose(v5);
  return (unsigned int)v6;
}
