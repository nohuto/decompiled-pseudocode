/*
 * XREFs of USBType1StateChangePin @ 0x1C0004600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C000139C (WPP_RECORDER_SF_qdd.c)
 *     PinWaitForStarvationTimeout @ 0x1C0001F34 (PinWaitForStarvationTimeout.c)
 *     USBType1AsyncEndpointAbortFeedback @ 0x1C000368C (USBType1AsyncEndpointAbortFeedback.c)
 *     USBType1ClearLeftovers @ 0x1C0004370 (USBType1ClearLeftovers.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C001BB9C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C001C4AC (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C001FDE0 (USBType1SetSampleRate.c)
 *     USBType1NeedLockDelay @ 0x1C0020028 (USBType1NeedLockDelay.c)
 */

__int64 __fastcall USBType1StateChangePin(PKSPIN Pin, int a2, int a3)
{
  _QWORD *Context; // r15
  unsigned int v7; // esi
  _QWORD *v8; // r13
  __int64 v9; // r14
  int v10; // ebx
  int v11; // ebx
  KIRQL v12; // al
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // eax
  KIRQL v18; // al
  KIRQL v19; // bl
  __int64 v21; // [rsp+30h] [rbp-38h]
  union _LARGE_INTEGER v22; // [rsp+70h] [rbp+8h] BYREF

  Context = Pin->Context;
  v7 = 0;
  v8 = (_QWORD *)Context[16];
  v9 = Context[17];
  WPP_RECORDER_SF_qdd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x13u,
    (__int64)&WPP_2bd6422770bdda6d82260a118f6146de_Traceguids,
    Pin,
    a2,
    a3);
  if ( !a3 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(Context + 12);
    *((_BYTE *)Context + 37) = 0;
    v19 = v18;
    USBType1ClearLeftovers(Context);
    Context[8] = 0LL;
    Context[9] = 0LL;
    Context[10] = 0LL;
    *(_BYTE *)(v9 + 81) = 0;
    KeReleaseSpinLock(Context + 12, v19);
LABEL_33:
    if ( (v7 & 0x80000000) == 0 )
      return v7;
LABEL_34:
    LODWORD(v21) = v7;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      8u,
      0x17u,
      (__int64)&WPP_2bd6422770bdda6d82260a118f6146de_Traceguids,
      Pin,
      v21);
    return v7;
  }
  v10 = a3 - 1;
  if ( !v10 )
  {
    if ( a2 )
    {
      if ( a2 != 2 )
        return v7;
      if ( !*((_BYTE *)Context + 38) )
        v7 = USBHwSelectStreamingAudioInterface(Pin, v8[18]);
      goto LABEL_33;
    }
    v13 = USBHwSelectStreamingAudioInterface(Pin, v8[17]);
    v7 = v13;
    if ( v13 < 0 )
    {
      LODWORD(v21) = v13;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        8u,
        0x14u,
        (__int64)&WPP_2bd6422770bdda6d82260a118f6146de_Traceguids,
        Pin,
        v21);
      goto LABEL_34;
    }
    if ( *(_BYTE *)(v9 + 80) )
    {
      v14 = *(_DWORD *)(v9 + 56);
      v15 = 0LL;
      if ( v14 )
      {
        v16 = *(_QWORD *)(v9 + 72);
        while ( *(_BYTE *)(v16 + 24 * v15 + 2) != *(_BYTE *)(v8[22] + 2LL) )
        {
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= v14 )
            goto LABEL_22;
        }
        *(_QWORD *)(v9 + 872) = *(_QWORD *)(v16 + 24 * v15 + 8);
      }
LABEL_22:
      if ( !*(_QWORD *)(v9 + 872) )
      {
        v7 = -1073741668;
        LODWORD(v21) = -1073741668;
        WPP_RECORDER_SF_qd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          8u,
          0x15u,
          (__int64)&WPP_2bd6422770bdda6d82260a118f6146de_Traceguids,
          Pin,
          v21);
      }
      if ( (v7 & 0x80000000) != 0 )
      {
LABEL_28:
        USBHwSelectStreamingAudioInterface(Pin, v8[18]);
        goto LABEL_33;
      }
      *((_DWORD *)Context + 22) = *(_DWORD *)(v9 + 840);
    }
    v17 = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 22));
    v7 = v17;
    if ( v17 >= 0 )
      return v7;
    LODWORD(v21) = v17;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      8u,
      0x16u,
      (__int64)&WPP_2bd6422770bdda6d82260a118f6146de_Traceguids,
      Pin,
      v21);
    goto LABEL_28;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a2 != 3 )
      return v7;
    KsPinAcquireProcessingMutex(Pin);
    v12 = KeAcquireSpinLockRaiseToDpc(Context + 12);
    *(_BYTE *)(v9 + 84) = 0;
    KeReleaseSpinLock(Context + 12, v12);
    v22.QuadPart = -50000000LL;
    v7 = PinWaitForStarvationTimeout((__int64)Pin, &v22);
    if ( v7 == 258 )
    {
      USBHwDataPipeReset(Pin);
      PinWaitForStarvationTimeout((__int64)Pin, 0LL);
    }
    if ( *(_BYTE *)(v9 + 80) )
      USBType1AsyncEndpointAbortFeedback((__int64)Pin);
    KsPinReleaseProcessingMutex(Pin);
    *(_BYTE *)(v9 + 83) = USBType1NeedLockDelay(Context);
    goto LABEL_33;
  }
  if ( v11 == 1 )
  {
    *(_BYTE *)(v9 + 84) = 1;
    *(_BYTE *)(v9 + 82) = 1;
  }
  return v7;
}
