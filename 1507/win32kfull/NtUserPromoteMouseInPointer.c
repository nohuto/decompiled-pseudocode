/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x1C021ECE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsShellThreadMiPEnabled @ 0x1C00E1D60 (IsShellThreadMiPEnabled.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rdx
  unsigned int v1; // ebx
  __int64 v2; // rcx
  _DWORD *v3; // rax

  EnterCrit(1LL);
  v1 = 0;
  v2 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL);
  if ( ((v2 & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled(gptiCurrent))
    && (v3 = *(_DWORD **)(gptiCurrent + 1120LL)) != 0LL )
  {
    *v3 |= 2u;
    v1 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v2, v0);
  return v1;
}
