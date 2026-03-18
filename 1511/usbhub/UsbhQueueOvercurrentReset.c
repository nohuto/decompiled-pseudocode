/*
 * XREFs of UsbhQueueOvercurrentReset @ 0x1C003E3E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024960 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E538 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhPCE_Disable @ 0x1C0040E50 (UsbhPCE_Disable.c)
 */

__int64 __fastcall UsbhQueueOvercurrentReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rax

  v6 = FdoExt(a1, a2, a3, a4);
  Log(a1, 0x4000, 1870033457, 0LL, *(unsigned __int16 *)(a2 + 20));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_f6654bcc81c60c526475d3c93d91c3f9_Traceguids);
  if ( !*((_BYTE *)v6 + 3010) )
  {
    *((_BYTE *)v6 + 3010) = 1;
    UsbhQueueWorkItemEx(a1, 1LL, (__int64)UsbhSetHubOvercurrentDetectedKey, 0LL, 0, 0x6352564Fu, 0LL);
  }
  result = UsbhGetPortData(a1, *(_WORD *)(a2 + 20));
  v8 = result;
  if ( result )
  {
    v9 = result + 200;
    UsbhPCE_Disable(a1, *(unsigned __int16 *)(a2 + 20), result + 200);
    result = UsbhQueueWorkItemEx(
               a1,
               1LL,
               (__int64)UsbhAutoOvercurrentResetWorker,
               v9,
               *(unsigned __int16 *)(v8 + 4),
               0x6352564Fu,
               0LL) & 0xC0000000LL;
    if ( (_DWORD)result == -1073741824 )
    {
      LOBYTE(v10) = 1;
      Usbh_OvercurrentDerefHubBusy(a1, v8, v10);
      v14 = FdoExt(a1, v11, v12, v13);
      return UsbhDispatch_HardResetEvent(a1, (__int64)(v14 + 346), 3);
    }
  }
  return result;
}
