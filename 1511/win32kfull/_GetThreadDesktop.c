/*
 * XREFs of _GetThreadDesktop @ 0x1C00659D0
 * Callers:
 *     NtUserGetThreadDesktop @ 0x1C00659A0 (NtUserGetThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 *     GetConsoleDesktop @ 0x1C01E8AE8 (GetConsoleDesktop.c)
 */

HANDLE __fastcall GetThreadDesktop(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  HANDLE result; // rax
  PRKPROCESS *v6; // rbx
  int v7; // eax
  NTSTATUS v8; // eax
  PVOID v9; // rbx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp+38h] BYREF

  v1 = a1;
  v2 = PtiFromThreadId(a1);
  v4 = v2;
  if ( v2 )
  {
    result = *(HANDLE *)(v2 + 512);
    Handle = result;
    v6 = *(PRKPROCESS **)(v4 + 376);
  }
  else
  {
    if ( (int)GetConsoleDesktop(v1, &Handle, 0LL, &Object) < 0 )
      return 0LL;
    v6 = (PRKPROCESS *)Object;
    result = Handle;
  }
  if ( result )
  {
    if ( v6 != (PRKPROCESS *)PsGetCurrentProcessWin32Process(v3) )
    {
      KeAttachProcess(*v6);
      v8 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
      v9 = Object;
      v10 = v8;
      KeDetachProcess();
      if ( v10 < 0
        || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13, v14),
            !(unsigned __int8)ObFindHandleForObject(CurrentProcess, v9, 0LL, &HandleInformation, &Handle)) )
      {
        Handle = 0LL;
      }
      if ( v10 >= 0 )
        ObfDereferenceObject(v9);
    }
    if ( Handle )
    {
      v7 = SetHandleFlag(Handle, 1LL, 1LL);
      return (HANDLE)((unsigned __int64)Handle & -(__int64)(v7 != 0));
    }
    else
    {
      UserSetLastError(5);
      return Handle;
    }
  }
  return result;
}
