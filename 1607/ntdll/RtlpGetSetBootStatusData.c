/*
 * XREFs of RtlpGetSetBootStatusData @ 0x180087EC0
 * Callers:
 *     RtlGetSetBootStatusData @ 0x180087D60 (RtlGetSetBootStatusData.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A64E0 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A6520 (NtWriteFile.c)
 */

NTSTATUS __fastcall RtlpGetSetBootStatusData(HANDLE FileHandle, char a2, int a3, void *a4, unsigned int a5, _DWORD *a6)
{
  unsigned __int64 v9; // rdi
  NTSTATUS result; // eax
  __int64 Length; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-89h] BYREF
  unsigned int Buffer; // [rsp+58h] [rbp-81h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-79h] BYREF
  int v15; // [rsp+70h] [rbp-69h]
  ULONG v16[31]; // [rsp+74h] [rbp-65h]

  v15 = 0;
  ByteOffset.QuadPart = 0LL;
  v9 = a3;
  v16[0] = 4;
  v16[1] = 4;
  v16[14] = 32;
  v16[28] = 32;
  v16[2] = 4;
  v16[4] = 1;
  v16[6] = 1;
  v16[8] = 1;
  v16[10] = 1;
  v16[12] = 1;
  v16[16] = 1;
  v16[18] = 1;
  v16[20] = 4;
  v16[22] = 4;
  v16[24] = 4;
  v16[30] = 1;
  v16[3] = 8;
  v16[5] = 9;
  v16[7] = 10;
  v16[9] = 11;
  v16[11] = 12;
  v16[13] = 16;
  v16[15] = 48;
  v16[17] = 49;
  v16[19] = 52;
  v16[21] = 56;
  v16[23] = 60;
  v16[25] = 64;
  v16[26] = 20;
  v16[27] = 88;
  v16[29] = 50;
  result = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    if ( (v9 & 0x80000000) != 0LL || v9 >= 0x10 )
    {
      return -1073741811;
    }
    else
    {
      Length = v16[2 * v9];
      ByteOffset.QuadPart = v16[2 * v9 - 1];
      if ( ByteOffset.QuadPart + Length > (unsigned __int64)Buffer )
      {
        return -1073741735;
      }
      else if ( a5 < (unsigned int)Length )
      {
        return -1073741789;
      }
      else
      {
        if ( a2 )
          result = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
        else
          result = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
        if ( result >= 0 )
        {
          if ( a6 )
            *a6 = IoStatusBlock.Information;
        }
      }
    }
  }
  return result;
}
