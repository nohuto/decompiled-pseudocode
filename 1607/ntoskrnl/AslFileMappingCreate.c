/*
 * XREFs of AslFileMappingCreate @ 0x14049D54C
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14049D418 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x140572FBC (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x1406C1624 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x1406C21AC (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2AE8 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     RtlFileMapInitializeByNtPath @ 0x140087428 (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x140159EA0 (ZwQueryInformationFile.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     AslFileMappingDelete @ 0x140485350 (AslFileMappingDelete.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x140571414 (AslpFileMappingGetFileKind.c)
 *     AslFileNotFound @ 0x14057B46C (AslFileNotFound.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingCreate(__int64 *a1, const WCHAR *a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  wchar_t *v10; // rax
  __int64 v11; // rdi
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  HANDLE *v14; // rsi
  void *v15; // rcx
  int v16; // eax
  const char *v18; // r9
  int v19; // r8d
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // ecx
  int FileKind; // eax
  FILE_INFORMATION_CLASS FileInformationClass[2]; // [rsp+20h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h]
  __int64 v30; // [rsp+60h] [rbp-10h]

  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = (wchar_t *)AslAlloc(v9, 0x258uLL);
  v11 = (__int64)v10;
  if ( v10 )
  {
    v12 = RtlStringCchCopyW(v10, 0x104uLL, a2);
    v13 = v12;
    if ( v12 < 0 )
    {
      v18 = "RtlStringCchCopyW failed [%x]";
      v19 = 121;
    }
    else
    {
      if ( a3 == (void *)-1LL )
        a3 = 0LL;
      v14 = (HANDLE *)(v11 + 520);
      v15 = (void *)(v11 + 520);
      if ( a3 )
      {
        memset(v15, 0, 0x38uLL);
        *v14 = a3;
        *(_BYTE *)(v11 + 568) = 0;
      }
      else
      {
        v16 = RtlFileMapInitializeByNtPath((__int64)v15, &DestinationString);
        v13 = v16;
        if ( v16 < 0 )
        {
          if ( !(unsigned int)AslFileNotFound((unsigned int)v16) )
          {
            v20 = v13 + 1073741805;
            if ( (unsigned int)v20 <= 0x30 && (v21 = 0x1000000008001LL, _bittest64(&v21, v20)) || v13 == -1073741638 )
            {
              v22 = 161;
              v23 = 3;
            }
            else
            {
              v22 = 159;
              v23 = 1;
            }
            AslLogCallPrintf(
              v23,
              (unsigned int)"AslFileMappingCreate",
              v22,
              (unsigned int)"RtlFileMapInitializeByFilePath failed %S [%x]",
              a2,
              v13);
          }
          goto LABEL_16;
        }
      }
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      FileInformation = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v12 = ZwQueryInformationFile(*v14, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      v13 = v12;
      if ( v12 >= 0 )
      {
        if ( a4 )
        {
          *(_QWORD *)(v11 + 552) = a5;
          *(_BYTE *)(v11 + 571) = 1;
          *(_QWORD *)(v11 + 544) = a4;
        }
        *(_QWORD *)(v11 + 536) = v29;
        if ( !a4 )
        {
          *(_DWORD *)(v11 + 576) = (v29 != 0) + 1;
LABEL_15:
          *a1 = v11;
          v13 = 0;
          v11 = 0LL;
          goto LABEL_16;
        }
        if ( v29 )
        {
          FileKind = AslpFileMappingGetFileKind(v11 + 520, v11 + 576);
          if ( FileKind < 0 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"AslFileMappingCreate",
              213,
              (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]",
              v11,
              FileKind);
            *(_DWORD *)(v11 + 576) = 3;
          }
          goto LABEL_15;
        }
        AslLogCallPrintf(
          1,
          (unsigned int)"AslFileMappingCreate",
          206,
          (unsigned int)"File size is 0 bytes yet ImageViewBase was present");
        v13 = -1073741811;
LABEL_16:
        if ( v11 )
          AslFileMappingDelete(v11);
        goto LABEL_18;
      }
      v18 = "NtQueryInformationFile failed [%x]";
      v19 = 181;
    }
    FileInformationClass[0] = v12;
    AslLogCallPrintf(1, (unsigned int)"AslFileMappingCreate", v19, (_DWORD)v18, *(_QWORD *)FileInformationClass);
    goto LABEL_16;
  }
  v13 = -1073741801;
LABEL_18:
  if ( DestinationString.Buffer != a2 )
    RtlFreeAnsiString(&DestinationString);
  return v13;
}
