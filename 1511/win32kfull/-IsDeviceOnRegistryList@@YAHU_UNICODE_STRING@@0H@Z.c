/*
 * XREFs of ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C0095A2C
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C00958FC (IsMouseDeviceOnIgnoreList.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C01D02C4 (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     ?CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x1C01CFD6C (-CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z.c)
 */

_BOOL8 __fastcall IsDeviceOnRegistryList(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2, int a3)
{
  BOOL v5; // edi
  __int64 v7; // rsi
  ULONG v8; // r14d
  NTSTATUS v9; // r12d
  struct _KEY_VALUE_FULL_INFORMATION *v10; // rsi
  unsigned int v11; // r13d
  void *KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v13; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+40h] BYREF
  ULONG Length; // [rsp+D8h] [rbp+58h] BYREF

  ResultLength = 0;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  v5 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741772
      || !ResultLength )
    {
      if ( a3 && a2->Length >= 0x2Au )
      {
        v8 = 0;
        do
        {
          if ( v5 )
            break;
          v9 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, 0LL, 0, &Length);
          if ( v9 != -1073741789 )
            break;
          v10 = (struct _KEY_VALUE_FULL_INFORMATION *)Win32AllocPoolZInit(Length, 2019914581LL);
          if ( v10 )
          {
            v9 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, v10, Length, &Length);
            if ( v9 >= 0 )
            {
              v11 = *((unsigned __int8 *)&v10->TitleIndex + v10->DataOffset);
              if ( v11 - 1 <= 1
                && v10->Type == 4
                && v10->NameLength >= 0x2A
                && RtlCompareMemory(v10->Name, L"HID", 1uLL) )
              {
                v13 = *a2;
                v5 = CompareDeviceVIDPID(&v13, v10, v11) != 0;
              }
            }
            Win32FreePool(v10);
          }
          ++v8;
        }
        while ( v9 != -2147483622 );
      }
    }
    else
    {
      v7 = Win32AllocPool(ResultLength);
      if ( v7 )
      {
        if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)v7, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(v7 + 4) == 4 )
        {
          v5 = (unsigned __int8)(*(_BYTE *)(v7 + 12) - 1) <= 2u;
        }
        Win32FreePool(v7);
      }
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
