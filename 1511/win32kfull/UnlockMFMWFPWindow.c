/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C0137970
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0137890 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0216468 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C02164AC (MNCheckButtonDownState.c)
 *     NtUserMNDragLeave @ 0x1C021D2A0 (NtUserMNDragLeave.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0138064 (IsMFMWFPWindow.c)
 */

__int64 __fastcall UnlockMFMWFPWindow(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx

  result = IsMFMWFPWindow(*a1);
  if ( (_DWORD)result )
    return HMAssignmentUnlock(v2);
  *v2 = 0LL;
  return result;
}
