/*
 * XREFs of SmpCopyFile @ 0x140010880
 * Callers:
 *     SmpSavePageFile @ 0x1400115C4 (SmpSavePageFile.c)
 * Callees:
 *     SmpQueryFileSize @ 0x140010FB4 (SmpQueryFileSize.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x1400116A4 (SmpSetDumpSecurityAndAttributes.c)
 */

__int64 __fastcall SmpCopyFile(HANDLE FileHandle, struct _UNICODE_STRING *a2)
{
  NTSTATUS v4; // ebx
  union _LARGE_INTEGER v5; // rdi
  union _LARGE_INTEGER v6; // rsi
  ULONG v7; // r14d
  void *v8; // rcx
  PVOID BaseAddress; // [rsp+60h] [rbp-39h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-31h] BYREF
  union _LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp-29h] BYREF
  union _LARGE_INTEGER v13; // [rsp+78h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-9h] BYREF
  char FileInformation; // [rsp+110h] [rbp+77h] BYREF
  void *FileHandlea; // [rsp+118h] [rbp+7Fh] BYREF

  RegionSize = 0x100000LL;
  FileHandlea = 0LL;
  BaseAddress = 0LL;
  v4 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v4 >= 0 )
  {
    v4 = SmpQueryFileSize(FileHandle, &v13);
    if ( v4 >= 0 )
    {
      v5 = v13;
      if ( !v13.QuadPart || v13.QuadPart % (unsigned __int64)(unsigned int)dword_140025A88 )
      {
        v4 = -1073741672;
      }
      else
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = a2;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v4 = NtCreateFile(&FileHandlea, 0xC0150000, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 0, 0x68u, 0LL, 0);
        if ( v4 >= 0 )
        {
          v4 = SmpSetDumpSecurityAndAttributes(FileHandlea);
          if ( v4 >= 0 )
          {
            for ( v6.QuadPart = 0LL; v6.QuadPart < (unsigned __int64)v5.QuadPart; v6.QuadPart += v7 )
            {
              v7 = 0x100000;
              if ( v5.QuadPart - v6.QuadPart < 0x100000uLL )
                v7 = v5.LowPart - v6.LowPart;
              ByteOffset = v6;
              v4 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, BaseAddress, v7, &ByteOffset, 0LL);
              if ( v4 < 0 )
                break;
              if ( IoStatusBlock.Information != v7 )
                goto LABEL_17;
              v4 = NtWriteFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, BaseAddress, v7, &ByteOffset, 0LL);
              if ( v4 < 0 )
                break;
              if ( IoStatusBlock.Information != v7 )
              {
LABEL_17:
                v4 = -1073741823;
                break;
              }
            }
          }
        }
      }
    }
  }
  v8 = FileHandlea;
  if ( FileHandlea )
  {
    if ( v4 < 0 )
    {
      FileInformation = 1;
      NtSetInformationFile(FileHandlea, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
      v8 = FileHandlea;
    }
    NtClose(v8);
  }
  if ( BaseAddress )
  {
    RegionSize = 0LL;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v4;
}
