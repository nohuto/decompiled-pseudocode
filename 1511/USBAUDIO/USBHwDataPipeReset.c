/*
 * XREFs of USBHwDataPipeReset @ 0x1C001C4AC
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004600 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C0004910 (USBType1ChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C0005240 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00056C0 (USBCaptureChangePowerState.c)
 *     USBType1HandleUrbError @ 0x1C001FD48 (USBType1HandleUrbError.c)
 *     USBCaptureStartTransfers @ 0x1C0020638 (USBCaptureStartTransfers.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     PinWaitForStarvation @ 0x1C0001FC8 (PinWaitForStarvation.c)
 *     USBHwAbortOrResetPipe @ 0x1C001C428 (USBHwAbortOrResetPipe.c)
 */

__int64 __fastcall USBHwDataPipeReset(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  int v6; // ebx
  int v8; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 136);
  v4 = *(_QWORD *)(v1 + 16);
  v5 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(v4 + 40), *(_QWORD *)(v3 + 64), 2);
  v6 = v5;
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741810 )
  {
    PinWaitForStarvation(a1);
    v6 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(v4 + 40), *(_QWORD *)(v3 + 64), 30);
    if ( ((v6 + 0x80000000) & 0x80000000) != 0 || v6 == -1073741810 )
      *(_BYTE *)v3 = 0;
  }
  if ( v6 < 0 )
  {
    v8 = v6;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      8u,
      0xEu,
      (__int64)&WPP_f93ad262990aaa7a929a027674bcac51_Traceguids,
      a1,
      v8);
  }
  return (unsigned int)v6;
}
