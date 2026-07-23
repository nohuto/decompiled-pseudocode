/*
 * XREFs of PfpPrefetchEntireDirectory @ 0x1404EB790
 * Callers:
 *     PfSnPrefetchMetadata @ 0x1404EB4C8 (PfSnPrefetchMetadata.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     NtFsControlFile @ 0x1404EB46C (NtFsControlFile.c)
 *     IoQueryFileInformation @ 0x1404ED090 (IoQueryFileInformation.c)
 *     PfpOpenHandleClose @ 0x1404ED298 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1404ED318 (PfpOpenHandleCreate.c)
 */

__int64 PfpPrefetchEntireDirectory(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, ...)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  NTSTATUS v10; // ebx
  _QWORD *v11; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle[4]; // [rsp+60h] [rbp-20h] BYREF
  __int64 FileInformation; // [rsp+C0h] [rbp+40h] BYREF
  va_list FileInformationa; // [rsp+C0h] [rbp+40h]
  va_list va1; // [rsp+C8h] [rbp+48h] BYREF

  va_start(va1, a4);
  va_start(FileInformationa, a4);
  FileInformation = va_arg(va1, _QWORD);
  memset(FileHandle, 0, sizeof(FileHandle));
  FileHandle[3] = (HANDLE)((unsigned __int64)FileHandle[3] | 0x200000000LL);
  v8 = PfpOpenHandleCreate(
         (unsigned int)FileHandle,
         a1,
         *(_QWORD *)(FileInformation + 16),
         *(_QWORD *)(FileInformation + 8),
         1048577,
         16417,
         0,
         a2);
  v9 = (unsigned __int64)FileHandle[3];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( a4 )
    {
      v11 = FileHandle[1];
      if ( IoQueryFileInformation(
             (PFILE_OBJECT)FileHandle[1],
             FileInternalInformation,
             8u,
             FileInformationa,
             (PULONG)va1) >= 0 )
      {
        *(_QWORD *)(a4 + 12) = FileInformation;
        *(_QWORD *)a4 = v11[3];
        *(_DWORD *)(a4 + 8) = v9;
      }
    }
    v10 = NtFsControlFile(FileHandle[0], 0LL, 0LL, 0LL, &IoStatusBlock, 0x90120u, a3, 8 * a3[1] + 16, 0LL, 0);
    if ( v10 >= 0 )
      v10 = 0;
  }
  if ( (v9 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(FileHandle, a1);
  return (unsigned int)v10;
}
