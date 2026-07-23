/*
 * XREFs of IopValidateJunctionTarget @ 0x1405F93B0
 * Callers:
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     sub_1400CC928 @ 0x1400CC928 (sub_1400CC928.c)
 *     FsRtlValidateReparsePointBuffer @ 0x1400EBE60 (FsRtlValidateReparsePointBuffer.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x14043C2B0 (RtlPrefixUnicodeString.c)
 *     IoVolumeDeviceToDosName @ 0x1404D7FD4 (IoVolumeDeviceToDosName.c)
 *     IoQueryFileInformation @ 0x1404DB230 (IoQueryFileInformation.c)
 *     IoVolumeDeviceToGuidPath @ 0x1404E7D88 (IoVolumeDeviceToGuidPath.c)
 */

__int64 __fastcall IopValidateJunctionTarget(void *Src, ULONG BufferLength, ULONG a3, _QWORD *a4, _DWORD *a5)
{
  char *v7; // r12
  wchar_t *PoolWithTag; // rsi
  _REPARSE_DATA_BUFFER *v9; // r15
  int appended; // ebx
  PDEVICE_OBJECT DeviceObject; // r13
  char v12; // r14
  ULONG v13; // r14d
  unsigned __int16 Length; // r13
  unsigned int v15; // ebx
  ULONG v16; // r14d
  ULONG v17; // eax
  unsigned int v18; // ecx
  char v20; // [rsp+30h] [rbp-118h]
  UNICODE_STRING v21; // [rsp+40h] [rbp-108h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-F8h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-F0h] BYREF
  HANDLE FileHandle[2]; // [rsp+68h] [rbp-E0h] BYREF
  char *v25; // [rsp+78h] [rbp-D0h]
  UNICODE_STRING String2; // [rsp+80h] [rbp-C8h] BYREF
  UNICODE_STRING DosName; // [rsp+90h] [rbp-B8h] BYREF
  UNICODE_STRING v28; // [rsp+A0h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+B0h] [rbp-98h] BYREF
  ULONG ReturnedLength; // [rsp+C0h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-50h] BYREF

  *(_DWORD *)&Source.Length = 1572886;
  Source.Buffer = L"\\??\\Global\\";
  *(_DWORD *)&v28.Length = 2359330;
  v28.Buffer = L"\\??\\Global\\Volume";
  *(_DWORD *)&String1.Length = 1441812;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v7 = 0LL;
  v25 = 0LL;
  FileHandle[0] = 0LL;
  FileObject = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DosName, 0LL);
  v9 = (_REPARSE_DATA_BUFFER *)sub_1400CC928(NonPagedPoolNx, BufferLength);
  FileHandle[1] = v9;
  memmove(v9, Src, BufferLength);
  appended = FsRtlValidateReparsePointBuffer(BufferLength, v9);
  if ( appended >= 0 )
  {
    String2.Buffer = v9->MountPointReparseBuffer.PathBuffer;
    String2.Length = 2 * (v9->SymbolicLinkReparseBuffer.SubstituteNameLength >> 1);
    String2.MaximumLength = String2.Length;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1536;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenFile(FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 7u, 1u);
    if ( appended >= 0 )
    {
      appended = IopReferenceFileObject(FileHandle[0], 0, 0, (PVOID *)&FileObject, 0LL);
      if ( appended >= 0 )
      {
        DeviceObject = FileObject->DeviceObject;
        if ( (DeviceObject->Characteristics & 0x10) != 0 )
        {
LABEL_5:
          appended = -1073741811;
          goto LABEL_39;
        }
        v12 = 0;
        v20 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v28, &String2, 1u)
          || (appended = IoVolumeDeviceToDosName(DeviceObject, &DosName), appended < 0) )
        {
          v12 = 1;
          v20 = 1;
        }
        if ( v12 )
          appended = IoVolumeDeviceToGuidPath(FileObject->DeviceObject, (__int64)&DosName);
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
              goto LABEL_39;
            }
            appended = IoQueryFileInformation(FileObject, FileNameInformation, v13, PoolWithTag, &ReturnedLength);
            if ( appended != -2147483643 )
              break;
            v13 = *(_DWORD *)PoolWithTag + 8;
            ExFreePoolWithTag(PoolWithTag, 0);
            *(_QWORD *)&v21.Length = 0LL;
          }
          if ( appended < 0 )
            goto LABEL_39;
          if ( !*(_DWORD *)PoolWithTag || PoolWithTag[2] != 92 )
            goto LABEL_5;
          Length = DosName.Length;
          v15 = *(_DWORD *)PoolWithTag + DosName.Length + 22;
          if ( v20 )
            v15 -= 8;
          if ( DosName.Buffer[((unsigned __int64)DosName.Length >> 1) - 1] == 92 )
            v15 -= 2;
          if ( v15 >= 0xFFFD )
            goto LABEL_5;
          v16 = BufferLength + v15 - String2.Length;
          v17 = a3;
          if ( v16 > a3 )
            v17 = BufferLength + v15 - String2.Length;
          v7 = (char *)sub_1400CC928(NonPagedPoolNx, v17);
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
              goto LABEL_5;
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
                  &v9->GenericReparseBuffer + v9->SymbolicLinkReparseBuffer.PrintNameOffset + 8,
                  v9->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v7 + 7) = v9->SymbolicLinkReparseBuffer.PrintNameLength;
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
LABEL_39:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DosName.Buffer )
    ExFreePoolWithTag(DosName.Buffer, 0);
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( FileHandle[0] )
    ZwClose(FileHandle[0]);
  return (unsigned int)appended;
}
