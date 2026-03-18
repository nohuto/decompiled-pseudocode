/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C0131650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v8; // rax

  EnterCrit(1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v4 = *(_QWORD *)(v6 + 16);
    if ( *(_QWORD *)(v4 + 384) == CurrentProcessWin32Process )
    {
      v8 = InternalRemoveProp(v6, gatomShutdownBlockingReason, 1);
      if ( v8 )
      {
        Win32FreePool(v8);
        v5 = 1;
      }
      else
      {
        UserSetLastError(87);
      }
    }
    else
    {
      v5 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
