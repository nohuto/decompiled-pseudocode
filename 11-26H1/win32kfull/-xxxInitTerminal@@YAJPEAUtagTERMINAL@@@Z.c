/*
 * XREFs of ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1402330A4
 * Callers:
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxInitInput @ 0x140249D14 (xxxInitInput.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

NTSTATUS __fastcall xxxInitTerminal(struct tagTERMINAL *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  void *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r15
  char v10; // bl
  __int64 UserSessionState; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rcx
  _BYTE v26[8]; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  void *EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v31[52]; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+B4h] [rbp-4Ch]

  EventHandle = 0LL;
  Handle = 0LL;
  memset_0(v31, 0, 0x3B8uLL);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( *((_QWORD *)a1 + 7) )
  {
    v6 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v6);
    LOBYTE(v23) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v26, v23);
    KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v26);
LABEL_19:
    ObfDereferenceObject(v6);
    v21 = *(_DWORD *)a1;
    *((_QWORD *)a1 + 5) = 0LL;
    if ( (v21 & 8) == 0 )
    {
      *(_DWORD *)a1 = v21 | 1;
      return 0;
    }
    *(_DWORD *)a1 = v21 & 0xFFFFFFF7;
    return -1073741801;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result < 0 )
    return result;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  *((_QWORD *)a1 + 7) = Object;
  ZwClose(EventHandle);
  if ( v3 < 0 )
    return v3;
  if ( (*(_DWORD *)a1 & 2) == 0 && !(unsigned int)xxxInitInput(a1) )
  {
    v3 = -1073741801;
LABEL_23:
    ObfDereferenceObject(*((PVOID *)a1 + 7));
    *((_QWORD *)a1 + 7) = 0LL;
    return v3;
  }
  v3 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v3 < 0 )
    goto LABEL_23;
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  v5 = Handle;
  v3 = v4;
  *((_QWORD *)a1 + 5) = Object;
  ZwClose(v5);
  if ( v3 < 0 )
    goto LABEL_23;
  v6 = (void *)*((_QWORD *)a1 + 5);
  if ( (unsigned int)InitCreateSystemThreadsMsg(v31, 1LL, a1) )
  {
    v9 = 0;
    v10 = 0;
    UserSessionState = W32GetUserSessionState(v8, v7);
    if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
    {
      v10 = 1;
      LeaveMitRitHazardCrit();
    }
    UserSessionSwitchLeaveCrit(v12);
    v14 = *(_QWORD *)(W32GetUserGdiSessionState(v13) + 40);
    if ( PsGetCurrentProcess(v15) == v14 )
    {
      v22 = W32GetUserSessionState(v17, v16);
      v19 = LpcRequestPort(*(_QWORD *)(v22 + 71272), v31);
    }
    else
    {
      Object = (PVOID)952;
      v18 = W32GetUserSessionState(v17, v16);
      v19 = LpcSendWaitReceivePort(*(_QWORD *)(v18 + 71272), 0x20000LL, v31, v31, &Object, 0LL);
    }
    if ( v19 >= 0 )
    {
      v24 = *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40);
      if ( PsGetCurrentProcess(v25) == v24 || v32 >= 0 )
      {
        KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
        v9 = 1;
      }
    }
    EnterCrit(1LL, 0LL);
    if ( v10 )
      EnterMitRitHazardCrit();
    if ( v9 )
      goto LABEL_19;
  }
  ObfDereferenceObject(*((PVOID *)a1 + 7));
  ObfDereferenceObject(v6);
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  return -1073741801;
}
