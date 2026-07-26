/*
 * XREFs of Template_qq @ 0x1C0049D88
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C0012CF0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     ndisTraceDpcStart @ 0x1C004AE8C (ndisTraceDpcStart.c)
 *     ndisSetBusySync @ 0x1C0067C58 (ndisSetBusySync.c)
 *     ndisSubmitIdleRequest @ 0x1C0068170 (ndisSubmitIdleRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
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
