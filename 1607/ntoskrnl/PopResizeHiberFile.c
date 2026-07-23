/*
 * XREFs of PopResizeHiberFile @ 0x14052F3EC
 * Callers:
 *     PopAdjustHiberFile @ 0x14052EF58 (PopAdjustHiberFile.c)
 *     PopEnlargeHiberFile @ 0x14052F674 (PopEnlargeHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     PopValidateHiberFileSize @ 0x14052F520 (PopValidateHiberFileSize.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140547288 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x140547F0C (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x140548934 (PopSetHiberFileMcb.c)
 */

__int64 __fastcall PopResizeHiberFile(signed __int64 a1, _QWORD *a2)
{
  int v4; // ecx
  signed __int64 v5; // rax
  NTSTATUS Status; // ecx
  ULONG_PTR v8; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+28h] BYREF
  ULONG_PTR v12; // [rsp+80h] [rbp+30h] BYREF
  signed __int64 FileInformation; // [rsp+88h] [rbp+38h] BYREF

  if ( !FileObject )
    goto LABEL_17;
  if ( qword_1403034D0 == a1 )
  {
LABEL_15:
    Status = 0;
    goto LABEL_16;
  }
  v4 = PopValidateHiberFileSize(a1, &NumberOfBytes);
  v5 = NumberOfBytes;
  if ( v4 >= 0 )
    v5 = a1;
  v12 = v5;
  if ( v5 <= 0 )
  {
LABEL_17:
    Status = -1073741823;
    goto LABEL_16;
  }
  FileInformation = v5;
  Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v8 = v12;
    Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &v8, 8u, FileEndOfFileInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Status = PopSanityCheckHiberFile(
                 (_DWORD)PopHiberInfo,
                 (_DWORD)FileObject,
                 (unsigned int)&v12,
                 (unsigned int)&P,
                 (__int64)&NumberOfBytes);
      if ( Status >= 0 )
      {
        Status = PopSetHiberFileMcb(P, (unsigned int)NumberOfBytes);
        if ( Status >= 0 )
        {
          qword_1403034D0 = v12;
          FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)FileObject);
          goto LABEL_15;
        }
      }
    }
  }
LABEL_16:
  *a2 = qword_1403034D0;
  return (unsigned int)Status;
}
