/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C0108CB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2)
{
  PVOID v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
  }
  else
  {
    v12 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    if ( v12 < 0 )
    {
      UserSetLastError(87LL);
      v5 = 0;
      goto LABEL_12;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v13 = 87LL;
      goto LABEL_19;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
  }
  if ( CurrentProcessWin32Process && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x21) != 0 )
  {
    v10 = *(unsigned int *)(CurrentProcessWin32Process + 768);
    HIDWORD(v14) = (v10 & 0x40) != 0;
    if ( (v10 & 0x100) != 0 )
      HIDWORD(v14) = ((v10 & 0x40) != 0) | 2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    LODWORD(v14) = ((unsigned int)v10 >> 4) & 3;
    *a2 = v14;
    goto LABEL_10;
  }
  v13 = 1471LL;
LABEL_19:
  UserSetLastError(v13);
  v5 = 0;
LABEL_10:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_12:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v5;
}
