/*
 * XREFs of NtUserOpenInputDesktop @ 0x1C00D8F90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     OpenDesktopCompletion @ 0x1C00DA998 (OpenDesktopCompletion.c)
 *     _GetProcessWindowStation @ 0x1C00DAF00 (_GetProcessWindowStation.c)
 *     CloseProtectedHandle @ 0x1C00DCB44 (CloseProtectedHandle.c)
 */

HANDLE __fastcall NtUserOpenInputDesktop(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 ProcessWindowStation; // rax
  __int64 v8; // rcx
  PVOID v9; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v11; // eax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  HANDLE v15; // rbx
  NTSTATUS v17; // ecx
  __int64 v18; // rcx
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
    v18 = 5LL;
    goto LABEL_26;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    Handle = 0LL;
    v18 = 1LL;
    goto LABEL_26;
  }
  v9 = gbDesktopLocked ? gspdeskShouldBeForeground : (PVOID)grpdeskRitInput;
  if ( !v9 )
  {
LABEL_13:
    Handle = 0LL;
    v18 = 110LL;
LABEL_26:
    UserSetLastError(v18);
    goto LABEL_11;
  }
  CurrentProcess = PsGetCurrentProcess(v8);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    AccessMode = 0;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v9);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v9) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v11 = ObOpenObjectByPointer(
          v9,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v11 < 0 )
  {
    v17 = v11;
LABEL_25:
    Handle = 0LL;
    v18 = RtlNtStatusToDosError(v17);
    goto LABEL_26;
  }
  v12 = OpenDesktopCompletion(v9, Handle, a1);
  if ( v12 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle);
    if ( v12 >= 0 )
      v12 = -1073741801;
    v17 = v12;
    goto LABEL_25;
  }
LABEL_11:
  v15 = Handle;
  UserSessionSwitchLeaveCrit(v14, v13);
  return v15;
}
