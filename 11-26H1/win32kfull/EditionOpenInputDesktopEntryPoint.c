/*
 * XREFs of EditionOpenInputDesktopEntryPoint @ 0x1401A1E70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x14018B5B0 (CloseProtectedHandle.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     OpenDesktopCompletion @ 0x1401A20EC (OpenDesktopCompletion.c)
 */

HANDLE __fastcall EditionOpenInputDesktopEntryPoint(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rbx
  NTSTATUS v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  HANDLE v19; // rbx
  NTSTATUS v21; // ecx
  ULONG v22; // ecx
  const UNICODE_STRING *NameInfo; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  Handle = 0LL;
  AccessMode = 1;
  EnterCrit(0LL, 0LL);
  UserSessionState = W32GetUserSessionState(v8, v7);
  if ( !*(_QWORD *)(UserSessionState + 19176) )
    goto LABEL_18;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  if ( CurrentProcessWin32Process )
  {
    v13 = -*(_QWORD *)CurrentProcessWin32Process;
    v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v12;
  }
  v14 = *(_QWORD *)(CurrentProcessWin32Process + 656);
  if ( !v14 )
  {
    v22 = 5;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v14 + 32) & 4) != 0 )
  {
    v22 = 1;
    goto LABEL_16;
  }
  v15 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 62824)
      ? *(void **)(UserSessionState + 19184)
      : *(void **)(UserSessionState + 19176);
  if ( !v15 )
  {
LABEL_18:
    v22 = 110;
    goto LABEL_16;
  }
  if ( (unsigned int)IsCurrentProcessDwm() )
  {
    AccessMode = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v15);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v15) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v16 = ObOpenObjectByPointer(
          v15,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v16 < 0 )
  {
    v21 = v16;
LABEL_15:
    Handle = 0LL;
    v22 = RtlNtStatusToDosError(v21);
LABEL_16:
    UserSetLastError(v22);
    goto LABEL_13;
  }
  v17 = OpenDesktopCompletion(v15, Handle, a1);
  if ( v17 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v17 >= 0 )
      v17 = -1073741801;
    v21 = v17;
    goto LABEL_15;
  }
LABEL_13:
  v19 = Handle;
  UserSessionSwitchLeaveCrit(v18);
  return v19;
}
