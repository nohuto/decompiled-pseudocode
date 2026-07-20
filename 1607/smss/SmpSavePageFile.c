/*
 * XREFs of SmpSavePageFile @ 0x1400115C4
 * Callers:
 *     SmpCheckForCrashDump @ 0x140009F70 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFile @ 0x14001141C (SmpSaveOldPageFile.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140007004 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     SmpCopyFile @ 0x140010880 (SmpCopyFile.c)
 *     SmpQuerySameVolume @ 0x1400111AC (SmpQuerySameVolume.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x1400116A4 (SmpSetDumpSecurityAndAttributes.c)
 *     SmpSetEndOfFile @ 0x140011920 (SmpSetEndOfFile.c)
 */

NTSTATUS __fastcall SmpSavePageFile(HANDLE FileHandle, struct _UNICODE_STRING *a2, __int64 a3, char a4)
{
  NTSTATUS result; // eax
  int Length; // eax
  const wchar_t *Buffer; // r8
  ULONG v10; // esi
  bool v11; // [rsp+30h] [rbp-248h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-240h] BYREF
  char FileInformation[8]; // [rsp+50h] [rbp-228h] BYREF
  __int64 v14; // [rsp+58h] [rbp-220h]
  int v15; // [rsp+60h] [rbp-218h]
  wchar_t pszDest[246]; // [rsp+64h] [rbp-214h] BYREF

  if ( !a3 || (result = SmpSetEndOfFile(FileHandle), result >= 0) )
  {
    if ( (a4 & 1) != 0 )
      goto LABEL_7;
    result = SmpQuerySameVolume(FileHandle, a2, &v11);
    if ( result < 0 )
      return result;
    if ( v11 )
    {
LABEL_7:
      Length = a2->Length;
      Buffer = a2->Buffer;
      v14 = 0LL;
      FileInformation[0] = 1;
      v10 = Length + 24;
      v15 = Length;
      result = RtlStringCbCopyW(pszDest, 0x1ECuLL, Buffer);
      if ( result >= 0 )
      {
        result = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, v10, FileRenameInformation);
        if ( result >= 0 )
          return SmpSetDumpSecurityAndAttributes(FileHandle);
      }
    }
    else
    {
      return SmpCopyFile(FileHandle, a2);
    }
  }
  return result;
}
