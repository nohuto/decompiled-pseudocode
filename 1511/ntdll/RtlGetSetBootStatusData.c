/*
 * XREFs of RtlGetSetBootStatusData @ 0x1800849E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A5180 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A51C0 (NtWriteFile.c)
 */

NTSTATUS __cdecl RtlGetSetBootStatusData(
        HANDLE FileHandle,
        BOOLEAN Read,
        RTL_BSD_ITEM_TYPE DataClass,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  unsigned __int64 v9; // rbx
  NTSTATUS result; // eax
  __int64 Length; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v13; // [rsp+58h] [rbp-71h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-69h] BYREF
  int v15; // [rsp+70h] [rbp-59h]
  ULONG v16[27]; // [rsp+74h] [rbp-55h]

  v15 = 0;
  ByteOffset.QuadPart = 0LL;
  v9 = DataClass;
  v16[0] = 4;
  v16[4] = 1;
  v16[6] = 1;
  v16[8] = 1;
  v16[10] = 1;
  v16[12] = 1;
  v16[16] = 1;
  v16[18] = 1;
  v16[1] = 4;
  v16[2] = 4;
  v16[20] = 4;
  v16[22] = 4;
  v16[24] = 4;
  v16[3] = 8;
  v16[5] = 9;
  v16[7] = 10;
  v16[9] = 11;
  v16[11] = 12;
  v16[13] = 16;
  v16[14] = 32;
  v16[15] = 48;
  v16[17] = 49;
  v16[19] = 52;
  v16[21] = 56;
  v16[23] = 60;
  result = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &v13, 4u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    if ( (v9 & 0x80000000) != 0LL || v9 >= 0xD )
    {
      return -1073741811;
    }
    else
    {
      Length = v16[2 * v9];
      ByteOffset.QuadPart = v16[2 * v9 - 1];
      if ( ByteOffset.QuadPart + Length > (unsigned __int64)v13 )
      {
        return -1073741735;
      }
      else if ( BufferSize < (unsigned int)Length )
      {
        return -1073741789;
      }
      else
      {
        if ( Read )
          result = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
        else
          result = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
        if ( result >= 0 )
        {
          if ( ReturnLength )
            *ReturnLength = IoStatusBlock.Information;
        }
      }
    }
  }
  return result;
}
