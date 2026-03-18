/*
 * XREFs of CmpOpenHiveFile @ 0x1403DD4E4
 * Callers:
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x1403DCB84 (CmpInitHiveFromFile.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x140150840 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x140150B00 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x140150D40 (ZwFsControlFile.c)
 *     ZwCreateFile @ 0x1401510C0 (ZwCreateFile.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1403B5538 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpGetVolumeClusterSize @ 0x1403D210C (CmpGetVolumeClusterSize.c)
 *     CmpCreateEvent @ 0x1403DD924 (CmpCreateEvent.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403DD9C0 (CmpQueryFileSecurityDescriptor.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1404C2B38 (CmpGetVolumeLogFileSizeCap.c)
 */

__int64 __fastcall CmpOpenHiveFile(
        UNICODE_STRING *a1,
        unsigned int a2,
        HANDLE *a3,
        int *a4,
        char a5,
        int *a6,
        void *a7,
        __int64 a8)
{
  ULONG FileAttributes; // r15d
  __int64 v10; // r14
  __int64 result; // rax
  const WCHAR *v12; // rsi
  ULONG CreateDisposition; // ebx
  ACCESS_MASK v14; // edx
  ULONG ShareAccess; // ecx
  ULONG CreateOptions; // esi
  NTSTATUS Status; // ebx
  int Information; // esi
  __int64 v19; // rdi
  unsigned __int16 v20; // di
  NTSTATUS VolumeClusterSize; // eax
  HANDLE v22; // rcx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Event; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h]
  PCUNICODE_STRING Source; // [rsp+78h] [rbp-88h]
  int InputBuffer; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING Destination; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  HANDLE *v30; // [rsp+A8h] [rbp-58h]
  int *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v34; // [rsp+F0h] [rbp-10h] BYREF
  __m128i si128; // [rsp+100h] [rbp+0h]
  int v36; // [rsp+110h] [rbp+10h]
  char FileInformation[8]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v38; // [rsp+120h] [rbp+20h]

  v31 = a4;
  FileAttributes = 6;
  v30 = a3;
  v10 = a2;
  Source = a1;
  v32 = a8;
  *a3 = 0LL;
  if ( a2 >= 6 )
    return 3221225485LL;
  result = CmpCreateEvent(NotificationEvent, &Event);
  if ( (int)result >= 0 )
  {
    v12 = (const WCHAR *)CmFileNameExtensions[v10];
    CreateDisposition = 1;
    if ( v12 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v12[v19] );
      v20 = Source->Length + 2 * (v19 + 1);
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v20, 0x62774D43u);
      if ( !Destination.Buffer )
      {
        Status = -1073741670;
LABEL_32:
        ZwClose(Event);
        ObfDereferenceObject(Object);
        return (unsigned int)Status;
      }
      Destination.Length = 0;
      Destination.MaximumLength = v20;
      RtlAppendUnicodeStringToString(&Destination, Source);
      RtlAppendUnicodeToString(&Destination, v12);
    }
    else
    {
      Destination = *a1;
    }
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityDescriptor = a7;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = (16 * (a5 & 0x40)) | 0x240;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( (a5 & 0x20) != 0 )
    {
      v14 = 1;
      ShareAccess = (unsigned __int8)~a5 >> 7;
    }
    else
    {
      v14 = (a5 & 8) == 0 ? 3 : 0;
      if ( !(_DWORD)v10 )
        v14 |= 0x20000u;
      ShareAccess = 0;
    }
    if ( (_DWORD)v10 )
    {
      if ( (a5 & 0x20) == 0 )
        CreateDisposition = (a5 & 0x10) == 0 ? 3 : 0;
      CreateOptions = 32780;
    }
    else
    {
      FileAttributes = 128;
      CreateOptions = 49188;
      if ( (a5 & 0x21) == 1 )
        CreateDisposition = 3;
    }
    Status = ZwCreateFile(
               &FileHandle,
               v14,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               FileAttributes,
               ShareAccess,
               CreateDisposition,
               CreateOptions,
               0LL,
               0);
    if ( Status == -1073741790 )
      Status = CmpOpenFileWithExtremePrejudice(
                 &FileHandle,
                 &ObjectAttributes,
                 &IoStatusBlock,
                 FileAttributes,
                 CreateOptions);
    if ( Status < 0 )
    {
LABEL_29:
      if ( Destination.Buffer )
      {
        if ( Destination.Buffer != Source->Buffer )
          ExFreePoolWithTag(Destination.Buffer, 0);
      }
      goto LABEL_32;
    }
    Information = IoStatusBlock.Information;
    if ( (a5 & 0x28) == 0 )
    {
      v36 = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      v34 = si128;
      ZwSetInformationFile(FileHandle, &IoStatusBlock, &v34, 0x28u, FileBasicInformation);
    }
    if ( (a5 & 0x22) != 2 )
      goto LABEL_55;
    Status = ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( (int)(Status + 0x80000000) < 0 || Status == -1073741808 )
    {
LABEL_55:
      InputBuffer = 0;
      if ( ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
        KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      if ( (_DWORD)v10 )
        goto LABEL_28;
      if ( Information != 2
        && ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) >= 0
        && !v38 )
      {
        Information = 2;
      }
      if ( a6 )
      {
        VolumeClusterSize = CmpGetVolumeClusterSize(FileHandle, a6);
        v22 = FileHandle;
        Status = VolumeClusterSize;
        if ( VolumeClusterSize < 0 )
        {
LABEL_52:
          ZwClose(v22);
          goto LABEL_29;
        }
        a6[1] = CmpGetVolumeLogFileSizeCap(FileHandle);
      }
      if ( !v32 || (Status = CmpQueryFileSecurityDescriptor(FileHandle), Status >= 0) )
      {
LABEL_28:
        Status = 0;
        *v30 = FileHandle;
        *v31 = Information;
        goto LABEL_29;
      }
    }
    v22 = FileHandle;
    goto LABEL_52;
  }
  return result;
}
