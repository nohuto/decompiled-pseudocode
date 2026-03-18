/*
 * XREFs of GetPointerRawDataInternal @ 0x1C01E0DEC
 * Callers:
 *     NtUserGetRawPointerDeviceData @ 0x1C021BDE0 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F877C (-GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8958 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerRawDataInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  unsigned int v9; // ebx
  unsigned __int64 ThreadPointerData; // rax

  v9 = 0;
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, 0LL, 0LL, 0LL);
  if ( ThreadPointerData )
  {
    LOBYTE(v9) = GetPointerRawDataWithHistory(ThreadPointerData, a3, a4, a5, a6, a7) != 0;
    return v9;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
