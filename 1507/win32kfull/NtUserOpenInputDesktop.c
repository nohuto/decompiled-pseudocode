/*
 * XREFs of NtUserOpenInputDesktop @ 0x1C00DAC70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C007D3C0 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C00DCAB8 (OpenDesktopCompletion.c)
 *     _GetProcessWindowStation @ 0x1C00DD080 (_GetProcessWindowStation.c)
 */

HANDLE __fastcall NtUserOpenInputDesktop(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 ProcessWindowStation; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v12; // eax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  HANDLE v16; // rbx
  NTSTATUS v18; // ecx
  ULONG v19; // ecx
  const UNICODE_STRING *NameInfo; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Handle = 0LL;
  AccessMode = 1;
  EnterCrit(1LL);
  if ( !grpdeskRitInput )
    goto LABEL_13;
  ProcessWindowStation = GetProcessWindowStation(&DestinationString);
  if ( !ProcessWindowStation )
  {
    Handle = 0LL;
    v19 = 5;
    goto LABEL_26;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    Handle = 0LL;
    v19 = 1;
    goto LABEL_26;
  }
  v10 = gbDesktopLocked ? gspdeskShouldBeForeground : (PVOID)grpdeskRitInput;
  if ( !v10 )
  {
LABEL_13:
    Handle = 0LL;
    v19 = 110;
LABEL_26:
    UserSetLastError(v19);
    goto LABEL_11;
  }
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    AccessMode = 0;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v10);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v10) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v12 = ObOpenObjectByPointer(
          v10,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v12 < 0 )
  {
    v18 = v12;
LABEL_25:
    Handle = 0LL;
    v19 = RtlNtStatusToDosError(v18);
    goto LABEL_26;
  }
  v13 = OpenDesktopCompletion(v10, Handle, a1);
  if ( v13 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v13 >= 0 )
      v13 = -1073741801;
    v18 = v13;
    goto LABEL_25;
  }
LABEL_11:
  v16 = Handle;
  UserSessionSwitchLeaveCrit(v15, v14);
  return v16;
}
