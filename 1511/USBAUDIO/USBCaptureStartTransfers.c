/*
 * XREFs of USBCaptureStartTransfers @ 0x1C0020638
 * Callers:
 *     USBCaptureResetWorker @ 0x1C0004B80 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C0005240 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00056C0 (USBCaptureChangePowerState.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     USBHwDataPipeReset @ 0x1C001C4AC (USBHwDataPipeReset.c)
 *     USBCaptureSubmitRequest @ 0x1C00204F0 (USBCaptureSubmitRequest.c)
 */

__int64 __fastcall USBCaptureStartTransfers(__int64 a1, char a2)
{
  __int64 v4; // rbp
  int v5; // edi
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-28h]

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  v5 = 0;
  KeWaitForSingleObject((PVOID)(v4 + 136), Executive, 0, 0, 0LL);
  if ( a2 )
    v5 = USBHwDataPipeReset(a1);
  v6 = 0;
  do
  {
    if ( v5 < 0 )
      break;
    v5 = USBCaptureSubmitRequest((_QWORD *)(v4 + 272 + 56LL * v6++));
    *(_BYTE *)(v4 + 80) = v5 >= 0;
  }
  while ( v6 < 0xC );
  if ( v5 == 259 )
    v5 = 0;
  KeReleaseMutex((PRKMUTEX)(v4 + 136), 0);
  if ( v5 < 0 )
  {
    v8 = v5;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      8u,
      0x10u,
      (__int64)&WPP_274e87896874a8a93b442ecd4ef4c817_Traceguids,
      a1,
      v8);
  }
  return (unsigned int)v5;
}
