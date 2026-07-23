/*
 * XREFs of IopValidateJunctionTarget @ 0x14067350C
 * Callers:
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     FsRtlValidateReparsePointBuffer @ 0x14012BAC8 (FsRtlValidateReparsePointBuffer.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoVolumeDeviceToDosName @ 0x14040D36C (IoVolumeDeviceToDosName.c)
 *     IoQueryFileInformation @ 0x14042A8B0 (IoQueryFileInformation.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IoVolumeDeviceToGuidPath @ 0x14056254C (IoVolumeDeviceToGuidPath.c)
 */

__int64 __fastcall IopValidateJunctionTarget(void *Src, ULONG BufferLength, ULONG a3, _QWORD *a4, _DWORD *a5)
{
  size_t v5; // r13
  char *v7; // r14
  wchar_t *PoolWithTag; // r15
  _REPARSE_DATA_BUFFER *PoolWithTagPriority; // rax
  _REPARSE_DATA_BUFFER *v10; // rbx
  int appended; // edi
  _DWORD *v12; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v14; // rbx
  PDEVICE_OBJECT *v15; // r12
  _DWORD *v16; // r13
  char v17; // al
  ULONG v18; // r12d
  unsigned __int16 Length; // r13
  unsigned int v20; // edi
  ULONG v21; // r12d
  ULONG v22; // eax
  char *PoolWithQuotaTag; // rax
  unsigned int v24; // ecx
  char v26; // [rsp+30h] [rbp-138h]
  PVOID TokenInformation; // [rsp+38h] [rbp-130h] BYREF
  UNICODE_STRING v28; // [rsp+40h] [rbp-128h] BYREF
  char *v29; // [rsp+50h] [rbp-118h]
  _REPARSE_DATA_BUFFER *v30; // [rsp+58h] [rbp-110h]
  PVOID Object; // [rsp+60h] [rbp-108h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-100h] BYREF
  UNICODE_STRING DosName; // [rsp+80h] [rbp-E8h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-D8h] BYREF
  UNICODE_STRING Destination; // [rsp+98h] [rbp-D0h] BYREF
  PVOID v36; // [rsp+A8h] [rbp-C0h]
  UNICODE_STRING v37; // [rsp+B0h] [rbp-B8h] BYREF
  UNICODE_STRING Source; // [rsp+C0h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+D0h] [rbp-98h] BYREF
  ULONG ReturnedLength; // [rsp+E0h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-50h] BYREF

  v5 = BufferLength;
  *(_DWORD *)&Source.Length = 1572886;
  Source.Buffer = L"\\??\\Global\\";
  *(_DWORD *)&v37.Length = 2359330;
  v37.Buffer = L"\\??\\Global\\Volume";
  *(_DWORD *)&String1.Length = 1441812;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v30 = 0LL;
  v7 = 0LL;
  v29 = 0LL;
  FileHandle = 0LL;
  v36 = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DosName, 0LL);
  if ( ViVerifierDriverAddedThunkListHead )
  {
    PoolWithTagPriority = (_REPARSE_DATA_BUFFER *)ExAllocatePoolWithTagPriority(
                                                    NonPagedPoolNx,
                                                    (unsigned int)v5,
                                                    0x20206F49u,
                                                    (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    v10 = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    PoolWithTagPriority = (_REPARSE_DATA_BUFFER *)ExAllocatePoolWithQuotaTag(
                                                    NonPagedPoolNx,
                                                    (unsigned int)v5,
                                                    0x20206F49u);
    v10 = PoolWithTagPriority;
  }
  v30 = PoolWithTagPriority;
  memmove(v10, Src, v5);
  if ( v10->ReparseTag != -1610612733 )
    goto LABEL_6;
  appended = FsRtlValidateReparsePointBuffer(v5, v10);
  if ( appended >= 0 )
  {
    String2.Buffer = v10->MountPointReparseBuffer.PathBuffer;
    String2.Length = 2 * (v10->SymbolicLinkReparseBuffer.SubstituteNameLength >> 1);
    String2.MaximumLength = String2.Length;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1536;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 7u, 1u);
    if ( appended >= 0 )
    {
      appended = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      v36 = Object;
      if ( appended >= 0 )
      {
        v12 = (_DWORD *)*((_QWORD *)Object + 26);
        if ( v12 && (*v12 & 4) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          LODWORD(TokenInformation) = 0;
          v14 = PsReferencePrimaryToken(Process);
          SeQueryInformationToken(v14, TokenIsAppContainer, &TokenInformation);
          ObfDereferenceObject(v14);
          if ( (_DWORD)TokenInformation )
          {
            ObfDereferenceObject(Object);
            appended = -1073739504;
          }
          v7 = v29;
          v10 = v30;
        }
        if ( appended >= 0 )
        {
          v15 = (PDEVICE_OBJECT *)Object;
          v16 = (_DWORD *)*((_QWORD *)Object + 1);
          if ( (v16[13] & 0x10) != 0 )
            goto LABEL_6;
          v26 = 0;
          if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
            || RtlPrefixUnicodeString(&v37, &String2, 1u)
            || (appended = IoVolumeDeviceToDosName(v16, &DosName), appended < 0) )
          {
            v17 = 1;
            v26 = 1;
          }
          else
          {
            v17 = 0;
          }
          if ( v17 )
            appended = IoVolumeDeviceToGuidPath(v15[1], &DosName.Length);
          if ( appended < 0 )
          {
            DosName.Buffer = 0LL;
            goto LABEL_55;
          }
          v18 = String2.Length + 8;
          while ( 1 )
          {
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x65546F49u);
            TokenInformation = PoolWithTag;
            if ( !PoolWithTag )
            {
              appended = -1073741670;
              goto LABEL_55;
            }
            appended = IoQueryFileInformation(
                         (PFILE_OBJECT)Object,
                         FileNameInformation,
                         v18,
                         PoolWithTag,
                         &ReturnedLength);
            if ( appended != -2147483643 )
              break;
            v18 = *(_DWORD *)PoolWithTag + 8;
            ExFreePoolWithTag(PoolWithTag, 0);
            TokenInformation = 0LL;
          }
          if ( appended < 0 )
            goto LABEL_55;
          if ( !*(_DWORD *)PoolWithTag || PoolWithTag[2] != 92 )
            goto LABEL_6;
          Length = DosName.Length;
          v20 = *(_DWORD *)PoolWithTag + DosName.Length + 22;
          if ( v26 )
            v20 -= 8;
          if ( DosName.Buffer[((unsigned __int64)DosName.Length >> 1) - 1] == 92 )
            v20 -= 2;
          if ( v20 >= 0xFFFD )
            goto LABEL_6;
          v21 = BufferLength + v20 - String2.Length;
          v22 = a3;
          if ( v21 > a3 )
            v22 = BufferLength + v20 - String2.Length;
          if ( ViVerifierDriverAddedThunkListHead )
          {
            PoolWithQuotaTag = (char *)ExAllocatePoolWithTagPriority(
                                         NonPagedPoolNx,
                                         v22,
                                         0x20206F49u,
                                         (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
            v7 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
              RtlRaiseStatus(-1073741670);
          }
          else
          {
            PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v22, 0x20206F49u);
            v7 = PoolWithQuotaTag;
          }
          v29 = PoolWithQuotaTag;
          Destination.Buffer = (wchar_t *)(v7 + 16);
          Destination.Length = 0;
          Destination.MaximumLength = v20;
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( appended >= 0 )
          {
            v28 = DosName;
            if ( v26 )
            {
              v28.Length = Length - 8;
              v28.Buffer += 4;
            }
            if ( v28.Buffer[((unsigned __int64)v28.Length >> 1) - 1] == 92 )
              v28.Length -= 2;
            if ( v28.Length && v28.Length <= Length )
            {
              appended = RtlAppendUnicodeStringToString(&Destination, &v28);
              if ( appended >= 0 )
              {
                v28.Buffer = PoolWithTag + 2;
                v28.Length = *PoolWithTag;
                v28.MaximumLength = v28.Length;
                appended = RtlAppendUnicodeStringToString(&Destination, &v28);
                if ( appended >= 0 )
                {
                  *(_DWORD *)v7 = -1610612733;
                  *(_DWORD *)(v7 + 6) = 0;
                  *((_WORD *)v7 + 2) = v21 - 8;
                  v24 = Destination.Length;
                  *((_WORD *)v7 + 5) = Destination.Length;
                  *(_WORD *)&v7[2 * ((unsigned __int64)v24 >> 1) + 16] = 0;
                  LOWORD(v24) = v24 + 2;
                  *((_WORD *)v7 + 6) = v24;
                  memmove(
                    &v7[(unsigned __int16)v24 + 16],
                    &v10->GenericReparseBuffer + v10->SymbolicLinkReparseBuffer.PrintNameOffset + 8,
                    v10->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                  *((_WORD *)v7 + 7) = v10->SymbolicLinkReparseBuffer.PrintNameLength;
                  *a4 = v7;
                  *a5 = v21;
                  v7 = 0LL;
                }
              }
              goto LABEL_55;
            }
LABEL_6:
            appended = -1073741811;
          }
        }
      }
    }
  }
LABEL_55:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DosName.Buffer )
    ExFreePoolWithTag(DosName.Buffer, 0);
  if ( v36 )
    ObfDereferenceObject(v36);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)appended;
}
