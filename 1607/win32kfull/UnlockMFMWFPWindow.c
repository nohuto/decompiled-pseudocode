/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C01413F4
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0141310 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C020F004 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C020F048 (MNCheckButtonDownState.c)
 *     NtUserMNDragLeave @ 0x1C0216EA0 (NtUserMNDragLeave.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0142218 (IsMFMWFPWindow.c)
 */

__int64 __fastcall UnlockMFMWFPWindow(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v5; // rdx

  result = IsMFMWFPWindow(*a1, a1, a3, a4);
  if ( (_DWORD)result )
    return HMAssignmentUnlock(v5);
  *v5 = 0LL;
  return result;
}
