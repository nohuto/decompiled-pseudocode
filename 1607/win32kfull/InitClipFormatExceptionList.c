/*
 * XREFs of InitClipFormatExceptionList @ 0x1C012CFE0
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
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // rcx
  ULONG v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
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
    v0 = (_DWORD *)Win32AllocPool(Length, 1650684757LL);
    if ( v0 )
    {
      if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0 )
      {
        v6 = v0[8];
        if ( v6 )
        {
          gcClipFormatExceptionList = v0[8];
          if ( v6 <= 0x1FFF )
          {
            v7 = Win32AllocPool(4LL * v6, 1650684757LL);
            v8 = (__int64 *)gpClipFormatExceptionList;
            gpClipFormatExceptionList = v7;
            if ( !v7 )
              goto LABEL_24;
            v5 = (unsigned int)v0[10];
            if ( (unsigned int)v5 >= 0xFFFFFFF0 )
              goto LABEL_24;
            v1 = (_DWORD *)Win32AllocPool(v5 + 16, 1650684757LL);
            if ( v1 )
            {
              v9 = 0;
              if ( gcClipFormatExceptionList )
              {
                while ( ZwEnumerateValueKey(KeyHandle, v9, KeyValuePartialInformation, v1, v0[10] + 16, &Length) >= 0 )
                {
                  v10 = v1[1];
                  if ( v10 == 4 )
                  {
                    v4 = v9;
                    *(_DWORD *)(gpClipFormatExceptionList + 4LL * v9) = v1[3];
                  }
                  else if ( v10 == 1 )
                  {
                    *((_WORD *)v1 + (unsigned int)v1[2] + 6) = 0;
                    v12 = UserAddAtomEx(v1 + 3, 1LL, 2LL);
                    if ( !v12 )
                      break;
                    v5 = v12;
                    v4 = v9;
                    *(_DWORD *)(gpClipFormatExceptionList + 4LL * v9) = v12;
                  }
                  if ( ++v9 >= gcClipFormatExceptionList )
                    goto LABEL_15;
                }
                gcClipFormatExceptionList = v9;
              }
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  v8 = (__int64 *)gpClipFormatExceptionList;
LABEL_24:
  v11 = *v8;
  if ( v11 )
  {
    Win32FreePool(v11, v4, v5);
    gpClipFormatExceptionList = 0LL;
  }
  gcClipFormatExceptionList = 0;
LABEL_15:
  if ( v1 )
    Win32FreePool(v1, v4, v5);
  if ( v0 )
    Win32FreePool(v0, v4, v5);
  return ZwClose(KeyHandle);
}
