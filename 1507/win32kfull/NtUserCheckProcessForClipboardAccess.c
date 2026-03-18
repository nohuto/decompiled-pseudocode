/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C0218580
 * Callers:
 *     <none>
 * Callees:
 *     ?InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C00443C8 (-InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C008077C (LockProcessByClientId.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(int a1, _DWORD *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 i; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0;
  EnterCrit(1LL);
  if ( (int)LockProcessByClientId(v3, &Object) >= 0 && (ProcessWin32Process = PsGetProcessWin32Process(Object)) != 0 )
  {
    for ( i = *(_QWORD *)(ProcessWin32Process + 296); i; i = *(_QWORD *)(i + 592) )
    {
      v5 = InForegroundQueue((struct tagTHREADINFO *)i);
      if ( v5 )
        break;
    }
    v4 = 1;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_DWORD *)W32UserProbeAddress;
    *a2 = v5;
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
