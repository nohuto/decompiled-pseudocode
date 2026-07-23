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

NTSTATUS PopUmpoProcessMessages()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // r8d
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-2D8h] BYREF
  ULONG_PTR BufferLength; // [rsp+48h] [rbp-2D0h] BYREF
  ULONG_PTR RequiredBufferSize[2]; // [rsp+50h] [rbp-2C8h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+60h] [rbp-2B8h] BYREF
  _PORT_MESSAGE ConnectionRequest; // [rsp+100h] [rbp-218h] BYREF

  Timeout.QuadPart = 0LL;
  memset(Buffer, 0, 0x98uLL);
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000u, Buffer, 0x98uLL, RequiredBufferSize);
    BufferLength = 512LL;
    result = ZwAlpcSendWaitReceivePort(
               PopAlpcServerPort,
               0,
               0LL,
               0LL,
               &ConnectionRequest,
               &BufferLength,
               Buffer,
               &Timeout);
    v1 = result;
    if ( result )
      break;
    MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
    PopUmpoProcessMessage(&ConnectionRequest, MessageAttribute);
  }
  if ( result != 258 )
  {
    result = PoDebug;
    if ( (PoDebug & 1) != 0 )
      return DbgPrint("%s: ZwAlpcSendWaitReceivePort failed: 0x%x\n", "PopUmpoProcessMessages", v1);
  }
  return result;
}
