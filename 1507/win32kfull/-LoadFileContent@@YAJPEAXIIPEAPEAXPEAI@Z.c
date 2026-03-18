/*
 * XREFs of ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C013C2BC
 * Callers:
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C013BC18 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall LoadFileContent(HANDLE FileHandle, __int64 a2, __int64 a3, void **a4, unsigned int *a5)
{
  NTSTATUS v7; // eax
  unsigned int Length; // esi
  NTSTATUS Status; // ebx
  void *Buffer; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  _BYTE FileInformation[8]; // [rsp+60h] [rbp-48h] BYREF
  ULONG v14; // [rsp+68h] [rbp-40h]
  int v15; // [rsp+6Ch] [rbp-3Ch]

  v7 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  Length = v14;
  Status = v7;
  if ( v7 >= 0 )
  {
    if ( v15 || v14 - 64 > 0x3FFC0 )
      Status = -1073741672;
    if ( Status >= 0 )
    {
      Buffer = (void *)Win32AllocPool(v14, 1953198933LL);
      if ( !Buffer )
        Status = -1073741801;
      if ( Status >= 0 )
      {
        Status = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, gZero, 0LL);
        if ( Status >= 0 )
        {
          if ( IoStatusBlock.Status < 0 )
          {
            Status = IoStatusBlock.Status;
LABEL_11:
            if ( Status >= 0 )
            {
              *a4 = Buffer;
              *a5 = Length;
              return (unsigned int)Status;
            }
            goto LABEL_17;
          }
          if ( LODWORD(IoStatusBlock.Information) == Length )
            goto LABEL_11;
          Status = -1073741762;
        }
      }
LABEL_17:
      if ( Buffer )
        Win32FreePool(Buffer);
    }
  }
  return (unsigned int)Status;
}
