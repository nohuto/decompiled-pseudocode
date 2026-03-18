/*
 * XREFs of InitClipFormatExceptionList @ 0x1C010BD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int InitClipFormatExceptionList()
{
  _DWORD *v0; // rdi
  _DWORD *v1; // rsi
  int result; // eax
  NTSTATUS v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // r8
  ULONG v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v0 = 0LL;
  v1 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\ExceptionFormats");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  v3 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( v3 == -1073741789 || v3 == -2147483643 )
  {
    v0 = (_DWORD *)Win32AllocPool(Length);
    if ( v0 )
    {
      if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0 )
      {
        v4 = v0[8];
        if ( v4 )
        {
          gcClipFormatExceptionList = v0[8];
          if ( v4 <= 0x1FFF )
          {
            v5 = Win32AllocPool(4LL * v4);
            v6 = (__int64 *)gpClipFormatExceptionList;
            gpClipFormatExceptionList = v5;
            if ( !v5 )
              goto LABEL_24;
            v7 = (unsigned int)v0[10];
            if ( (unsigned int)v7 >= 0xFFFFFFF0 )
              goto LABEL_24;
            v1 = (_DWORD *)Win32AllocPool(v7 + 16);
            if ( v1 )
            {
              v8 = 0;
              if ( gcClipFormatExceptionList )
              {
                while ( ZwEnumerateValueKey(KeyHandle, v8, KeyValuePartialInformation, v1, v0[10] + 16, &Length) >= 0 )
                {
                  v9 = v1[1];
                  if ( v9 == 4 )
                  {
                    *(_DWORD *)(gpClipFormatExceptionList + 4LL * v8) = v1[3];
                  }
                  else if ( v9 == 1 )
                  {
                    *((_WORD *)v1 + (unsigned int)v1[2] + 6) = 0;
                    v11 = UserAddAtomEx(v1 + 3, 1LL, 2LL);
                    if ( !v11 )
                      break;
                    *(_DWORD *)(gpClipFormatExceptionList + 4LL * v8) = v11;
                  }
                  if ( ++v8 >= gcClipFormatExceptionList )
                    goto LABEL_15;
                }
                gcClipFormatExceptionList = v8;
              }
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  v6 = (__int64 *)gpClipFormatExceptionList;
LABEL_24:
  v10 = *v6;
  if ( v10 )
  {
    Win32FreePool(v10);
    gpClipFormatExceptionList = 0LL;
  }
  gcClipFormatExceptionList = 0;
LABEL_15:
  if ( v1 )
    Win32FreePool(v1);
  if ( v0 )
    Win32FreePool(v0);
  return ZwClose(KeyHandle);
}
