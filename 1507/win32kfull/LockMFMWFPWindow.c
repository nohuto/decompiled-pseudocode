/*
 * XREFs of LockMFMWFPWindow @ 0x1C0216604
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BB60 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     UnlockMFMWFPWindow @ 0x1C010B474 (UnlockMFMWFPWindow.c)
 *     IsMFMWFPWindow @ 0x1C010BDAC (IsMFMWFPWindow.c)
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
