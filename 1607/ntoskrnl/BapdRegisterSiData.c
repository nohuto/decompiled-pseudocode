/*
 * XREFs of BapdRegisterSiData @ 0x1403D2D20
 * Callers:
 *     PopBootLoaderSiData @ 0x1403D2484 (PopBootLoaderSiData.c)
 *     BapdpProcessSiData @ 0x1407A979C (BapdpProcessSiData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 */

void __fastcall BapdRegisterSiData(ULONG *a1, unsigned int a2, int a3)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  char *Data; // rsi
  char *v9; // r15
  char *v10; // rbx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  if ( a1 )
  {
    KeyHandle = 0LL;
    Handle = 0LL;
    v4 = a2;
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"IntegrityServices");
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateKey(&Handle, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
      {
        ZwClose(KeyHandle);
        KeyHandle = 0LL;
        if ( a1 != (ULONG *)-4LL && *a1 )
        {
          RtlInitUnicodeString(&DestinationString, L"WBCL");
          ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1 + 1, *a1);
        }
        v6 = *a1 + 4;
        v7 = v6;
        if ( v4 >= v6 + 32 && *(ULONG *)((char *)a1 + v6) == 32 && *(ULONG *)((char *)a1 + v6 + 4) == 1 )
        {
          RtlInitUnicodeString(&DestinationString, L"EventCount");
          Data = (char *)a1 + v7 + 8;
          ZwSetValueKey(Handle, &DestinationString, 0, 0xBu, Data, 8u);
          RtlInitUnicodeString(&DestinationString, L"BootCount");
          v9 = (char *)a1 + v7 + 16;
          ZwSetValueKey(Handle, &DestinationString, 0, 0xBu, v9, 8u);
          RtlInitUnicodeString(&DestinationString, L"CounterId");
          v10 = (char *)a1 + v7 + 24;
          ZwSetValueKey(Handle, &DestinationString, 0, 0xBu, v10, 8u);
          if ( !a3 )
          {
            RtlInitUnicodeString(&DestinationString, L"InitialEventCount");
            ZwSetValueKey(Handle, &DestinationString, 0, 0xBu, Data, 8u);
            RtlInitUnicodeString(&DestinationString, L"InitialBootCount");
            ZwSetValueKey(Handle, &DestinationString, 0, 0xBu, v9, 8u);
            RtlInitUnicodeString(&DestinationString, L"InitialCounterId");
            ZwSetValueKey(Handle, &DestinationString, 0, 0xBu, v10, 8u);
          }
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Handle )
      ZwClose(Handle);
  }
}
