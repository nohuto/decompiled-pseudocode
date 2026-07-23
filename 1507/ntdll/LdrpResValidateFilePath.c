/*
 * XREFs of LdrpResValidateFilePath @ 0x1800CCFA8
 * Callers:
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlDetermineDosPathNameType_U @ 0x180057B40 (RtlDetermineDosPathNameType_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18006DF80 (RtlDosPathNameToNtPathName_U.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x180093CD0 (ZwQueryAttributesFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResValidateFilePath(PCWSTR DosFileName)
{
  NTSTATUS v2; // edi
  RTL_PATH_TYPE v3; // edx
  unsigned __int16 *Buffer; // rbx
  int v6; // [rsp+20h] [rbp-A8h] BYREF
  const wchar_t *v7; // [rsp+28h] [rbp-A0h]
  int v8; // [rsp+30h] [rbp-98h] BYREF
  const wchar_t *v9; // [rsp+38h] [rbp-90h]
  RTL_PATH_TYPE v10; // [rsp+40h] [rbp-88h]
  _UNICODE_STRING NtFileName; // [rsp+48h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-70h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp-40h] BYREF

  v8 = 3932218;
  v9 = L"LdrpResValidateFilePath Enter";
  v6 = 3801144;
  v7 = L"LdrpResValidateFilePath Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v8, MEMORY[0x7FFE0384]);
  if ( !DosFileName
    || (v3 = RtlDetermineDosPathNameType_U(DosFileName), v10 = v3, ((v3 - 1) & 0xFFFFFFFA) != 0)
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
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v6, MEMORY[0x7FFE0384]);
  return (unsigned int)v2;
}
