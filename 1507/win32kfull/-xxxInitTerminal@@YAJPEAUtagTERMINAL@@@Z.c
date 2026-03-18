/*
 * XREFs of ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C0139710
 * Callers:
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 * Callees:
 *     xxxInitInput @ 0x1C013B3FC (xxxInitInput.c)
 *     xxxLW_LoadFonts @ 0x1C013B4F0 (xxxLW_LoadFonts.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  PVOID Object; // [rsp+38h] [rbp-D0h] BYREF
  void *EventHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v22[52]; // [rsp+88h] [rbp-80h] BYREF
  int v23; // [rsp+BCh] [rbp-4Ch]

  if ( *((_QWORD *)a1 + 7) )
  {
    v2 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v2);
    UserSessionSwitchLeaveCrit(v4, v3);
    KeWaitForSingleObject(v2, WrUserRequest, 0, 0, 0LL);
    EnterCrit(1LL);
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
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v22, 1LL, a1) )
    goto LABEL_13;
  v11 = 0;
  UserSessionSwitchLeaveCrit(v10, v9);
  v14 = PsGetCurrentProcess(v13, v12) == gpepCSRSS
      ? LpcRequestPort(CsrApiPort, v22)
      : LpcRequestWaitReplyPort(CsrApiPort, v22, v22);
  if ( v14 >= 0 && (PsGetCurrentProcess(v16, v15) == gpepCSRSS || v23 >= 0) )
  {
    KeWaitForSingleObject(v2, WrUserRequest, 0, 0, 0LL);
    v11 = 1;
  }
  EnterCrit(1LL);
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
  v17 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    *(_DWORD *)a1 = v17 & 0xFFFFFFF7;
    return -1073741801;
  }
  *(_DWORD *)a1 = v17 | 1;
  return 0;
}
