/*
 * XREFs of EtwpNetProvTraceNetwork @ 0x140226704
 * Callers:
 *     EtwpTraceNetwork @ 0x14022715C (EtwpTraceNetwork.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 */

NTSTATUS __fastcall EtwpNetProvTraceNetwork(PEVENT_DATA_DESCRIPTOR UserData, unsigned __int16 a2)
{
  NTSTATUS result; // eax
  const EVENT_DESCRIPTOR *v3; // rdx

  result = 2058;
  if ( a2 > 0x80Au )
  {
    switch ( a2 )
    {
      case 0x80Bu:
        v3 = &KNetEvt_RecvIPV4Udp;
        break;
      case 0x811u:
        v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_FailUdp;
        break;
      case 0x81Au:
        v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_SendIPV6Udp;
        break;
      case 0x81Bu:
        v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_RecvIPV6Udp;
        break;
      default:
        return result;
    }
  }
  else if ( a2 == 2058 )
  {
    v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_SendIPV4Udp;
  }
  else
  {
    result = 1554;
    if ( a2 > 0x612u )
    {
      switch ( a2 )
      {
        case 0x61Au:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_SendIPV6;
          break;
        case 0x61Bu:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_RecvIPV6;
          break;
        case 0x61Cu:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_ConnectIPV6;
          break;
        case 0x61Du:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_DisconnectIPV6;
          break;
        case 0x61Eu:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_RetransmitIPV6;
          break;
        case 0x61Fu:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_AcceptIPV6;
          break;
        case 0x620u:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_ReconnectIPV6;
          break;
        case 0x622u:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_TcpCopyIPV6;
          break;
        default:
          return result;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 0x612u:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_TcpCopyIPV4;
          break;
        case 0x60Au:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_SendIPV4;
          break;
        case 0x60Bu:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_RecvIPV4;
          break;
        case 0x60Cu:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_ConnectIPV4;
          break;
        case 0x60Du:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_DisconnectIPV4;
          break;
        case 0x60Eu:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_RetransmitIPV4;
          break;
        case 0x60Fu:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_AcceptIPV4;
          break;
        case 0x610u:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_ReconnectIPV4;
          break;
        case 0x611u:
          v3 = (const EVENT_DESCRIPTOR *)&KNetEvt_Fail;
          break;
        default:
          return result;
      }
    }
  }
  return EtwWrite(EtwpNetProvRegHandle, v3, 0LL, 1u, UserData);
}
