/*
 * XREFs of ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C00E6C0C
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C00E66F4 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     GetWindowsDirectoryDevicePath @ 0x1C00E6E38 (GetWindowsDirectoryDevicePath.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void *__fastcall ConvertHandleAndVerifyLoc(HANDLE Handle)
{
  PVOID v2; // rbx
  WCHAR *v3; // rdx
  WCHAR *v4; // rdi
  PWSTR Buffer; // r8
  NTSTATUS v6; // eax
  const WCHAR *v7; // rdx
  WCHAR *v8; // rcx
  NTSTATUS v9; // eax
  __int16 ProcessMachine; // ax
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  void *FileHandle; // [rsp+78h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+E8h] [rbp-20h] BYREF

  FileHandle = 0LL;
  v2 = 0LL;
  v4 = (WCHAR *)Win32AllocPool(520LL, 1651209045LL);
  if ( !v4 )
    return FileHandle;
  if ( Handle )
  {
    v6 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
    v2 = Object;
    if ( v6 >= 0 && ObQueryNameString(Object, &ObjectNameInfo, 0x218u, &ReturnLength) >= 0 )
    {
      Destination.Buffer = v4;
      *(_DWORD *)&Destination.Length = 34078720;
      if ( (int)GetWindowsDirectoryDevicePath(&Destination) >= 0 )
      {
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x100) == 0 )
        {
LABEL_7:
          v7 = L"\\system32\\";
          goto LABEL_8;
        }
        ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 376LL));
        if ( ProcessMachine == 332 )
        {
          v7 = L"\\SysWoW64\\";
        }
        else
        {
          if ( ProcessMachine != 452 )
            goto LABEL_7;
          v7 = L"\\SysArm32\\";
        }
LABEL_8:
        RtlAppendUnicodeToString(&Destination, v7);
        if ( !_wcsnicmp(ObjectNameInfo.Name.Buffer, Destination.Buffer, (unsigned __int64)Destination.Length >> 1) )
        {
          Buffer = ObjectNameInfo.Name.Buffer;
          v3 = &ObjectNameInfo.Name.Buffer[(unsigned __int64)Destination.Length >> 1];
          v8 = &v3[(unsigned int)((unsigned __int64)(ObjectNameInfo.Name.Length - Destination.Length) >> 1)];
          while ( v3 < v8 )
          {
            if ( *v3 == 92 )
              goto LABEL_16;
            ++v3;
          }
          RtlInitUnicodeString(&DestinationString, ObjectNameInfo.Name.Buffer);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 512;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v9 = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
          v3 = (WCHAR *)FileHandle;
          if ( v9 < 0 )
            v3 = 0LL;
          FileHandle = v3;
        }
      }
    }
  }
LABEL_16:
  Win32FreePool(v4, v3, Buffer);
  if ( v2 )
    ObfDereferenceObject(v2);
  return FileHandle;
}
