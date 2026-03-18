/*
 * XREFs of NtUserOpenInputDesktop @ 0x1C01222D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C00699F0 (_GetProcessWindowStation.c)
 *     CloseProtectedHandle @ 0x1C00CEC44 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C0122050 (OpenDesktopCompletion.c)
 */

HANDLE __fastcall NtUserOpenInputDesktop(char a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 ProcessWindowStation; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID v12; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  HANDLE v18; // rbx
  NTSTATUS v20; // ecx
  ULONG v21; // ecx
  const UNICODE_STRING *NameInfo; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Handle = 0LL;
  AccessMode = 1;
  EnterCrit(0LL, 1LL);
  if ( !grpdeskRitInput )
    goto LABEL_13;
  ProcessWindowStation = GetProcessWindowStation(&DestinationString);
  if ( !ProcessWindowStation )
  {
    Handle = 0LL;
    v21 = 5;
    goto LABEL_26;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    Handle = 0LL;
    v21 = 1;
    goto LABEL_26;
  }
  v12 = gbDesktopLocked ? gspdeskShouldBeForeground : (PVOID)grpdeskRitInput;
  if ( !v12 )
  {
LABEL_13:
    Handle = 0LL;
    v21 = 110;
LABEL_26:
    UserSetLastError(v21);
    goto LABEL_11;
  }
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    AccessMode = 0;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v12);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v12) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v14 = ObOpenObjectByPointer(
          v12,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v14 < 0 )
  {
    v20 = v14;
LABEL_25:
    Handle = 0LL;
    v21 = RtlNtStatusToDosError(v20);
    goto LABEL_26;
  }
  v15 = OpenDesktopCompletion((__int64)v12, (__int64)Handle, a1);
  if ( v15 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v15 >= 0 )
      v15 = -1073741801;
    v20 = v15;
    goto LABEL_25;
  }
LABEL_11:
  v18 = Handle;
  UserSessionSwitchLeaveCrit(v17, v16);
  return v18;
}
