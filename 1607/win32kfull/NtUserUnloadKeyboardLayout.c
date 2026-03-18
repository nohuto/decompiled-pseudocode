/*
 * XREFs of NtUserUnloadKeyboardLayout @ 0x1C021B860
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00DAF00 (_GetProcessWindowStation.c)
 *     HKLtoPKL @ 0x1C00E8460 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C00E84C0 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

__int64 __fastcall NtUserUnloadKeyboardLayout(__int64 a1)
{
  __int64 v2; // rdx
  struct tagKL *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagKL **v6; // r9
  int v7; // ebx

  EnterCrit(0LL, 1LL);
  GetProcessWindowStation(0LL, v2);
  v3 = (struct tagKL *)HKLtoPKL(gptiCurrent, a1);
  v7 = 0;
  if ( v3 )
    v7 = xxxInternalUnloadKeyboardLayout(v6, v3, 0);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v7;
}
