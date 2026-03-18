/*
 * XREFs of AslFileMappingCreate @ 0x1405AAB1C
 * Callers:
 *     SdbpCheckKObject @ 0x1405A9EE4 (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x1405AA8F0 (SdbGetDatabaseMatch.c)
 *     SdbpCheckMatchingFiles @ 0x1405AB79C (SdbpCheckMatchingFiles.c)
 *     SdbOpenDatabaseEx @ 0x140701D44 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140702DFC (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     RtlFileMapInitializeByNtPath @ 0x1401667A8 (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     AslFileMappingDelete @ 0x140578388 (AslFileMappingDelete.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x1405AACC0 (AslpFileMappingGetFileKind.c)
 *     AslFileNotFound @ 0x1405AB1A8 (AslFileNotFound.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingCreate(__int64 *a1, const WCHAR *a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  wchar_t *v10; // rax
  __int64 v11; // rdi
  NTSTATUS v12; // ebx
  HANDLE *v13; // rsi
  void *v14; // rcx
  int v15; // eax
  const char *v17; // r9
  int v18; // r8d
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]

  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = (wchar_t *)AslAlloc(v9, 0x250uLL);
  v11 = (__int64)v10;
  if ( v10 )
  {
    v12 = RtlStringCchCopyW(v10, 0x104uLL, a2);
    if ( v12 < 0 )
    {
      v17 = "RtlStringCchCopyW failed [%x]";
      v18 = 120;
    }
    else
    {
      if ( a3 == (void *)-1LL )
        a3 = 0LL;
      v13 = (HANDLE *)(v11 + 520);
      v14 = (void *)(v11 + 520);
      if ( a3 )
      {
        memset(v14, 0, 0x38uLL);
        *v13 = a3;
        *(_BYTE *)(v11 + 568) = 0;
      }
      else
      {
        v15 = RtlFileMapInitializeByNtPath((__int64)v14, &DestinationString);
        v12 = v15;
        if ( v15 < 0 )
        {
          if ( !(unsigned int)AslFileNotFound((unsigned int)v15) )
          {
            v19 = (unsigned int)(v12 + 1073741805);
            if ( (unsigned int)v19 <= 0x30 && (v20 = 0x1000000008001LL, _bittest64(&v20, v19)) || v12 == -1073741638 )
            {
              v21 = 160;
              v22 = 3;
            }
            else
            {
              v21 = 158;
              v22 = 1;
            }
            AslLogCallPrintf(
              v22,
              (unsigned int)"AslFileMappingCreate",
              v21,
              (unsigned int)"RtlFileMapInitializeByFilePath failed %S [%x]");
          }
          goto LABEL_18;
        }
      }
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      FileInformation = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v12 = ZwQueryInformationFile(*v13, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v12 >= 0 )
      {
        if ( a4 )
        {
          *(_QWORD *)(v11 + 552) = a5;
          *(_BYTE *)(v11 + 571) = 1;
          *(_QWORD *)(v11 + 544) = a4;
        }
        *(_QWORD *)(v11 + 536) = v26;
        if ( !a4 )
        {
          *(_DWORD *)(v11 + 576) = (v26 != 0) + 1;
LABEL_17:
          *a1 = v11;
          v12 = 0;
          v11 = 0LL;
          goto LABEL_18;
        }
        if ( v26 )
        {
          if ( (int)AslpFileMappingGetFileKind(v11 + 520, v11 + 576) < 0 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"AslFileMappingCreate",
              212,
              (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]");
            *(_DWORD *)(v11 + 576) = 3;
          }
          goto LABEL_17;
        }
        AslLogCallPrintf(
          1,
          (unsigned int)"AslFileMappingCreate",
          205,
          (unsigned int)"File size is 0 bytes yet ImageViewBase was present");
        v12 = -1073741811;
LABEL_18:
        if ( v11 )
          AslFileMappingDelete(v11);
        goto LABEL_20;
      }
      v17 = "NtQueryInformationFile failed [%x]";
      v18 = 180;
    }
    AslLogCallPrintf(1, (unsigned int)"AslFileMappingCreate", v18, (_DWORD)v17);
    goto LABEL_18;
  }
  v12 = -1073741801;
LABEL_20:
  if ( DestinationString.Buffer != a2 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v12;
}
