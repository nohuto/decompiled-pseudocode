/*
 * XREFs of RIMOnTimerNotification @ 0x1C00C2650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00C7C44 (rimDispatchAutoRepeatCompleteFrame.c)
 *     RIMAssessPointerContactState @ 0x1C00C9EAC (RIMAssessPointerContactState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00CD49C (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CD4F0 (ApiSetGetPowerTransitionsState.c)
 */

__int64 __fastcall RIMOnTimerNotification(void *a1, int a2)
{
  int v4; // esi
  union _LARGE_INTEGER v5; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 i; // rdi
  int v10; // ecx
  __int64 Period; // [rsp+28h] [rbp-90h]
  union _LARGE_INTEGER DueTime; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v14[14]; // [rsp+48h] [rbp-70h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x37u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v4 >= 0 )
  {
    v5 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 96);
    if ( *(_BYTE *)(v5.QuadPart + 73) || *(_BYTE *)(v5.QuadPart + 74) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x3Eu,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
      goto LABEL_31;
    }
    RIMLockExclusive(v5.QuadPart + 712);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x38u,
      (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    if ( a2 )
    {
      if ( *(_QWORD *)(v5.QuadPart + 440) != -1LL )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          0x3Bu,
          (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
        ApiSetGetPowerTransitionsState(v14);
        if ( !v14[0] || v14[7] || v14[8] || !*(_DWORD *)(v5.QuadPart + 552) )
          goto LABEL_28;
        for ( i = *(_QWORD *)(v5.QuadPart + 512); i; i = *(_QWORD *)(i + 40) )
        {
          if ( *(_BYTE *)(i + 48) == 2 && *(_DWORD *)(i + 316) )
            ((void (__fastcall *)(_QWORD, _QWORD))rimDispatchAutoRepeatCompleteFrame)(
              (union _LARGE_INTEGER)v5.QuadPart,
              i);
        }
        if ( *(_QWORD *)(v5.QuadPart + 472) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            4u,
            0x3Cu,
            (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
          v10 = 10;
          if ( *(_DWORD *)(v5.QuadPart + 448) )
            v10 = *(_DWORD *)(v5.QuadPart + 448);
          DueTime.QuadPart = -10000LL * v10;
          ZwSetTimer(*(HANDLE *)(v5.QuadPart + 440), &DueTime, 0LL, 0LL, 0, 0, 0LL);
          *(LARGE_INTEGER *)(v5.QuadPart + 464) = KeQueryPerformanceCounter(0LL);
        }
        else
        {
LABEL_28:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            4u,
            0x3Du,
            (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
          ZwCancelTimer(*(HANDLE *)(v5.QuadPart + 440), 0LL);
          *(_QWORD *)(v5.QuadPart + 464) = 0LL;
        }
      }
      goto LABEL_29;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v7 = *(_QWORD *)(v5.QuadPart + 464);
    if ( v7 && PerformanceCounter.QuadPart - v7 <= *(_QWORD *)(v5.QuadPart + 456) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x3Au,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x39u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
      ((void (__fastcall *)(_QWORD))RIMAssessPointerContactState)((union _LARGE_INTEGER)v5.QuadPart);
      if ( !*(_DWORD *)(v5.QuadPart + 552) )
      {
        ZwCancelTimer(*(HANDLE *)(v5.QuadPart + 432), 0LL);
        v8 = *(void **)(v5.QuadPart + 440);
        if ( v8 != (void *)-1LL )
        {
          ZwCancelTimer(v8, 0LL);
          *(_QWORD *)(v5.QuadPart + 464) = 0LL;
        }
        *(_DWORD *)(v5.QuadPart + 556) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(0LL, 0LL);
        goto LABEL_29;
      }
    }
    DueTime.QuadPart = -1000000LL;
    ZwSetTimer(*(HANDLE *)(v5.QuadPart + 432), &DueTime, 0LL, 0LL, 0, 0, 0LL);
LABEL_29:
    RIMUnlockExclusive(v5.QuadPart + 712);
LABEL_31:
    RIMUnlockExclusive(v5.QuadPart + 96);
    ObfDereferenceObject((PVOID)v5.QuadPart);
  }
  LODWORD(Period) = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x3Fu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    Period);
  return (unsigned int)v4;
}
