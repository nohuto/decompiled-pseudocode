/*
 * XREFs of ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00D6B58
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00D6334 (xxxCreateWindowStation.c)
 * Callees:
 *     xxxInitInput @ 0x1C00D6E08 (xxxInitInput.c)
 *     xxxLW_LoadFonts @ 0x1C00D6EF0 (xxxLW_LoadFonts.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxInitTerminal(struct tagTERMINAL *a1)
{
  void *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  NTSTATUS v7; // eax
  HANDLE v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  PVOID Object; // [rsp+38h] [rbp-D0h] BYREF
  void *EventHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v26[52]; // [rsp+88h] [rbp-80h] BYREF
  int v27; // [rsp+BCh] [rbp-4Ch]

  if ( *((_QWORD *)a1 + 7) )
  {
    v2 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v2);
    UserSessionSwitchLeaveCrit(v4, v3);
    KeWaitForSingleObject(v2, WrUserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
    goto LABEL_23;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result < 0 )
    return result;
  v6 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  *((_QWORD *)a1 + 7) = Object;
  ZwClose(EventHandle);
  if ( v6 < 0 )
    return v6;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    xxxLW_LoadFonts(0LL);
    if ( !(unsigned int)xxxInitInput(a1) )
    {
      v6 = -1073741801;
LABEL_11:
      ObfDereferenceObject(*((PVOID *)a1 + 7));
      return v6;
    }
  }
  v6 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v6 < 0 )
    goto LABEL_11;
  v7 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  v8 = Handle;
  v6 = v7;
  *((_QWORD *)a1 + 5) = Object;
  ZwClose(v8);
  if ( v6 < 0 )
    goto LABEL_11;
  v2 = (void *)*((_QWORD *)a1 + 5);
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v26, 1LL, a1) )
    goto LABEL_13;
  v11 = 0;
  UserSessionSwitchLeaveCrit(v10, v9);
  v16 = PsGetCurrentProcess(v13, v12, v14, v15) == gpepCSRSS
      ? LpcRequestPort(CsrApiPort, v26)
      : LpcRequestWaitReplyPort(CsrApiPort, v26, v26);
  if ( v16 >= 0 && (PsGetCurrentProcess(v18, v17, v19, v20) == gpepCSRSS || v27 >= 0) )
  {
    KeWaitForSingleObject(v2, WrUserRequest, 0, 0, 0LL);
    v11 = 1;
  }
  EnterCrit(0LL, 1LL);
  if ( !v11 )
  {
LABEL_13:
    ObfDereferenceObject(*((PVOID *)a1 + 7));
    ObfDereferenceObject(v2);
    return -1073741801;
  }
LABEL_23:
  ObfDereferenceObject(v2);
  *((_QWORD *)a1 + 5) = 0LL;
  v21 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    *(_DWORD *)a1 = v21 & 0xFFFFFFF7;
    return -1073741801;
  }
  *(_DWORD *)a1 = v21 | 1;
  return 0;
}
