/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x180018498
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x1800185F0 (RtlDosSearchPath_Ustr.c)
 *     RtlDoesFileExists_UEx @ 0x18003FE78 (RtlDoesFileExists_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800D24BC (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwQueryAttributesFile @ 0x1800A5860 (ZwQueryAttributesFile.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(_UNICODE_STRING *a1, char a2)
{
  char v2; // bl
  PVOID v5; // rsi
  void *v6; // rax
  NTSTATUS v7; // edi
  __int128 v8; // [rsp+40h] [rbp-49h] BYREF
  void *v9; // [rsp+50h] [rbp-39h]
  PVOID BaseAddress; // [rsp+58h] [rbp-31h]
  PVOID v11[2]; // [rsp+60h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0;
  if ( (int)RtlDosPathNameToRelativeNtPathName(0, 1, a1, 0LL, (_UNICODE_STRING *)v11, 0LL, 0LL, (__int64)&v8) < 0 )
    return 0;
  v5 = v11[1];
  if ( (_WORD)v8 )
  {
    v6 = v9;
    *(_OWORD *)v11 = v8;
  }
  else
  {
    v6 = 0LL;
    v9 = 0LL;
  }
  ObjectAttributes.RootDirectory = v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( BaseAddress && _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) == 1 )
  {
    NtClose(*((HANDLE *)BaseAddress + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( v7 >= 0 )
    return 1;
  if ( v7 == -1073741757 || v7 == -1073741790 )
    return a2 != 0;
  return v2;
}
