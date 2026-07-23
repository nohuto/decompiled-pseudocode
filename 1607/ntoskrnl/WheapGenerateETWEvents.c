/*
 * XREFs of WheapGenerateETWEvents @ 0x140230F14
 * Callers:
 *     WheaReportHwError @ 0x140230000 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x140230700 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x14057F8D0 (WheapEtwEnableCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapGenerateETWEvents(__int64 a1)
{
  int v1; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v3.Ptr = a1 + 20;
  v1 = *(_DWORD *)(a1 + 20);
  v3.Reserved = 0;
  v3.Size = 4;
  v4 = a1;
  v6 = 0;
  v5 = v1;
  return EtwWrite((REGHANDLE)WheapDispatchPtr.DriverObject, &EVENT_WHEA_ERROR, 0LL, 2u, &v3);
}
