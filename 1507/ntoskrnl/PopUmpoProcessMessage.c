/*
 * XREFs of PopUmpoProcessMessage @ 0x1404FFA1C
 * Callers:
 *     PopUmpoProcessMessages @ 0x1400EE0C4 (PopUmpoProcessMessages.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14017FE50 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x14017FE70 (ZwAlpcCancelMessage.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopReleaseUmpoPushLock @ 0x1404E6304 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x1404E6394 (PopAcquireUmpoPushLock.c)
 *     PopUmpoProcessPowerMessage @ 0x1404FFB68 (PopUmpoProcessPowerMessage.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ecx
  __int64 v7; // rdx
  signed int v8; // eax
  int v9; // ebx
  HANDLE v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[9]; // [rsp+80h] [rbp-68h] BYREF

  v6 = *(unsigned __int16 *)(a1 + 4);
  v7 = 4294902015LL;
  v8 = v6 & 0xFFFF00FF;
  if ( (v6 & 0xFFFF00FF) != 3 )
  {
    if ( v8 != 1 )
    {
      if ( v8 > 4 )
      {
        if ( v8 <= 6 )
        {
          if ( (PoDebug & 2) != 0 )
            DbgPrint("%s: UMPO stopped.\n", "PopUmpoProcessMessage");
          PopUmpoAlpcClientConnected = 0;
          PopAcquireUmpoPushLock(1, v7, a3, a4);
          v11 = PopAlpcClientPort;
          PopAlpcClientPort = 0LL;
          PopReleaseUmpoPushLock(v13, v12);
          ZwClose(v11);
          return (unsigned int)-1073740032;
        }
        if ( v8 == 10 )
        {
          memset(v14, 0, sizeof(v14));
          v14[2] = 512LL;
          v9 = ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
          if ( v9 < 0 )
          {
            ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
            return (unsigned int)v9;
          }
          PopUmpoAlpcClientConnected = 1;
          if ( (PoDebug & 0x10000000) != 0 )
            DbgPrint("%s: UMPO Connected, port=%p\n", "PopUmpoProcessMessage", (const void *)PopAlpcServerPort);
          return 0;
        }
      }
      if ( (PoDebug & 1) != 0 )
        DbgPrint(
          "%s: Not expecting message type=0x%x\n",
          "PopUmpoProcessMessage",
          *(unsigned __int16 *)(a1 + 4) & 0xFFFF00FF);
      return 0;
    }
    if ( (PoDebug & 0x10000000) != 0 )
      DbgPrint(
        "%s: ALPC message id=%x required continuation unexpectedly.Cancelling it.\n",
        "PopUmpoProcessMessage",
        *(unsigned int *)(a2 + 20));
LABEL_23:
    if ( (int)ZwAlpcCancelMessage(PopAlpcServerPort, 0LL, a2) < 0 && (PoDebug & 1) != 0 )
      DbgPrint("%s: Unable to cancel ALPC message id=%x\n", "PopUmpoProcessMessage", *(unsigned int *)(a2 + 20));
    return 0;
  }
  if ( (v6 & 0x2000) != 0 )
  {
    if ( (PoDebug & 0x10000000) != 0 )
      DbgPrint(
        "%s: ALPC message id=%x required continuationunexpectedly. Cancelling it.\n",
        "PopUmpoProcessMessage",
        *(unsigned int *)(a2 + 20));
    goto LABEL_23;
  }
  v9 = PopUmpoProcessPowerMessage(a1 + 40);
  if ( v9 >= 0 )
    return 0;
  return (unsigned int)v9;
}
