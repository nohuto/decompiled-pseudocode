/*
 * XREFs of ProcessInfoFromPID @ 0x1402192BC
 * Callers:
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1401A2F28 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     xxxConsoleControl @ 0x140278BE4 (xxxConsoleControl.c)
 * Callees:
 *     LockProcessByClientId @ 0x1400FC590 (LockProcessByClientId.c)
 */

__int64 __fastcall ProcessInfoFromPID(int a1)
{
  __int64 v1; // rbx
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId((void *)a1, (PEPROCESS *)&Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v1 = ProcessWin32Process;
    ObfDereferenceObject(Object);
  }
  return v1;
}
