/*
 * XREFs of PopUmpoProcessMessage @ 0x140449588
 * Callers:
 *     PopUmpoProcessMessages @ 0x140092198 (PopUmpoProcessMessages.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x140151480 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x1401514A0 (ZwAlpcCancelMessage.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopUmpoProcessPowerMessage @ 0x1404496B8 (PopUmpoProcessPowerMessage.c)
 *     PopReleaseUmpoPushLock @ 0x140455BF4 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x140455C48 (PopAcquireUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ebx
  HANDLE v7; // rbx
  _QWORD v8[9]; // [rsp+80h] [rbp-68h] BYREF

  v3 = *(unsigned __int16 *)(a1 + 4);
  v4 = v3 & 0xFFFF00FF;
  if ( (v3 & 0xFFFF00FF) != 3 )
  {
    if ( v4 != 1 )
    {
      if ( v4 > 4 )
      {
        if ( v4 <= 6 )
        {
          LOBYTE(v3) = 1;
          PopUmpoAlpcClientConnected = 0;
          PopAcquireUmpoPushLock(v3);
          v7 = PopAlpcClientPort;
          PopAlpcClientPort = 0LL;
          PopReleaseUmpoPushLock();
          ZwClose(v7);
          return (unsigned int)-1073740032;
        }
        if ( v4 == 10 )
        {
          memset(v8, 0, sizeof(v8));
          v8[2] = 512LL;
          v5 = ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
          if ( v5 < 0 )
          {
            ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
            return (unsigned int)v5;
          }
          PopUmpoAlpcClientConnected = 1;
        }
      }
      return 0;
    }
    goto LABEL_14;
  }
  if ( (v3 & 0x2000) != 0 )
  {
LABEL_14:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0LL, a2);
    return 0;
  }
  v5 = PopUmpoProcessPowerMessage(a1 + 40);
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
