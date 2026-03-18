/*
 * XREFs of GetPointerInfoInternal @ 0x1C01D76DC
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C000BAD0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01EF4A0 (-GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerInfoInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPOINTER_INFO *a5)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, &v10, 0LL, 0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( a3 != 1 && a3 != v10 )
  {
    v8 = 1629LL;
    goto LABEL_3;
  }
  if ( !GetPointerData(ThreadPointerData, a3, a4, a5) )
  {
LABEL_2:
    v8 = 87LL;
LABEL_3:
    UserSetLastError(v8);
    return 0LL;
  }
  return 1LL;
}
