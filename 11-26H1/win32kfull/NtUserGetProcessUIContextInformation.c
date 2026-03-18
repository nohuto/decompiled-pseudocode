/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1402B4550
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, void *a2)
{
  PVOID v4; // rsi
  int v5; // edi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // r8
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  int ProcessSessionId; // ebx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 ProcessWin32Process; // rax
  BOOL v15; // ecx
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v19; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v19 = 0LL;
  Src = 0LL;
  v5 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&Object, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  else
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    v19 = Object;
    if ( v9 < 0 )
    {
      UserSetLastError(87);
      v5 = 0;
      goto LABEL_19;
    }
    ProcessSessionId = PsGetProcessSessionIdEx(Object);
    if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId(v12) )
    {
      v13 = 87;
      goto LABEL_16;
    }
    ProcessWin32Process = PsGetProcessWin32Process(v4);
    v8 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v8 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  }
  if ( v8 && (*(_DWORD *)(v8 + 12) & 0x21) != 0 )
  {
    Src = (*(_DWORD *)(v8 + 808) >> 4) & 3LL;
    v15 = (*(_BYTE *)(v8 + 808) & 0x40) != 0;
    HIDWORD(Src) = v15;
    if ( (*(_DWORD *)(v8 + 808) & 0x100LL) != 0 )
      HIDWORD(Src) = v15 | 2;
    RtlCopyToUser(a2, &Src, 8uLL);
    goto LABEL_17;
  }
  v13 = 1471;
LABEL_16:
  UserSetLastError(v13);
  v5 = 0;
LABEL_17:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_19:
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}
