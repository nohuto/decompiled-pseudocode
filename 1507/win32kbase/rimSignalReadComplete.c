/*
 * XREFs of rimSignalReadComplete @ 0x1C006EEB4
 * Callers:
 *     RIMOnPowerNotification @ 0x1C006E310 (RIMOnPowerNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 *     RIMOnPnpNotification @ 0x1C00C22E0 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00C7C44 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C00C7D4C (rimDispatchCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMArmWatchDog @ 0x1C006EF8C (RIMArmWatchDog.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00761AC (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall rimSignalReadComplete(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int updated; // eax
  __int64 v8; // [rsp+28h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 728) )
    return WPP_RECORDER_SF_qq(
             WPP_GLOBAL_Control->DeviceExtension,
             a2,
             4,
             12,
             (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids,
             a2,
             *(_QWORD *)(a2 + 16));
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  *(LARGE_INTEGER *)(a1 + 832) = KeQueryPerformanceCounter(0LL);
  *(_DWORD *)(a1 + 840) = 1;
  RIMArmWatchDog(v4);
  RIMUnlockExclusive((__int64)&gWatchDogQPCLock);
  if ( *(_DWORD *)(a2 + 316) )
  {
    updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL, 0, 0);
    if ( updated < 0 )
    {
      LODWORD(v8) = updated;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0xAu,
        (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids,
        v8);
    }
  }
  *(_DWORD *)(a2 + 184) |= 0x1000000u;
  ZwSetEvent(*(HANDLE *)(a1 + 768), 0LL);
  ZwClose(*(HANDLE *)(a1 + 768));
  *(_QWORD *)(a1 + 768) = 0LL;
  return WPP_RECORDER_SF_qq(
           WPP_GLOBAL_Control->DeviceExtension,
           v5,
           4,
           11,
           (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids,
           a2,
           *(_QWORD *)(a2 + 16));
}
