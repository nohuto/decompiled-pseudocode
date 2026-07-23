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

__int64 __fastcall PopUmpoProcessMessage(PPORT_MESSAGE ConnectionRequest, PALPC_CONTEXT_ATTR MessageContext)
{
  __int64 Type; // rcx
  int v4; // eax
  NTSTATUS v5; // ebx
  HANDLE v7; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-98h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+80h] [rbp-68h] BYREF

  Type = (unsigned __int16)ConnectionRequest->u2.s2.Type;
  v4 = Type & 0xFFFF00FF;
  if ( (Type & 0xFFFF00FF) != 3 )
  {
    if ( v4 != 1 )
    {
      if ( v4 > 4 )
      {
        if ( v4 <= 6 )
        {
          LOBYTE(Type) = 1;
          PopUmpoAlpcClientConnected = 0;
          PopAcquireUmpoPushLock(Type);
          v7 = PopAlpcClientPort;
          PopAlpcClientPort = 0LL;
          PopReleaseUmpoPushLock();
          ZwClose(v7);
          return (unsigned int)-1073740032;
        }
        if ( v4 == 10 )
        {
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = 0LL;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 512;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          memset(&PortAttributes, 0, sizeof(PortAttributes));
          PortAttributes.MaxMessageLength = 512LL;
          v5 = ZwAlpcAcceptConnectPort(
                 &PopAlpcClientPort,
                 PopAlpcServerPort,
                 0,
                 &ObjectAttributes,
                 &PortAttributes,
                 0LL,
                 ConnectionRequest,
                 0LL,
                 PopUmpoAlpcClientConnected == 0);
          if ( v5 < 0 )
          {
            ZwAlpcAcceptConnectPort(
              &PopAlpcClientPort,
              PopAlpcServerPort,
              0,
              &ObjectAttributes,
              &PortAttributes,
              0LL,
              ConnectionRequest,
              0LL,
              0);
            return (unsigned int)v5;
          }
          PopUmpoAlpcClientConnected = 1;
        }
      }
      return 0;
    }
    goto LABEL_14;
  }
  if ( (Type & 0x2000) != 0 )
  {
LABEL_14:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0, MessageContext);
    return 0;
  }
  v5 = PopUmpoProcessPowerMessage(&ConnectionRequest[1], MessageContext);
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
