/*
 * XREFs of PopBroadcastSessionInfo @ 0x1405BC948
 * Callers:
 *     PopNotifyBrightnessChangesWorker @ 0x14016DA60 (PopNotifyBrightnessChangesWorker.c)
 *     PopWin32kPowerSettingCallback @ 0x14016DC78 (PopWin32kPowerSettingCallback.c)
 *     PopSetAwayModeStatus @ 0x1406B5FC0 (PopSetAwayModeStatus.c)
 *     PopSetWin32kInputTimeout @ 0x1406BCCE0 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopBroadcastSessionInfo(__int64 a1, __int64 a2, __int64 a3)
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
    v7 = a3;
    v4 = 0;
    v5 = 0;
    v6 = 20;
    v8 = 0;
    v9 = 0LL;
    return PsInvokeWin32Callout((_KPROCESS *)5, (__int64)&v4, 2, 0);
  }
  return result;
}
