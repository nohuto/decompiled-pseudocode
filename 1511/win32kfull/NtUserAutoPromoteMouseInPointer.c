/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C000C2D0
 * Callers:
 *     <none>
 * Callees:
 *     SetMiPPromotion @ 0x1C000C34C (SetMiPPromotion.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsShellThreadMiPEnabled @ 0x1C0064470 (IsShellThreadMiPEnabled.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(unsigned int a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 1;
  EnterCrit(0LL, 1LL);
  if ( ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL) & 4) != 0
     || (unsigned int)IsShellThreadMiPEnabled(gptiCurrent))
    && (v3 = *(_DWORD **)(gptiCurrent + 1112LL)) != 0LL
    && (*v3 & 1) != 0 )
  {
    SetMiPPromotion(gptiCurrent, a1);
  }
  else
  {
    v2 = 0;
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
