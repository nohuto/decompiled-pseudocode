/*
 * XREFs of USBCaptureChangePowerState @ 0x1C00056C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C001BB9C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C001C4AC (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C001FDE0 (USBType1SetSampleRate.c)
 *     USBCaptureStartTransfers @ 0x1C0020638 (USBCaptureStartTransfers.c)
 */

__int64 __fastcall USBCaptureChangePowerState(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r14
  KIRQL v7; // al
  int started; // eax
  unsigned __int16 v9; // r9
  _QWORD *v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 16);
  v5 = -1073741584;
  v6 = *(_QWORD *)(v2 + 128);
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x1Cu,
    (__int64)&WPP_274e87896874a8a93b442ecd4ef4c817_Traceguids,
    a1,
    a2 - 1);
  if ( a2 == 1 )
  {
    if ( *(_DWORD *)(a1 + 120) != 3 )
      return 0;
    started = USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v6 + 136));
    v5 = started;
    if ( started >= 0 )
    {
      started = USBType1SetSampleRate(a1, *(unsigned int *)(v2 + 88));
      v5 = started;
      if ( started >= 0 )
      {
        v10 = *(_QWORD **)(v2 + 136);
        v10[16] = v10 + 15;
        v10[15] = v10 + 15;
        v10[14] = v10 + 13;
        v10[13] = v10 + 13;
        *(_BYTE *)(v2 + 37) = 1;
        started = USBCaptureStartTransfers(a1, 0LL);
        v5 = started;
        if ( started >= 0 )
          return v5;
        v9 = 31;
      }
      else
      {
        v9 = 30;
      }
    }
    else
    {
      v9 = 29;
    }
    LODWORD(v12) = started;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      8u,
      v9,
      (__int64)&WPP_274e87896874a8a93b442ecd4ef4c817_Traceguids,
      a1,
      v12);
    return v5;
  }
  if ( (unsigned int)(a2 - 2) <= 2 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
    *(_BYTE *)(v2 + 37) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v7);
    v5 = USBHwDataPipeReset(a1);
    if ( (v5 & 0x80000000) == 0 )
      return (unsigned int)USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v6 + 144));
  }
  return v5;
}
