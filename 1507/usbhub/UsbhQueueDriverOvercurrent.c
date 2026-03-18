/*
 * XREFs of UsbhQueueDriverOvercurrent @ 0x1C003E040
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0015DC8 (UsbhDispatch_HardResetEvent.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024A80 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E308 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhPCE_Disable @ 0x1C0040C34 (UsbhPCE_Disable.c)
 */

__int64 __fastcall UsbhQueueDriverOvercurrent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rbx
  __int64 PortData; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rax
  __int64 v15; // r9

  v6 = FdoExt(a1, a2, a3, a4);
  Log(a1, 0x4000, 1148155441, 0LL, *(unsigned __int16 *)(a2 + 20));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_f6654bcc81c60c526475d3c93d91c3f9_Traceguids);
  if ( !*((_BYTE *)v6 + 3010) )
  {
    *((_BYTE *)v6 + 3010) = 1;
    UsbhQueueWorkItemEx(a1, 1LL, (__int64)UsbhSetHubOvercurrentDetectedKey, 0LL, 0, 0x6352564Fu, 0LL);
  }
  PortData = UsbhGetPortData(a1, *(_WORD *)(a2 + 20));
  v8 = PortData;
  if ( !PortData )
    return Usbh_OvercurrentDerefHubBusy(a1, 0LL, 0LL);
  v9 = PortData + 200;
  UsbhPCE_Disable(a1, *(unsigned __int16 *)(a2 + 20), PortData + 200);
  result = UsbhQueueWorkItemEx(
             a1,
             1LL,
             (__int64)UsbhDriverOvercurrentResetWorker,
             v9,
             *(unsigned __int16 *)(v8 + 4),
             0x6352564Fu,
             0LL) & 0xC0000000LL;
  if ( (_DWORD)result == -1073741824 )
  {
    Usbh_OvercurrentDerefHubBusy(a1, v8, 0LL);
    v14 = FdoExt(a1, v11, v12, v13);
    return UsbhDispatch_HardResetEvent(a1, (__int64)(v14 + 346), 3LL, v15);
  }
  return result;
}
