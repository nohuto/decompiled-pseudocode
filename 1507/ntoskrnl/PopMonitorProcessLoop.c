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

__int64 PopMonitorProcessLoop()
{
  __int64 result; // rax
  _QWORD *v1; // rcx
  __int64 v2; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v3; // [rsp+60h] [rbp-A8h]
  __int64 v4; // [rsp+68h] [rbp-A0h]
  __int64 v5; // [rsp+70h] [rbp-98h]
  __int64 v6; // [rsp+78h] [rbp-90h]
  int v7; // [rsp+80h] [rbp-88h]
  __int128 v8; // [rsp+88h] [rbp-80h]
  _QWORD Src[10]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v10[20]; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v11; // [rsp+18Ch] [rbp+84h]
  int v12; // [rsp+1B0h] [rbp+A8h]
  int v13; // [rsp+1B4h] [rbp+ACh]

  v3 = 48LL;
  for ( result = ZwAlpcSendWaitReceivePort((__int64)PopAlpcMonitorServerPort, 0LL, 0LL);
        !(_DWORD)result;
        result = ZwAlpcSendWaitReceivePort((__int64)PopAlpcMonitorServerPort, 0LL, 0LL) )
  {
    if ( (unsigned __int8)v11 == 3 )
    {
      LODWORD(v2) = v13;
      if ( v12 )
      {
        if ( v12 != 2 )
        {
          if ( v12 == 3 )
            PopSetPowerSettingValueAcDc(&GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS, 4u, &v2);
          goto LABEL_28;
        }
        memset(v10, 0, 0x48uLL);
        LODWORD(v10[0]) = 12;
        LODWORD(v10[1]) = v13;
        if ( (PoDebug & 0x10000000) != 0 )
          DbgPrint("%s: Sending hot-key action to UMPO.", "PopUmpoSendHotKey");
        v1 = v10;
      }
      else
      {
        memset(Src, 0, 0x48uLL);
        LODWORD(Src[0]) = 8;
        LODWORD(Src[3]) = v13;
        *(GUID *)&Src[1] = GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;
        if ( (PoDebug & 0x10000000) != 0 )
          DbgPrint("%s: Sending new brightness value to UMPO.", "PopUmpoSendBrightness");
        v1 = Src;
      }
      PopUmpoSendPowerMessage(v1, 0x48uLL);
    }
    else
    {
      if ( (unsigned __int8)v11 <= 4u )
        goto LABEL_15;
      if ( (unsigned __int8)v11 <= 6u )
      {
        ZwClose(PopAlpcMonitorClientPort);
        if ( (PoDebug & 2) != 0 )
          DbgPrint("%s: monitor disconnected.\n", "PopMonitorProcessLoop");
        PopAlpcMonitorClientPort = 0LL;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v11 == 10 )
      {
        if ( PopAlpcMonitorClientPort )
        {
          ZwClose(PopAlpcMonitorClientPort);
          PopAlpcMonitorClientPort = 0LL;
        }
        memset(&v10[10], 0, 0x48uLL);
        LODWORD(v10[10]) = 0x100000;
        v10[12] = 256LL;
        LODWORD(v4) = 48;
        v5 = 0LL;
        v7 = 512;
        v6 = 0LL;
        v8 = 0LL;
        if ( (int)ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort, 0LL) >= 0 )
        {
          if ( (PoDebug & 0x10000000) != 0 )
            DbgPrint("%s: Monitor Connected, port=%p\n", "PopMonitorProcessLoop", PopAlpcMonitorServerPort);
        }
        else
        {
          ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort, 0LL);
        }
      }
      else
      {
LABEL_15:
        if ( (PoDebug & 1) != 0 )
          DbgPrint("%s: Not expecting message type=0x%x\n", "PopMonitorProcessLoop", (unsigned __int8)v11);
      }
    }
LABEL_28:
    v3 = 48LL;
  }
  return result;
}
