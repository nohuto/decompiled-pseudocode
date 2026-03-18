/*
 * XREFs of rimSignalReadComplete @ 0x1C0086B48
 * Callers:
 *     RIMOnPowerNotification @ 0x1C0085F40 (RIMOnPowerNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00C8B40 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C00C8C44 (rimDispatchCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0010BF0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     RIMArmWatchDog @ 0x1C0086C20 (RIMArmWatchDog.c)
 */

__int64 __fastcall rimSignalReadComplete(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int updated; // eax
  __int64 v8; // [rsp+28h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 760) )
    return WPP_RECORDER_SF_qq(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             a2,
             4u,
             0xCu,
             (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids,
             a2,
             *(_QWORD *)(a2 + 16));
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  *(LARGE_INTEGER *)(a1 + 880) = KeQueryPerformanceCounter(0LL);
  *(_DWORD *)(a1 + 888) = 1;
  RIMArmWatchDog(v4);
  RIMUnlockExclusive((__int64)&gWatchDogQPCLock);
  if ( *(_DWORD *)(a2 + 308) )
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
        (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids,
        v8);
    }
  }
  *(_DWORD *)(a2 + 176) |= 0x1000000u;
  ZwSetEvent(*(HANDLE *)(a1 + 816), 0LL);
  ZwClose(*(HANDLE *)(a1 + 816));
  *(_QWORD *)(a1 + 816) = 0LL;
  return WPP_RECORDER_SF_qq(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           v5,
           4u,
           0xBu,
           (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids,
           a2,
           *(_QWORD *)(a2 + 16));
}
