/*
 * XREFs of ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0018638
 * Callers:
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0018564 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079924 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoOpenKey(struct _CIT_IMPACT_CONTEXT *a1, void **a2)
{
  void *v4; // rax
  NTSTATUS v5; // eax
  const char *v6; // rdx
  unsigned int v7; // ebx
  void *v8; // rax
  unsigned int v10; // r8d
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char v15; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&KeyPath.MaximumLength = 0LL;
  *(_DWORD *)((char *)&KeyPath.Buffer + 2) = 0;
  HIWORD(KeyPath.Buffer) = 0;
  v4 = (void *)*((_QWORD *)a1 + 96);
  KeyPath.Length = 0;
  KeyHandle = 0LL;
  if ( v4 )
  {
    *a2 = v4;
    return 0;
  }
  if ( !(unsigned __int8)RtlIsMultiSessionSku() )
  {
    RtlInitUnicodeString(&KeyPath, L"\\Registry\\Machine");
LABEL_5:
    *(_DWORD *)&Destination.Length = 0x2000000;
    Destination.Buffer = (PWSTR)&v15;
    RtlAppendUnicodeStringToString(&Destination, &KeyPath);
    RtlAppendUnicodeToString(&Destination, L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    v7 = v5;
    if ( v5 >= 0 )
    {
      v8 = KeyHandle;
      v7 = 0;
      *((_QWORD *)a1 + 96) = KeyHandle;
      *a2 = v8;
      KeyHandle = 0LL;
      goto LABEL_7;
    }
    v10 = 5289;
    goto LABEL_15;
  }
  if ( !*((_QWORD *)a1 + 52) )
  {
    v7 = -1073741823;
    goto LABEL_7;
  }
  v5 = RtlFormatCurrentUserKeyPath(&KeyPath);
  v7 = v5;
  if ( v5 >= 0 )
    goto LABEL_5;
  v10 = 5266;
LABEL_15:
  CitpLogFailureWorker(v5, v6, v10);
LABEL_7:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v7;
}
