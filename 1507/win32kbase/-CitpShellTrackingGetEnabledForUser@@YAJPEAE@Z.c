/*
 * XREFs of ?CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z @ 0x1C007A224
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C007954C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 * Callees:
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C007A6F8 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpShellTrackingGetEnabledForUser(bool *a1)
{
  NTSTATUS v2; // eax
  const char *v3; // rdx
  unsigned int v4; // ebx
  unsigned int v6; // r8d
  unsigned int v7; // [rsp+28h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v8; // [rsp+30h] [rbp-D8h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  char v12; // [rsp+88h] [rbp-80h] BYREF

  *(_QWORD *)&v8.MaximumLength = 0LL;
  v8.Length = 0;
  *(_DWORD *)((char *)&v8.Buffer + 2) = 0;
  HIWORD(v8.Buffer) = 0;
  KeyHandle = 0LL;
  v2 = RtlFormatCurrentUserKeyPath(&v8);
  v4 = v2;
  if ( v2 < 0 )
  {
    v6 = 3028;
  }
  else
  {
    *(_DWORD *)&Destination.Length = 0x2000000;
    Destination.Buffer = (PWSTR)&v12;
    RtlAppendUnicodeStringToString(&Destination, &v8);
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
      v7 = 1;
      CitpParameterGetInt32(KeyHandle, L"Start_TrackProgs", &v7);
      v4 = 0;
      *a1 = v7 != 0;
      goto LABEL_4;
    }
    v6 = 3045;
  }
  CitpLogFailureWorker(v2, v3, v6);
LABEL_4:
  if ( v8.Buffer )
    RtlFreeUnicodeString(&v8);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
