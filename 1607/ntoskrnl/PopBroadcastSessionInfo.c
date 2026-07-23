/*
 * XREFs of PopBroadcastSessionInfo @ 0x14057C174
 * Callers:
 *     PopNotifyBrightnessChangesWorker @ 0x14014A990 (PopNotifyBrightnessChangesWorker.c)
 *     PopWin32kPowerSettingCallback @ 0x14014AAD4 (PopWin32kPowerSettingCallback.c)
 *     PopUmpoProcessPowerMessage @ 0x1403F6B18 (PopUmpoProcessPowerMessage.c)
 *     PopSetAwayModeStatus @ 0x14066EB18 (PopSetAwayModeStatus.c)
 *     PopSetWin32kInputTimeout @ 0x140674D78 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopBroadcastSessionInfo(int a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  char v5; // [rsp+24h] [rbp-34h]
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  result = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    v4 = a1;
    v6 = a2;
    v7 = a3;
    v5 = 0;
    v8 = 0;
    v9 = 0LL;
    return PsInvokeWin32Callout(5, (__int64)&v4, 2, 0LL);
  }
  return result;
}
