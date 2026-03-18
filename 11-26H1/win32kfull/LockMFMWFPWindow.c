/*
 * XREFs of LockMFMWFPWindow @ 0x1402D92A8
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402F9B58 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x14008A0E4 (IsMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x140291824 (UnlockMFMWFPWindow.c)
 */

void __fastcall LockMFMWFPWindow(__int64 *a1, __int64 a2)
{
  int v4; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a1 != a2 )
  {
    UnlockMFMWFPWindow(a1);
    LOBYTE(v4) = IsMFMWFPWindow(a2);
    if ( v4 )
    {
      v5[0] = a1;
      v5[1] = a2;
      HMAssignmentLock(v5, 0LL);
    }
    else
    {
      *a1 = a2;
    }
  }
}
