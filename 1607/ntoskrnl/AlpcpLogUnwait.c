/*
 * XREFs of AlpcpLogUnwait @ 0x140656964
 * Callers:
 *     AlpcpSignalAndWait @ 0x14005E020 (AlpcpSignalAndWait.c)
 *     AlpcpWaitForSingleObject @ 0x1400A0FA0 (AlpcpWaitForSingleObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x140656688 (AlpcpInvokeLogCallbacks.c)
 */

unsigned __int64 __fastcall AlpcpLogUnwait(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v5 = a1;
  v4 = 5;
  v3 = v1;
  return AlpcpInvokeLogCallbacks((__int64)&v3, 0x20u);
}
