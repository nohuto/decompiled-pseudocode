/*
 * XREFs of PopMonitorProcessLoop @ 0x1405C0B10
 * Callers:
 *     PopMonitorAlpcCallback @ 0x1406BBA80 (PopMonitorAlpcCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407E6004 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400D11BC (PopUmpoSendPowerMessage.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14017FE50 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401800F0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 */

NTSTATUS PopMonitorProcessLoop()
{
  NTSTATUS result; // eax
  _QWORD *v1; // rcx
  __int64 v2; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR BufferLength; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD Src[10]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v6[20]; // [rsp+E8h] [rbp-20h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+138h] [rbp+30h] BYREF
  _PORT_MESSAGE ConnectionRequest; // [rsp+188h] [rbp+80h] BYREF
  int v9; // [rsp+1B0h] [rbp+A8h]
  int v10; // [rsp+1B4h] [rbp+ACh]

  BufferLength = 48LL;
  for ( result = ZwAlpcSendWaitReceivePort(
                   PopAlpcMonitorServerPort,
                   0,
                   0LL,
                   0LL,
                   &ConnectionRequest,
                   &BufferLength,
                   0LL,
                   0LL);
        !result;
        result = ZwAlpcSendWaitReceivePort(
                   PopAlpcMonitorServerPort,
                   0,
                   0LL,
                   0LL,
                   &ConnectionRequest,
                   &BufferLength,
                   0LL,
                   0LL) )
  {
    if ( LOBYTE(ConnectionRequest.u2.ZeroInit) == 3 )
    {
      LODWORD(v2) = v10;
      if ( v9 )
      {
        if ( v9 != 2 )
        {
          if ( v9 == 3 )
            PopSetPowerSettingValueAcDc(&GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS, 4u, &v2);
          goto LABEL_28;
        }
        memset(v6, 0, 0x48uLL);
        v6[0] = 12;
        v6[2] = v10;
        if ( (PoDebug & 0x10000000) != 0 )
          DbgPrint("%s: Sending hot-key action to UMPO.", "PopUmpoSendHotKey");
        v1 = v6;
      }
      else
      {
        memset(Src, 0, 0x48uLL);
        LODWORD(Src[0]) = 8;
        LODWORD(Src[3]) = v10;
        *(GUID *)&Src[1] = GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;
        if ( (PoDebug & 0x10000000) != 0 )
          DbgPrint("%s: Sending new brightness value to UMPO.", "PopUmpoSendBrightness");
        v1 = Src;
      }
      PopUmpoSendPowerMessage(v1, 0x48uLL);
    }
    else
    {
      if ( LOBYTE(ConnectionRequest.u2.ZeroInit) <= 4u )
        goto LABEL_15;
      if ( LOBYTE(ConnectionRequest.u2.ZeroInit) <= 6u )
      {
        ZwClose(PopAlpcMonitorClientPort);
        if ( (PoDebug & 2) != 0 )
          DbgPrint("%s: monitor disconnected.\n", "PopMonitorProcessLoop");
        PopAlpcMonitorClientPort = 0LL;
        goto LABEL_28;
      }
      if ( LOBYTE(ConnectionRequest.u2.ZeroInit) == 10 )
      {
        if ( PopAlpcMonitorClientPort )
        {
          ZwClose(PopAlpcMonitorClientPort);
          PopAlpcMonitorClientPort = 0LL;
        }
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.Flags = 0x100000;
        PortAttributes.MaxMessageLength = 256LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwAlpcAcceptConnectPort(
               &PopAlpcMonitorClientPort,
               PopAlpcMonitorServerPort,
               0,
               &ObjectAttributes,
               &PortAttributes,
               0LL,
               &ConnectionRequest,
               0LL,
               1u) >= 0 )
        {
          if ( (PoDebug & 0x10000000) != 0 )
            DbgPrint("%s: Monitor Connected, port=%p\n", "PopMonitorProcessLoop", PopAlpcMonitorServerPort);
        }
        else
        {
          ZwAlpcAcceptConnectPort(
            &PopAlpcMonitorClientPort,
            PopAlpcMonitorServerPort,
            0,
            &ObjectAttributes,
            &PortAttributes,
            0LL,
            &ConnectionRequest,
            0LL,
            0);
        }
      }
      else
      {
LABEL_15:
        if ( (PoDebug & 1) != 0 )
          DbgPrint(
            "%s: Not expecting message type=0x%x\n",
            "PopMonitorProcessLoop",
            LOBYTE(ConnectionRequest.u2.ZeroInit));
      }
    }
LABEL_28:
    BufferLength = 48LL;
  }
  return result;
}
