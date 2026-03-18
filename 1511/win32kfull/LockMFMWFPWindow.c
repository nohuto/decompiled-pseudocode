/*
 * XREFs of LockMFMWFPWindow @ 0x1C0216468
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BD30 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     UnlockMFMWFPWindow @ 0x1C0137970 (UnlockMFMWFPWindow.c)
 *     IsMFMWFPWindow @ 0x1C0138064 (IsMFMWFPWindow.c)
 */

void __fastcall LockMFMWFPWindow(__int64 *a1, __int64 a2)
{
  if ( *a1 != a2 )
  {
    UnlockMFMWFPWindow(a1);
    if ( IsMFMWFPWindow(a2) )
      HMAssignmentLock(a1, a2);
    else
      *a1 = a2;
  }
}
