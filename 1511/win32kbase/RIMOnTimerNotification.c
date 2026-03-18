/*
 * XREFs of RIMOnTimerNotification @ 0x1C00C3300
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00C8B40 (rimDispatchAutoRepeatCompleteFrame.c)
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CE7D8 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CE82C (ApiSetGetPowerTransitionsState.c)
 */

__int64 __fastcall RIMOnTimerNotification(void *a1, int a2)
{
  int v4; // esi
  int v5; // ebp
  union _LARGE_INTEGER v6; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // rdi
  int v11; // ecx
  __int64 Period; // [rsp+28h] [rbp-90h]
  union _LARGE_INTEGER DueTime; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v15[14]; // [rsp+48h] [rbp-70h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x3Au,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v4 = 1;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v5 >= 0 )
  {
    v6 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 96);
    if ( *(_BYTE *)(v6.QuadPart + 73) || *(_BYTE *)(v6.QuadPart + 74) )
    {
      v5 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x41u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
      goto LABEL_31;
    }
    RIMLockExclusive(v6.QuadPart + 744);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x3Bu,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    if ( a2 )
    {
      if ( *(_QWORD *)(v6.QuadPart + 480) != -1LL )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          0x3Eu,
          (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
        ApiSetGetPowerTransitionsState(v15);
        if ( !v15[0] )
          goto LABEL_28;
        if ( v15[7] )
          goto LABEL_28;
        if ( v15[8] )
          goto LABEL_28;
        if ( !*(_DWORD *)(v6.QuadPart + 584) )
          goto LABEL_28;
        v10 = *(_QWORD *)(v6.QuadPart + 544);
        if ( !v10 )
          goto LABEL_28;
        do
        {
          if ( *(_BYTE *)(v10 + 48) == 2 && *(_DWORD *)(v10 + 308) && *(_QWORD *)(v10 + 392) )
          {
            ((void (__fastcall *)(_QWORD, _QWORD))rimDispatchAutoRepeatCompleteFrame)(
              (union _LARGE_INTEGER)v6.QuadPart,
              v10);
            v4 = 0;
          }
          v10 = *(_QWORD *)(v10 + 40);
        }
        while ( v10 );
        if ( v4 )
        {
LABEL_28:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            4u,
            0x40u,
            (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
          ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 480), 0LL);
          *(_QWORD *)(v6.QuadPart + 504) = 0LL;
        }
        else
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            4u,
            0x3Fu,
            (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
          v11 = 10;
          if ( *(_DWORD *)(v6.QuadPart + 488) )
            v11 = *(_DWORD *)(v6.QuadPart + 488);
          DueTime.QuadPart = -10000LL * v11;
          ZwSetTimer(*(HANDLE *)(v6.QuadPart + 480), &DueTime, 0LL, 0LL, 0, 0, 0LL);
          *(LARGE_INTEGER *)(v6.QuadPart + 504) = KeQueryPerformanceCounter(0LL);
        }
      }
      goto LABEL_29;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v8 = *(_QWORD *)(v6.QuadPart + 504);
    if ( v8 && PerformanceCounter.QuadPart - v8 <= *(_QWORD *)(v6.QuadPart + 496) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x3Du,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x3Cu,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
      ((void (__fastcall *)(_QWORD))RIMAssessPointerContactState)((union _LARGE_INTEGER)v6.QuadPart);
      if ( !*(_DWORD *)(v6.QuadPart + 584) )
      {
        ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 472), 0LL);
        v9 = *(void **)(v6.QuadPart + 480);
        if ( v9 != (void *)-1LL )
        {
          ZwCancelTimer(v9, 0LL);
          *(_QWORD *)(v6.QuadPart + 504) = 0LL;
        }
        *(_DWORD *)(v6.QuadPart + 588) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, 0LL);
        goto LABEL_29;
      }
    }
    DueTime.QuadPart = -1000000LL;
    ZwSetTimer(*(HANDLE *)(v6.QuadPart + 472), &DueTime, 0LL, 0LL, 0, 0, 0LL);
LABEL_29:
    RIMUnlockExclusive(v6.QuadPart + 744);
LABEL_31:
    RIMUnlockExclusive(v6.QuadPart + 96);
    ObfDereferenceObject((PVOID)v6.QuadPart);
  }
  LODWORD(Period) = v5;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x42u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    Period);
  return (unsigned int)v5;
}
