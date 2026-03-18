/*
 * XREFs of ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C0097C28
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C00975BC (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     GetWindowsDirectoryDevicePath @ 0x1C0097E5C (GetWindowsDirectoryDevicePath.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void *__fastcall ConvertHandleAndVerifyLoc(HANDLE Handle)
{
  PVOID v2; // rbx
  WCHAR *v3; // rdi
  NTSTATUS v4; // eax
  const WCHAR *v5; // rdx
  WCHAR *v6; // rdx
  WCHAR *v7; // rcx
  NTSTATUS v8; // eax
  void *v9; // rdx
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  void *FileHandle; // [rsp+78h] [rbp-90h] BYREF
  PVOID Object; // [rsp+80h] [rbp-88h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+E8h] [rbp-20h] BYREF

  FileHandle = 0LL;
  v2 = 0LL;
  v3 = (WCHAR *)Win32AllocPool(520LL);
  if ( v3 )
  {
    if ( Handle )
    {
      v4 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
      v2 = Object;
      if ( v4 >= 0 && ObQueryNameString(Object, &ObjectNameInfo, 0x218u, &ReturnLength) >= 0 )
      {
        Destination.Buffer = v3;
        *(_DWORD *)&Destination.Length = 34078720;
        if ( (int)GetWindowsDirectoryDevicePath(&Destination) >= 0 )
        {
          v5 = L"\\SysWOW64\\";
          if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x100) == 0 )
            v5 = L"\\system32\\";
          RtlAppendUnicodeToString(&Destination, v5);
          if ( !_wcsnicmp(ObjectNameInfo.Name.Buffer, Destination.Buffer, (unsigned __int64)Destination.Length >> 1) )
          {
            v6 = &ObjectNameInfo.Name.Buffer[(unsigned __int64)Destination.Length >> 1];
            v7 = &v6[(unsigned int)((unsigned __int64)(ObjectNameInfo.Name.Length - Destination.Length) >> 1)];
            while ( v6 < v7 )
            {
              if ( *v6 == 92 )
                goto LABEL_16;
              ++v6;
            }
            RtlInitUnicodeString(&DestinationString, ObjectNameInfo.Name.Buffer);
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 512;
            ObjectAttributes.ObjectName = &DestinationString;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v8 = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
            v9 = FileHandle;
            if ( v8 < 0 )
              v9 = 0LL;
            FileHandle = v9;
          }
        }
      }
    }
LABEL_16:
    Win32FreePool(v3);
    if ( v2 )
      ObfDereferenceObject(v2);
  }
  return FileHandle;
}
