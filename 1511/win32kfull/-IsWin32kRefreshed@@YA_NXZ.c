/*
 * XREFs of ?IsWin32kRefreshed@@YA_NXZ @ 0x1C0150AE8
 * Callers:
 *     InitializeWin32PoolTracking @ 0x1C01129A0 (InitializeWin32PoolTracking.c)
 * Callees:
 *     Win32FileInfo @ 0x1C0011944 (Win32FileInfo.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

char IsWin32kRefreshed(void)
{
  char v0; // di
  WCHAR *PoolWithTag; // rbx
  ULONG v2; // ecx
  __int64 v3; // rax
  ULONG Length; // [rsp+38h] [rbp-69h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  struct _UNICODE_STRING String; // [rsp+48h] [rbp-59h] BYREF
  ULONGLONG Value; // [rsp+58h] [rbp-49h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-41h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+Fh] BYREF
  _WORD Data[20]; // [rsp+C0h] [rbp+1Fh] BYREF

  KeyHandle = 0LL;
  v0 = 1;
  if ( (unsigned int)Win32FileInfo(L"\\systemroot\\system32\\win32k.sys", &Value, 0LL) )
  {
    String.Buffer = Data;
    *(_DWORD *)&String.Length = 2228224;
    if ( RtlInt64ToUnicodeString(Value, 0x10u, &String) >= 0 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION\\WINDOWS");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Win32kLastWriteTime");
        Length = 46;
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPoolSession, 0x2EuLL, 0x746C7355u);
        if ( PoolWithTag )
        {
          if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, Length, &Length) < 0 )
            goto LABEL_11;
          v2 = Length;
          if ( *((_DWORD *)PoolWithTag + 2) >> 1 < Length )
            v2 = *((_DWORD *)PoolWithTag + 2) >> 1;
          Length = v2;
          if ( v2 > 1
            && PoolWithTag[6]
            && (PoolWithTag[v2 + 5] = 0,
                RtlInitUnicodeString(&String1, PoolWithTag + 6),
                !RtlCompareUnicodeString(&String1, &String, 0)) )
          {
            v0 = 0;
          }
          else
          {
LABEL_11:
            v3 = -1LL;
            do
              ++v3;
            while ( Data[v3] );
            if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, Data, 2 * v3 + 2) >= 0 )
              ZwFlushKey(KeyHandle);
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
