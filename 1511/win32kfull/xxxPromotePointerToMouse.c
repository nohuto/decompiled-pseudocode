/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01E1A0C
 * Callers:
 *     NtUserPromotePointer @ 0x1C021EB60 (NtUserPromotePointer.c)
 *     xxxDefPointerProc @ 0x1C02317CC (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8E08 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxPromotePointerToMouse(unsigned __int16 a1, unsigned int a2)
{
  unsigned __int64 ThreadPointerData; // rax

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 960LL), a1, 0LL, 0LL, 0LL);
  if ( ThreadPointerData )
    return xxxPromotePointerDataToMouse(ThreadPointerData, a2);
  UserSetLastError(87);
  return 0LL;
}
