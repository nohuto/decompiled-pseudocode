/*
 * XREFs of LockMFMWFPWindow @ 0x1C020F004
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0233768 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     UnlockMFMWFPWindow @ 0x1C01413F4 (UnlockMFMWFPWindow.c)
 *     IsMFMWFPWindow @ 0x1C0142218 (IsMFMWFPWindow.c)
 */

void __fastcall LockMFMWFPWindow(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *a1 != a2 )
  {
    UnlockMFMWFPWindow(a1, a2, a3, a4);
    if ( IsMFMWFPWindow(a2) )
      HMAssignmentLock(a1, a2);
    else
      *a1 = a2;
  }
}
