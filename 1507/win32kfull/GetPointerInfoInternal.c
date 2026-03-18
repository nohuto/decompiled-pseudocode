/*
 * XREFs of GetPointerInfoInternal @ 0x1C01E0D74
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C00048E0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F7E04 (-GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8958 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerInfoInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPOINTER_INFO *a5)
{
  unsigned __int64 ThreadPointerData; // rax
  int v8; // ecx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, &v10, 0LL, 0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( a3 != 1 && a3 != v10 )
  {
    v8 = 1629;
    goto LABEL_3;
  }
  if ( !GetPointerData(ThreadPointerData, a3, a4, a5) )
  {
LABEL_2:
    v8 = 87;
LABEL_3:
    UserSetLastError(v8);
    return 0LL;
  }
  return 1LL;
}
