/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01D7C84
 * Callers:
 *     NtUserPromotePointer @ 0x1C0218790 (NtUserPromotePointer.c)
 *     xxxDefPointerProc @ 0x1C022A614 (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxPromotePointerToMouse(unsigned __int16 a1, unsigned int a2)
{
  unsigned __int64 ThreadPointerData; // rax

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL), a1, 0LL, 0LL, 0LL);
  if ( ThreadPointerData )
    return xxxPromotePointerDataToMouse(ThreadPointerData, a2);
  UserSetLastError(87LL);
  return 0LL;
}
