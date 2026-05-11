/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0001278
 * Callers:
 *     DeviceCreate @ 0x1C0001880 (DeviceCreate.c)
 *     USBType1StateChangePin @ 0x1C0004600 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C0004910 (USBType1ChangePowerState.c)
 *     USBCaptureResetWorker @ 0x1C0004B80 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C0005240 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00056C0 (USBCaptureChangePowerState.c)
 *     DeviceStart @ 0x1C0013250 (DeviceStart.c)
 *     DeviceStop @ 0x1C00133F0 (DeviceStop.c)
 *     PinGoToLowPowerState @ 0x1C0014270 (PinGoToLowPowerState.c)
 *     PinGoToFullPowerState @ 0x1C0014350 (PinGoToFullPowerState.c)
 *     PinCreate @ 0x1C0014430 (PinCreate.c)
 *     PinSetDataFormat @ 0x1C0014910 (PinSetDataFormat.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C001BB9C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C001C4AC (USBHwDataPipeReset.c)
 *     USBType1RenderCreatePin @ 0x1C0020250 (USBType1RenderCreatePin.c)
 *     USBCaptureStartTransfers @ 0x1C0020638 (USBCaptureStartTransfers.c)
 *     USBCaptureCreatePin @ 0x1C0020810 (USBCaptureCreatePin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, (__int64 *)va, 8LL, va1);
}
