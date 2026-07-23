/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x1800272A0
 * Callers:
 *     RtlDoesFileExists_UEx @ 0x180054E14 (RtlDoesFileExists_UEx.c)
 *     RtlDosSearchPath_Ustr @ 0x18005FCB0 (RtlDosSearchPath_Ustr.c)
 *     sxsisol_RespectDotLocal @ 0x1800C99DC (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwQueryAttributesFile @ 0x180093CD0 (ZwQueryAttributesFile.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(_UNICODE_STRING *a1, char a2)
{
  char v2; // bl
  PVOID v4; // rsi
  void *v5; // rax
  NTSTATUS v6; // edi
  __int128 v8; // [rsp+40h] [rbp-49h] BYREF
  void *v9; // [rsp+50h] [rbp-39h]
  PVOID v10; // [rsp+58h] [rbp-31h]
  PVOID BaseAddress[2]; // [rsp+60h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0;
  if ( (int)RtlDosPathNameToRelativeNtPathName(0, 1, a1, 0LL, (unsigned __int16 *)BaseAddress, 0LL, 0LL, (__int64)&v8) < 0 )
    return 0;
  v4 = BaseAddress[1];
  if ( (_WORD)v8 )
  {
    v5 = v9;
    *(_OWORD *)BaseAddress = v8;
  }
  else
  {
    v5 = 0LL;
    v9 = 0LL;
  }
  ObjectAttributes.RootDirectory = v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
  {
    NtClose(*((HANDLE *)v10 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v6 >= 0 )
    return 1;
  if ( v6 == -1073741757 || v6 == -1073741790 )
    return a2 != 0;
  return v2;
}
