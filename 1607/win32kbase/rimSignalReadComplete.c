/*
 * XREFs of rimSignalReadComplete @ 0x1C00104A4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C00CE90C (RIMDoMobileKeyboardInvalidation.c)
 *     RIMOnPnpNotification @ 0x1C00CFB10 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00D81F4 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C00D831C (rimDispatchCompleteFrame.c)
 * Callees:
 *     RIMArmWatchDog @ 0x1C0010490 (RIMArmWatchDog.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00105A4 (WPP_RECORDER_SF_qq.c)
 *     RIMHandleTTMDeviceInput @ 0x1C001066C (RIMHandleTTMDeviceInput.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 */

__int64 __fastcall rimSignalReadComplete(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // eax
  int v6; // edx
  int v7; // edx
  __int64 result; // rax
  int updated; // eax
  int v10; // edx

  v2 = *(_DWORD *)(a2 + 756);
  if ( v2 == 1 || v2 == 2 && (*(_DWORD *)(*(_QWORD *)(a2 + 352) + 76LL) & gWakeOnDeviceTypes) == 0 )
  {
    result = WPP_RECORDER_SF_qq(
               WPP_GLOBAL_Control->DeviceExtension,
               a2,
               4,
               10,
               (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
               a2,
               *(_QWORD *)(a2 + 16));
    *(_BYTE *)(a1 + 712) = 1;
  }
  else if ( *(_BYTE *)(a1 + 712) )
  {
    return WPP_RECORDER_SF_qq(
             WPP_GLOBAL_Control->DeviceExtension,
             a2,
             4,
             14,
             (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
             a2,
             *(_QWORD *)(a2 + 16));
  }
  else
  {
    v5 = RIMHandleTTMDeviceInput(a2);
    if ( v5 < 0 )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        5,
        11,
        (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
        v5);
    }
    RIMLockExclusive(&gWatchDogQPCLock);
    *(LARGE_INTEGER *)(a1 + 832) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 840) = 1;
    RIMArmWatchDog();
    RIMUnlockExclusive(&gWatchDogQPCLock);
    if ( *(_DWORD *)(a2 + 316) )
    {
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL, 0, 0);
      if ( updated < 0 )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          5,
          12,
          (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
          updated);
      }
    }
    *(_DWORD *)(a2 + 184) |= 0x1000000u;
    ZwSetEvent(*(HANDLE *)(a1 + 768), 0LL);
    ZwClose(*(HANDLE *)(a1 + 768));
    *(_QWORD *)(a1 + 768) = 0LL;
    return WPP_RECORDER_SF_qq(
             WPP_GLOBAL_Control->DeviceExtension,
             v7,
             4,
             13,
             (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
             a2,
             *(_QWORD *)(a2 + 16));
  }
  return result;
}
