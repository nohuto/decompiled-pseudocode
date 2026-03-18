/*
 * XREFs of PopSendSessionInfo @ 0x14063C7BC
 * Callers:
 *     PopReleaseAdaptiveLock @ 0x1404C50D8 (PopReleaseAdaptiveLock.c)
 *     PopSensorActiveInput @ 0x14063C618 (PopSensorActiveInput.c)
 *     PopSetWin32kInputTimeout @ 0x14063C684 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopSendSessionInfo(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-38h] BYREF
  char v6; // [rsp+24h] [rbp-34h]
  int v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = a1;
  result = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    v5 = 0;
    v6 = 0;
    v7 = 20;
    v8 = a4;
    v9 = 0;
    v10 = 0LL;
    return PsInvokeWin32Callout((_KPROCESS *)5, (__int64)&v5, 1, (int)&v11);
  }
  return result;
}
