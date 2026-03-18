/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C0001260
 * Callers:
 *     <none>
 * Callees:
 *     SetMiPPromotion @ 0x1C00012DC (SetMiPPromotion.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsShellThreadMiPEnabled @ 0x1C00E1D60 (IsShellThreadMiPEnabled.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(unsigned int a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax

  v2 = 1;
  EnterCrit(1LL);
  if ( ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL) & 4) != 0
     || (unsigned int)IsShellThreadMiPEnabled(gptiCurrent))
    && (v3 = *(_DWORD **)(gptiCurrent + 1120LL)) != 0LL
    && (*v3 & 1) != 0 )
  {
    SetMiPPromotion(gptiCurrent, a1);
  }
  else
  {
    v2 = 0;
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
