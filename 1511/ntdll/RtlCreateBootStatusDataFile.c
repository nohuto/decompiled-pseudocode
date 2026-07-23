/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800E2A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlGetNtProductType @ 0x1800743D0 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     wcscpy_s @ 0x1800A10C0 (wcscpy_s.c)
 *     NtWriteFile @ 0x1800A51C0 (NtWriteFile.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwCreateFile @ 0x1800A5B60 (ZwCreateFile.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS RtlCreateBootStatusDataFile(void)
{
  wchar_t *v0; // rcx
  wchar_t *v1; // rdx
  NTSTATUS result; // eax
  int v3; // ebx
  _BYTE Buffer[8]; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v10[16]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Destination[264]; // [rsp+110h] [rbp+10h] BYREF

  Buffer[0] = 0;
  if ( v0 )
  {
    v1 = v0;
  }
  else
  {
    wcscpy_s(Destination, 0x101uLL, L"\\SystemRoot\\bootstat.dat");
    v1 = Destination;
  }
  RtlInitUnicodeString(&DestinationString, v1);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ByteOffset.QuadPart = 67584LL;
  result = ZwCreateFile(
             &FileHandle,
             0x12019Fu,
             &ObjectAttributes,
             &IoStatusBlock,
             &ByteOffset,
             4u,
             0,
             2u,
             0x20u,
             0LL,
             0);
  if ( result >= 0 )
  {
    --ByteOffset.QuadPart;
    v3 = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 1u, &ByteOffset, 0LL);
    if ( v3 >= 0 )
    {
      memset(v10, 0, sizeof(v10));
      v10[0] = 64;
      RtlGetNtProductType((PNT_PRODUCT_TYPE)&v10[1]);
      ByteOffset.QuadPart = 0LL;
      *(_WORD *)((char *)&v10[2] + 1) = 286;
      BYTE1(v10[12]) = 1;
      v3 = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v10, 0x40u, &ByteOffset, 0LL);
    }
    NtClose(FileHandle);
    return v3;
  }
  return result;
}
