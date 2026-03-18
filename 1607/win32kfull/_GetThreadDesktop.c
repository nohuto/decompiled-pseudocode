/*
 * XREFs of _GetThreadDesktop @ 0x1C0057350
 * Callers:
 *     NtUserGetThreadDesktop @ 0x1C0057320 (NtUserGetThreadDesktop.c)
 * Callees:
 *     PtiFromThreadId @ 0x1C0057448 (PtiFromThreadId.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01DF3C8 (GetConsoleDesktop.c)
 */

HANDLE __fastcall GetThreadDesktop(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rdx
  HANDLE result; // rax
  PRKPROCESS *v5; // rbx
  int v6; // eax
  NTSTATUS v7; // eax
  PVOID v8; // rbx
  int v9; // edi
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp+38h] BYREF

  v1 = a1;
  v2 = PtiFromThreadId(a1);
  v3 = v2;
  if ( v2 )
  {
    result = *(HANDLE *)(v2 + 512);
    Handle = result;
    v5 = *(PRKPROCESS **)(v3 + 376);
  }
  else
  {
    if ( (int)GetConsoleDesktop(v1, &Handle, 0LL, &Object) < 0 )
      return 0LL;
    v5 = (PRKPROCESS *)Object;
    result = Handle;
  }
  if ( result )
  {
    if ( v5 != (PRKPROCESS *)PsGetCurrentProcessWin32Process() )
    {
      KeAttachProcess(*v5);
      v7 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
      v8 = Object;
      v9 = v7;
      KeDetachProcess();
      if ( v9 < 0
        || (CurrentProcess = PsGetCurrentProcess(),
            !(unsigned __int8)ObFindHandleForObject(CurrentProcess, v8, 0LL, &HandleInformation, &Handle)) )
      {
        Handle = 0LL;
      }
      if ( v9 >= 0 )
        ObfDereferenceObject(v8);
    }
    if ( Handle )
    {
      v6 = SetHandleFlag(Handle, 1LL, 1LL);
      return (HANDLE)((unsigned __int64)Handle & -(__int64)(v6 != 0));
    }
    else
    {
      UserSetLastError(5LL);
      return Handle;
    }
  }
  return result;
}
