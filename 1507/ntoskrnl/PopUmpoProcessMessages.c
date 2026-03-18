/*
 * XREFs of PopUmpoProcessMessages @ 0x1400EE0C4
 * Callers:
 *     PopUmpoMessageCallback @ 0x1400EE084 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1400EE08C (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1400EE1A8 (AlpcInitializeMessageAttribute.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401800F0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopUmpoProcessMessage @ 0x1404FFA1C (PopUmpoProcessMessage.c)
 */

ULONG PopUmpoProcessMessages()
{
  ULONG result; // eax
  ULONG v1; // r8d
  char *MessageAttribute; // rax
  __int64 v3; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 v4; // [rsp+48h] [rbp-2D0h] BYREF
  _BYTE v5[16]; // [rsp+50h] [rbp-2C8h] BYREF
  _DWORD v6[40]; // [rsp+60h] [rbp-2B8h] BYREF
  _BYTE v7[512]; // [rsp+100h] [rbp-218h] BYREF

  v3 = 0LL;
  memset(v6, 0, 0x98uLL);
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000LL, v6, 152LL, v5);
    v4 = 512LL;
    result = ZwAlpcSendWaitReceivePort(PopAlpcServerPort, 0LL, 0LL, 0LL, v7, &v4, v6, &v3);
    v1 = result;
    if ( result )
      break;
    MessageAttribute = AlpcGetMessageAttribute(v6, 0x20000000);
    PopUmpoProcessMessage(v7, MessageAttribute);
  }
  if ( result != 258 )
  {
    result = PoDebug;
    if ( (PoDebug & 1) != 0 )
      return DbgPrint("%s: ZwAlpcSendWaitReceivePort failed: 0x%x\n", "PopUmpoProcessMessages", v1);
  }
  return result;
}
