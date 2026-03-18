/*
 * XREFs of NtUserGetRequiredCursorSizes @ 0x140207820
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z @ 0x140291EA0 (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z.c)
 */

__int64 __fastcall NtUserGetRequiredCursorSizes(__int64 a1, volatile void *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax

  EnterCrit(0LL, 0LL);
  v4 = HMValidateHandleWithDescriptor(a1, 3u);
  v7 = v4;
  v8 = 0;
  if ( v4 && *(_QWORD *)(v4 + 48) == v4 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5);
    ProbeForWrite(a2, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    UserSessionState = W32GetUserSessionState(v11, v10);
    CCursorSizes::HandleRequestCursorSizesRequest(
      *(CCursorSizes **)(UserSessionState + 36376),
      (volatile struct tagCURSORSIZEINFO *)a2);
    *(_DWORD *)(v7 + 80) |= 0x4000u;
    v8 = 1;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
