/*
 * XREFs of UsbhResetNotifyDownstreamHub @ 0x1C004B8A4
 * Callers:
 *     Usbh_HRS_WaitReady @ 0x1C00040EC (Usbh_HRS_WaitReady.c)
 *     Usbh_HRS_Queued @ 0x1C0046F6C (Usbh_HRS_Queued.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B710 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     UsbhSetPdo_FailIo @ 0x1C0044534 (UsbhSetPdo_FailIo.c)
 */

_DWORD *__fastcall UsbhResetNotifyDownstreamHub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int i; // edi
  _DWORD *result; // rax
  __int64 PortData; // rax
  __int64 v8; // rsi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rax

  for ( i = 1; ; ++i )
  {
    result = FdoExt(a1, a2, a3, a4);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    PortData = UsbhGetPortData(a1, i);
    v8 = *(_QWORD *)(PortData + 392);
    if ( v8 )
    {
      v9 = PdoExt(*(_QWORD *)(PortData + 392), a2, a3, a4);
      v10 = v9;
      if ( *((_BYTE *)v9 + 2716) )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *((_QWORD *)v9 + 147),
            3u,
            0x18u,
            (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids,
            *((_QWORD *)v9 + 147));
        v11 = *((_QWORD *)v10 + 346);
        if ( v11 )
        {
          *(_QWORD *)(v11 + 56) = 1LL;
          *(_DWORD *)(*((_QWORD *)v10 + 346) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v10 + 346), 0);
        }
        UsbhSetPdo_FailIo(v8, a2, a3, a4);
        Log(a1, 2, 1380861000, *((unsigned __int8 *)v10 + 2717), v8);
        *((_BYTE *)v10 + 2717) = 0;
      }
    }
  }
  return result;
}
