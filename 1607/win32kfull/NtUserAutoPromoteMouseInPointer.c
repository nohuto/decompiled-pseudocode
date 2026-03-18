/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C0210C50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsShellThreadMiPEnabled @ 0x1C0105500 (IsShellThreadMiPEnabled.c)
 *     SetMiPPromotion @ 0x1C01D88CC (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(unsigned int a1)
{
  int v2; // ebx
  __int64 v3; // r8
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = 1;
  EnterCrit(0LL, 1LL);
  if ( ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) & 4) != 0
     || (unsigned int)IsShellThreadMiPEnabled(gptiCurrent))
    && (v4 = *(_DWORD **)(gptiCurrent + 1136LL)) != 0LL
    && (*v4 & 1) != 0 )
  {
    SetMiPPromotion(gptiCurrent, a1, v3);
  }
  else
  {
    v2 = 0;
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v2;
}
