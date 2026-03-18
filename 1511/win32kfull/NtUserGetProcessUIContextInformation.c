/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C00E5910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2)
{
  PVOID v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v13; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  }
  else
  {
    v8 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    if ( v8 < 0 )
    {
      UserSetLastError(87);
      v5 = 0;
      goto LABEL_19;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v11 = 87;
      goto LABEL_16;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
  }
  if ( CurrentProcessWin32Process && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x21) != 0 )
  {
    v10 = *(unsigned int *)(CurrentProcessWin32Process + 776);
    v9 = (v10 & 0x40) != 0;
    HIDWORD(v13) = (v10 & 0x40) != 0;
    if ( (v10 & 0x100) != 0 )
    {
      v9 = (unsigned int)v9 | 2;
      HIDWORD(v13) = v9;
    }
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_QWORD *)W32UserProbeAddress;
    LODWORD(v13) = ((unsigned int)v10 >> 4) & 3;
    *a2 = v13;
    goto LABEL_17;
  }
  v11 = 1471;
LABEL_16:
  UserSetLastError(v11);
  v5 = 0;
LABEL_17:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_19:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v5;
}
