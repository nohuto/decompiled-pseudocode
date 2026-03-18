/*
 * XREFs of UnlockMFMWFPWindow @ 0x140291824
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMNEndMenuStateInternal @ 0x14026C3B0 (xxxMNEndMenuStateInternal.c)
 *     NtUserMNDragLeave @ 0x1402B7D20 (NtUserMNDragLeave.c)
 *     LockMFMWFPWindow @ 0x1402D92A8 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1402D9304 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x14008A0E4 (IsMFMWFPWindow.c)
 */

char __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  int v1; // eax
  _QWORD *v2; // r8

  LOBYTE(v1) = IsMFMWFPWindow(*a1);
  if ( v1 )
    LOBYTE(v1) = HMAssignmentUnlock(v2);
  else
    *v2 = 0LL;
  return v1;
}
