/*
 * XREFs of IopValidateJunctionTarget @ 0x1403E2B58
 * Callers:
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 * Callees:
 *     FsRtlValidateReparsePointBuffer @ 0x140008118 (FsRtlValidateReparsePointBuffer.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x14009A334 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     IoVolumeDeviceToDosName @ 0x1404EB0DC (IoVolumeDeviceToDosName.c)
 *     IoQueryFileInformation @ 0x1404ED090 (IoQueryFileInformation.c)
 *     IoVolumeDeviceToGuidPath @ 0x14052D58C (IoVolumeDeviceToGuidPath.c)
 */

__int64 __fastcall IopValidateJunctionTarget(void *Src, ULONG BufferLength, ULONG a3, _QWORD *a4, _DWORD *a5)
{
  char *v7; // r12
  wchar_t *PoolWithTag; // rsi
  _REPARSE_DATA_BUFFER *PoolWithQuota_0; // r14
  int appended; // ebx
  PDEVICE_OBJECT DeviceObject; // r13
  char v12; // r15
  ULONG v13; // r15d
  unsigned __int16 Length; // r13
  unsigned int v15; // ebx
  ULONG v16; // r15d
  ULONG v17; // eax
  unsigned int v18; // ecx
  char v20; // [rsp+30h] [rbp-118h]
  UNICODE_STRING v21; // [rsp+40h] [rbp-108h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-F8h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-F0h] BYREF
  _REPARSE_DATA_BUFFER *v24; // [rsp+68h] [rbp-E0h]
  char *v25; // [rsp+70h] [rbp-D8h]
  HANDLE FileHandle; // [rsp+78h] [rbp-D0h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-C8h] BYREF
  UNICODE_STRING DosName; // [rsp+90h] [rbp-B8h] BYREF
  ULONG ReturnedLength; // [rsp+A0h] [rbp-A8h] BYREF
  UNICODE_STRING v30; // [rsp+A8h] [rbp-A0h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-50h] BYREF

  *(_DWORD *)&Source.Length = 1572886;
  Source.Buffer = L"\\??\\Global\\";
  *(_DWORD *)&v30.Length = 2359330;
  v30.Buffer = L"\\??\\Global\\Volume";
  *(_DWORD *)&String1.Length = 1441812;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v7 = 0LL;
  v25 = 0LL;
  FileHandle = 0LL;
  FileObject = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DosName, 0LL);
  PoolWithQuota_0 = (_REPARSE_DATA_BUFFER *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, BufferLength);
  v24 = PoolWithQuota_0;
  memmove(PoolWithQuota_0, Src, BufferLength);
  if ( PoolWithQuota_0->ReparseTag != -1610612733 )
    goto LABEL_2;
  appended = FsRtlValidateReparsePointBuffer(BufferLength, PoolWithQuota_0);
  if ( appended >= 0 )
  {
    String2.Buffer = PoolWithQuota_0->MountPointReparseBuffer.PathBuffer;
    String2.Length = 2 * (PoolWithQuota_0->SymbolicLinkReparseBuffer.SubstituteNameLength >> 1);
    String2.MaximumLength = String2.Length;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1536;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 7u, 1u);
    if ( appended >= 0 )
    {
      appended = IopReferenceFileObject(FileHandle, 0, 0, (PVOID *)&FileObject, 0LL);
      if ( appended >= 0 )
      {
        DeviceObject = FileObject->DeviceObject;
        if ( (DeviceObject->Characteristics & 0x10) != 0 )
        {
LABEL_2:
          appended = -1073741811;
          goto LABEL_40;
        }
        v12 = 0;
        v20 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v30, &String2, 1u)
          || (appended = IoVolumeDeviceToDosName(DeviceObject, &DosName), appended < 0) )
        {
          v12 = 1;
          v20 = 1;
        }
        if ( v12 )
          appended = IoVolumeDeviceToGuidPath(FileObject->DeviceObject);
        if ( appended >= 0 )
        {
          v13 = String2.Length + 8;
          while ( 1 )
          {
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x65546F49u);
            *(_QWORD *)&v21.Length = PoolWithTag;
            if ( !PoolWithTag )
            {
              appended = -1073741670;
              goto LABEL_40;
            }
            appended = IoQueryFileInformation(FileObject, FileNameInformation, v13, PoolWithTag, &ReturnedLength);
            if ( appended != -2147483643 )
              break;
            v13 = *(_DWORD *)PoolWithTag + 8;
            ExFreePoolWithTag(PoolWithTag, 0);
            *(_QWORD *)&v21.Length = 0LL;
          }
          if ( appended < 0 )
            goto LABEL_40;
          if ( !*(_DWORD *)PoolWithTag || PoolWithTag[2] != 92 )
            goto LABEL_2;
          Length = DosName.Length;
          v15 = *(_DWORD *)PoolWithTag + DosName.Length + 22;
          if ( v20 )
            v15 -= 8;
          if ( DosName.Buffer[((unsigned __int64)DosName.Length >> 1) - 1] == 92 )
            v15 -= 2;
          if ( v15 >= 0xFFFD )
            goto LABEL_2;
          v16 = BufferLength + v15 - String2.Length;
          v17 = a3;
          if ( v16 > a3 )
            v17 = BufferLength + v15 - String2.Length;
          v7 = (char *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, v17);
          v25 = v7;
          String1.Buffer = (wchar_t *)(v7 + 16);
          String1.Length = 0;
          String1.MaximumLength = v15;
          appended = RtlAppendUnicodeStringToString(&String1, &Source);
          if ( appended >= 0 )
          {
            v21 = DosName;
            if ( v20 )
            {
              v21.Length = Length - 8;
              v21.Buffer += 4;
            }
            if ( v21.Buffer[((unsigned __int64)v21.Length >> 1) - 1] == 92 )
              v21.Length -= 2;
            if ( !v21.Length || v21.Length > Length )
              goto LABEL_2;
            appended = RtlAppendUnicodeStringToString(&String1, &v21);
            if ( appended >= 0 )
            {
              v21.Buffer = PoolWithTag + 2;
              v21.Length = *PoolWithTag;
              v21.MaximumLength = v21.Length;
              appended = RtlAppendUnicodeStringToString(&String1, &v21);
              if ( appended >= 0 )
              {
                *(_DWORD *)v7 = -1610612733;
                *(_DWORD *)(v7 + 6) = 0;
                *((_WORD *)v7 + 2) = v16 - 8;
                v18 = String1.Length;
                *((_WORD *)v7 + 5) = String1.Length;
                *(_WORD *)&v7[2 * ((unsigned __int64)v18 >> 1) + 16] = 0;
                LOWORD(v18) = v18 + 2;
                *((_WORD *)v7 + 6) = v18;
                memmove(
                  &v7[(unsigned __int16)v18 + 16],
                  &PoolWithQuota_0->GenericReparseBuffer
                + PoolWithQuota_0->SymbolicLinkReparseBuffer.PrintNameOffset
                + 8,
                  PoolWithQuota_0->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v7 + 7) = PoolWithQuota_0->SymbolicLinkReparseBuffer.PrintNameLength;
                *a4 = v7;
                *a5 = v16;
                v7 = 0LL;
              }
            }
          }
        }
        else
        {
          DosName.Buffer = 0LL;
        }
      }
    }
  }
LABEL_40:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( PoolWithQuota_0 )
    ExFreePoolWithTag(PoolWithQuota_0, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DosName.Buffer )
    ExFreePoolWithTag(DosName.Buffer, 0);
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)appended;
}
