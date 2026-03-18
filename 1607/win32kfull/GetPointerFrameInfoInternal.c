/*
 * XREFs of GetPointerFrameInfoInternal @ 0x1C01D75AC
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C000BAD0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01EF99C (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerFrameInfoInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned __int8 *a8)
{
  unsigned __int64 ThreadPointerData; // rcx
  __int64 v11; // rcx
  unsigned int v13[6]; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, v13, &v14, 0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( !v14 )
  {
    v11 = 5LL;
    goto LABEL_3;
  }
  if ( a3 != 1 && a3 != v13[0] )
  {
    v11 = 1629LL;
    goto LABEL_3;
  }
  if ( !GetPointerFrameDataWithHistory(ThreadPointerData, a3, a4, a5, a6, a7, a8) )
  {
LABEL_2:
    v11 = 87LL;
LABEL_3:
    UserSetLastError(v11);
    return 0LL;
  }
  return 1LL;
}
