/*
 * XREFs of NtUserUnloadKeyboardLayout @ 0x1C0221720
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00699F0 (_GetProcessWindowStation.c)
 *     HKLtoPKL @ 0x1C0099B34 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0099BB8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

__int64 __fastcall NtUserUnloadKeyboardLayout(__int64 a1)
{
  struct tagKL *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagKL **v5; // r9
  unsigned int v6; // ebx

  EnterCrit(0LL, 1LL);
  GetProcessWindowStation(0LL);
  v2 = (struct tagKL *)HKLtoPKL(gptiCurrent, a1);
  v6 = 0;
  if ( v2 )
    v6 = xxxInternalUnloadKeyboardLayout(v5, v2, 0);
  UserSessionSwitchLeaveCrit(v4, v3);
  return v6;
}
