/*
 * XREFs of GetPointerInfoHistoryInternal @ 0x1C01E1304
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0007430 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01F84E4 (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8E08 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerInfoHistoryInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  unsigned __int64 ThreadPointerData; // rcx
  int v9; // ecx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 960), a2, &v11, 0LL, 0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( a3 != 1 && a3 != v11 )
  {
    v9 = 1629;
    goto LABEL_3;
  }
  if ( !GetPointerDataWithHistory(ThreadPointerData, a3, a4, a5, a6) )
  {
LABEL_2:
    v9 = 87;
LABEL_3:
    UserSetLastError(v9);
    return 0LL;
  }
  return 1LL;
}
