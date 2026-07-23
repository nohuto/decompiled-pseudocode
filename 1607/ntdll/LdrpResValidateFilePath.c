/*
 * XREFs of LdrpResValidateFilePath @ 0x1800DDC50
 * Callers:
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 * Callees:
 *     RtlDetermineDosPathNameType_U @ 0x1800095D0 (RtlDetermineDosPathNameType_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180011700 (RtlDosPathNameToNtPathName_U.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A6BC0 (ZwQueryAttributesFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResValidateFilePath(PCWSTR DosFileName)
{
  NTSTATUS v2; // edi
  RTL_PATH_TYPE v3; // edx
  wchar_t *Buffer; // rbx
  int v6; // [rsp+28h] [rbp-A0h] BYREF
  const wchar_t *v7; // [rsp+30h] [rbp-98h]
  int v8; // [rsp+38h] [rbp-90h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-88h]
  _UNICODE_STRING NtFileName; // [rsp+48h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-70h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp-40h] BYREF

  v6 = 3932218;
  v7 = L"LdrpResValidateFilePath Enter";
  v8 = 3801144;
  v9 = L"LdrpResValidateFilePath Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v6, MEMORY[0x7FFE0384]);
  if ( !DosFileName
    || (v3 = RtlDetermineDosPathNameType_U(DosFileName), ((v3 - 1) & 0xFFFFFFFA) != 0)
    || v3 == RtlPathTypeRelative )
  {
    v2 = -1073741811;
  }
  else if ( RtlDosPathNameToNtPathName_U(DosFileName, &NtFileName, 0LL, 0LL) )
  {
    Buffer = NtFileName.Buffer;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &NtFileName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    if ( v2 >= 0 )
      v2 = (FileInformation.FileAttributes & 0x10) != 0 ? 0xC000000D : 0;
  }
  else
  {
    v2 = -1073741766;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v8, MEMORY[0x7FFE0384]);
  return (unsigned int)v2;
}
