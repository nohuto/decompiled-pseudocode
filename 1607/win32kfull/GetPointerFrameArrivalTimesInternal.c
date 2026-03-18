/*
 * XREFs of GetPointerFrameArrivalTimesInternal @ 0x1C01D7550
 * Callers:
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C0214330 (NtUserGetPointerFrameArrivalTimes.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z @ 0x1C01EF4F0 (-GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerFrameArrivalTimesInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned __int64 ThreadPointerData; // rax

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, 0LL, 0LL, 0LL);
  if ( ThreadPointerData && (unsigned int)GetPointerDataArrivalTimes(ThreadPointerData, a3, a4) )
    return 1LL;
  UserSetLastError(87LL);
  return 0LL;
}
