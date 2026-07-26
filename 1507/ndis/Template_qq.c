/*
 * XREFs of Template_qq @ 0x1C0049538
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C00107B0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisSetBusyAsync @ 0x1C0023238 (ndisSetBusyAsync.c)
 *     ndisTraceDpcStart @ 0x1C004A5EC (ndisTraceDpcStart.c)
 *     ndisSetBusySync @ 0x1C0068B84 (ndisSetBusySync.c)
 *     ndisSubmitIdleRequest @ 0x1C00690A0 (ndisSubmitIdleRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, int a4, __int64 a5)
{
  _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (unsigned __int64)&v10;
  v6.Size = 4;
  v6.Reserved = 0;
  v7 = &a5;
  v8 = 4;
  v9 = 0;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 2u, &v6);
}
