/*
 * XREFs of Template_qN16 @ 0x1800E1E54
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x180067390 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 *     ?GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z @ 0x1800DF4BC (-GetPresentCount@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qN16(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  int v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = a5;
  v9 = 0;
  v8 = 64;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Stop, 2u, &v6);
}
