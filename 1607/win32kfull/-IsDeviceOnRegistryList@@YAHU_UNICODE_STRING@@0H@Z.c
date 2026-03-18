/*
 * XREFs of ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C00E361C
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C00E34F0 (IsMouseDeviceOnIgnoreList.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C01C8E54 (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     ?CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x1C01C8C40 (-CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z.c)
 */

_BOOL8 __fastcall IsDeviceOnRegistryList(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2, int a3)
{
  BOOL v5; // edi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  ULONG v10; // r14d
  NTSTATUS v11; // r12d
  struct _KEY_VALUE_FULL_INFORMATION *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r13d
  void *KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v17; // [rsp+40h] [rbp-40h] BYREF
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
        v10 = 0;
        do
        {
          if ( v5 )
            break;
          v11 = ZwEnumerateValueKey(KeyHandle, v10, KeyValueFullInformation, 0LL, 0, &Length);
          if ( v11 != -1073741789 )
            break;
          v12 = (struct _KEY_VALUE_FULL_INFORMATION *)Win32AllocPoolZInit(Length, 2019914581LL);
          if ( v12 )
          {
            v11 = ZwEnumerateValueKey(KeyHandle, v10, KeyValueFullInformation, v12, Length, &Length);
            if ( v11 >= 0 )
            {
              v15 = *((unsigned __int8 *)&v12->TitleIndex + v12->DataOffset);
              if ( v15 - 1 <= 1
                && v12->Type == 4
                && v12->NameLength >= 0x2A
                && RtlCompareMemory(v12->Name, L"HID", 1uLL) )
              {
                v17 = *a2;
                v5 = CompareDeviceVIDPID(&v17, v12, v15) != 0;
              }
            }
            Win32FreePool(v12, v13, v14);
          }
          ++v10;
        }
        while ( v11 != -2147483622 );
      }
    }
    else
    {
      v7 = Win32AllocPool(ResultLength, 2019914581LL);
      if ( v7 )
      {
        if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)v7, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(v7 + 4) == 4 )
        {
          v5 = (unsigned __int8)(*(_BYTE *)(v7 + 12) - 1) <= 2u;
        }
        Win32FreePool(v7, v8, v9);
      }
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
