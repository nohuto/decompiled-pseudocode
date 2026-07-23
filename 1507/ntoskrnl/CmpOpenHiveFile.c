/*
 * XREFs of CmpOpenHiveFile @ 0x14044B07C
 * Callers:
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x14044A738 (CmpInitHiveFromFile.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14017F710 (ZwFsControlFile.c)
 *     ZwCreateFile @ 0x14017FA90 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpCreateEvent @ 0x14044B5C0 (CmpCreateEvent.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14044B65C (CmpQueryFileSecurityDescriptor.c)
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 *     CmpGetVolumeClusterSize @ 0x1404AE73C (CmpGetVolumeClusterSize.c)
 *     PsReferenceImpersonationToken @ 0x1405217F0 (PsReferenceImpersonationToken.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x14055A98C (CmpGetVolumeLogFileSizeCap.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14055B714 (CmpOpenFileWithExtremePrejudice.c)
 *     SeTokenImpersonationLevel @ 0x1405A75F8 (SeTokenImpersonationLevel.c)
 *     PsRevertToSelf @ 0x1406C31F8 (PsRevertToSelf.c)
 */

__int64 __fastcall CmpOpenHiveFile(
        UNICODE_STRING *Source,
        unsigned int a2,
        HANDLE *a3,
        int *a4,
        char a5,
        void *a6,
        __int64 a7,
        void *a8,
        __int64 a9)
{
  ULONG ShareAccess; // r13d
  char v10; // di
  PACCESS_TOKEN v12; // r15
  __int64 v13; // rsi
  __int64 result; // rax
  NTSTATUS Status; // ebx
  const WCHAR *v16; // r14
  __int64 v17; // rsi
  unsigned __int16 v18; // si
  PVOID v19; // r14
  ACCESS_MASK v20; // r14d
  int v21; // esi
  ULONG CreateOptions; // r12d
  SECURITY_IMPERSONATION_LEVEL v23; // eax
  ULONG v24; // esi
  int Information; // esi
  HANDLE v26; // rcx
  __int64 v27; // rdi
  int VolumeClusterSize; // eax
  ULONG CreateDisposition; // [rsp+38h] [rbp-C8h]
  BOOLEAN EffectiveOnly; // [rsp+60h] [rbp-A0h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+61h] [rbp-9Fh] BYREF
  char v32; // [rsp+62h] [rbp-9Eh]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  unsigned int v35; // [rsp+74h] [rbp-8Ch]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Event; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h]
  int InputBuffer; // [rsp+90h] [rbp-70h] BYREF
  PETHREAD Thread; // [rsp+98h] [rbp-68h]
  PACCESS_TOKEN Token; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING Destination; // [rsp+A8h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE *v44; // [rsp+C8h] [rbp-38h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  int *v47; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING *v48; // [rsp+E8h] [rbp-18h]
  void *v49; // [rsp+F0h] [rbp-10h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F8h] [rbp-8h] BYREF
  __m128i FileInformation; // [rsp+128h] [rbp+28h] BYREF
  __m128i si128; // [rsp+138h] [rbp+38h]
  int v53; // [rsp+148h] [rbp+48h]
  char v54[8]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v55; // [rsp+158h] [rbp+58h]

  ShareAccess = 0;
  v10 = a5;
  Token = a6;
  v12 = 0LL;
  v45 = a7;
  v49 = a8;
  v46 = a9;
  ImpersonationLevel = SecurityImpersonation;
  v13 = a2;
  v47 = a4;
  v44 = a3;
  v35 = a2;
  v48 = Source;
  CopyOnOpen = 0;
  Thread = 0LL;
  EffectiveOnly = 0;
  *a3 = 0LL;
  v32 = 0;
  FileAttributes = 6;
  if ( a2 >= 6 )
    return 3221225485LL;
  result = CmpCreateEvent(NotificationEvent, &Event);
  Status = result;
  if ( (int)result >= 0 )
  {
    v16 = (const WCHAR *)CmFileNameExtensions[v13];
    if ( v16 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v16[v17] );
      v18 = Source->Length + 2 * (v17 + 1);
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x62774D43u);
      if ( !Destination.Buffer )
      {
        v19 = Object;
        Status = -1073741670;
LABEL_62:
        ZwClose(Event);
        ObfDereferenceObject(v19);
        return (unsigned int)Status;
      }
      Destination.Length = 0;
      Destination.MaximumLength = v18;
      RtlAppendUnicodeStringToString(&Destination, Source);
      RtlAppendUnicodeToString(&Destination, v16);
      LODWORD(v13) = v35;
    }
    else
    {
      Destination = *Source;
    }
    if ( (a5 & 0x20) != 0 )
    {
      v20 = 1;
      ShareAccess = (unsigned __int8)~a5 >> 7;
    }
    else
    {
      v20 = (a5 & 8) == 0 ? 3 : 0;
      if ( !(_DWORD)v13 )
        v20 |= 0x20000u;
    }
    if ( (_DWORD)v13 )
    {
      if ( (a5 & 0x20) != 0 )
        v21 = 1;
      else
        v21 = (a5 & 0x10) == 0 ? 3 : 0;
      CreateOptions = 32780;
    }
    else
    {
      FileAttributes = 128;
      v21 = 1;
      CreateOptions = 49188;
      if ( (a5 & 0x21) == 1 )
        v21 = 3;
    }
    if ( Token )
    {
      Thread = KeGetCurrentThread();
      v12 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v23 = (unsigned int)SeTokenImpersonationLevel(Token);
      if ( PsImpersonateClient(Thread, Token, 0, 0, v23) < 0 )
        goto LABEL_56;
      v10 = a5 | 0x40;
      v32 = 1;
    }
    CreateDisposition = v21;
    v24 = FileAttributes;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.Attributes = (16 * (v10 & 0x40)) | 0x240;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.SecurityDescriptor = v49;
    ObjectAttributes.Length = 48;
    Status = ZwCreateFile(
               &FileHandle,
               v20,
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
      Status = CmpOpenFileWithExtremePrejudice(&FileHandle, &ObjectAttributes, &IoStatusBlock, v24, CreateOptions);
    if ( v32 )
    {
      if ( v12 )
      {
        if ( PsImpersonateClient(Thread, v12, CopyOnOpen, EffectiveOnly, ImpersonationLevel) < 0 )
          KeBugCheckEx(0x51u, 0x26uLL, (ULONG_PTR)v12, 0LL, 0LL);
      }
      else
      {
        PsRevertToSelf();
      }
    }
    if ( Status >= 0 )
    {
      Information = IoStatusBlock.Information;
      if ( (v10 & 0x28) == 0 )
      {
        v53 = 0;
        si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        FileInformation = si128;
        ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
      }
      v19 = Object;
      if ( (v10 & 0x22) == 2 )
      {
        Status = ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741808 )
          goto LABEL_41;
      }
      InputBuffer = 0;
      if ( ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
        KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
      if ( !v35 )
      {
        if ( Information != 2
          && ZwQueryInformationFile(FileHandle, &IoStatusBlock, v54, 0x18u, FileStandardInformation) >= 0
          && !v55 )
        {
          Information = 2;
        }
        v27 = v45;
        if ( v45 )
        {
          VolumeClusterSize = CmpGetVolumeClusterSize(FileHandle);
          v26 = FileHandle;
          Status = VolumeClusterSize;
          if ( VolumeClusterSize < 0 )
            goto LABEL_42;
          *(_DWORD *)(v27 + 4) = CmpGetVolumeLogFileSizeCap(FileHandle);
        }
        if ( v46 )
        {
          Status = CmpQueryFileSecurityDescriptor(FileHandle);
          if ( Status < 0 )
          {
LABEL_41:
            v26 = FileHandle;
LABEL_42:
            ZwClose(v26);
            goto LABEL_57;
          }
        }
      }
      Status = 0;
      *v44 = FileHandle;
      *v47 = Information;
LABEL_57:
      if ( Destination.Buffer && Destination.Buffer != v48->Buffer )
        ExFreePoolWithTag(Destination.Buffer, 0);
      if ( v12 )
        ObfDereferenceObject(v12);
      goto LABEL_62;
    }
LABEL_56:
    v19 = Object;
    goto LABEL_57;
  }
  return result;
}
