/*
 * XREFs of ?CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z @ 0x1C0050EB8
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C004F274 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 * Callees:
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C0051528 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpShellTrackingGetEnabledForUser(bool *a1)
{
  NTSTATUS v2; // eax
  const char *v3; // rdx
  unsigned int v4; // ebx
  unsigned int v6; // r8d
  unsigned int v7[2]; // [rsp+28h] [rbp-E0h] BYREF
  void *KeyHandle; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  char v12; // [rsp+88h] [rbp-80h] BYREF

  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  UnicodeString.Length = 0;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  KeyHandle = 0LL;
  v2 = RtlFormatCurrentUserKeyPath(&UnicodeString);
  v4 = v2;
  if ( v2 < 0 )
  {
    v6 = 3140;
  }
  else
  {
    *(_DWORD *)&Destination.Length = 0x2000000;
    Destination.Buffer = (PWSTR)&v12;
    RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
    RtlAppendUnicodeToString(&Destination, L"\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v4 = v2;
    if ( v2 >= 0 )
    {
      v7[0] = 1;
      CitpParameterGetInt32(KeyHandle, L"Start_TrackProgs", v7);
      v4 = 0;
      *a1 = v7[0] != 0;
      goto LABEL_4;
    }
    v6 = 3157;
  }
  CitpLogFailureWorker(v2, v3, v6);
LABEL_4:
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
