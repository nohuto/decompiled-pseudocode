/*
 * XREFs of RIMOnTimerNotification @ 0x1C00CFE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C000BC70 (WPP_RECORDER_SF_DD.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0081AE0 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00D81F4 (rimDispatchAutoRepeatCompleteFrame.c)
 *     RIMEndAllStaleContacts @ 0x1C00DB3D4 (RIMEndAllStaleContacts.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00DE840 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall RIMOnTimerNotification(void *a1, int a2)
{
  int v2; // edi
  int v4; // esi
  int v5; // ebp
  union _LARGE_INTEGER v6; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  LARGE_INTEGER v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  void *v13; // rcx
  int v14; // edx
  __int64 v15; // rdi
  LONGLONG v16; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 i; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // edi
  LONGLONG v22; // rax
  int v23; // edx
  LONGLONG v24; // rt2
  __int64 Period; // [rsp+28h] [rbp-90h]
  union _LARGE_INTEGER DueTime; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v28[14]; // [rsp+48h] [rbp-70h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    58,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = 1;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v5 >= 0 )
  {
    v6 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 96);
    if ( *(_BYTE *)(v6.QuadPart + 73) || *(_BYTE *)(v6.QuadPart + 74) )
    {
      v5 = -1073741637;
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        66,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
      goto LABEL_42;
    }
    RIMLockExclusive(v6.QuadPart + 696);
    LOBYTE(v8) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      4,
      59,
      (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    if ( v2 )
    {
      if ( *(_QWORD *)(v6.QuadPart + 480) != -1LL )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          4,
          62,
          (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
        ApiSetGetPowerTransitionsState(v28);
        if ( !v28[0] )
          goto LABEL_39;
        if ( v28[7] )
          goto LABEL_39;
        if ( v28[8] )
          goto LABEL_39;
        if ( !*(_DWORD *)(v6.QuadPart + 592) )
          goto LABEL_39;
        v15 = *(_QWORD *)(v6.QuadPart + 552);
        if ( !v15 )
          goto LABEL_39;
        do
        {
          if ( *(_BYTE *)(v15 + 48) == 2 )
          {
            if ( *(_DWORD *)(v15 + 316) )
            {
              if ( *(_QWORD *)(v15 + 408) )
              {
                ((void (__fastcall *)(_QWORD, _QWORD))rimDispatchAutoRepeatCompleteFrame)(
                  (union _LARGE_INTEGER)v6.QuadPart,
                  v15);
                if ( *(_QWORD *)(v15 + 408) )
                  v4 = 0;
              }
            }
          }
          v15 = *(_QWORD *)(v15 + 40);
        }
        while ( v15 );
        if ( v4 )
        {
LABEL_39:
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            4,
            65,
            (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
          ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 480), 0LL);
          *(_QWORD *)(v6.QuadPart + 512) = 0LL;
        }
        else
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            4,
            63,
            (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          for ( i = *(_QWORD *)(v6.QuadPart + 552); i; i = *(_QWORD *)(i + 40) )
          {
            if ( *(_BYTE *)(i + 48) == 2 )
            {
              if ( *(_DWORD *)(i + 316) )
              {
                v19 = *(_QWORD *)(i + 408);
                if ( v19 )
                {
                  if ( PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 64) < v16 )
                    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 64);
                }
              }
            }
          }
          v20 = 1000 * (v16 + *(_QWORD *)(v6.QuadPart + 496));
          v21 = 10;
          v24 = v20 % gliQpcFreq.QuadPart;
          v22 = v20 / gliQpcFreq.QuadPart;
          v23 = v24;
          if ( *(_DWORD *)(v6.QuadPart + 488) )
            v21 = *(_DWORD *)(v6.QuadPart + 488);
          if ( (unsigned int)v22 > v21 )
          {
            WPP_RECORDER_SF_DD(
              WPP_GLOBAL_Control->DeviceExtension,
              v23,
              5,
              64,
              (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
              v22,
              v21);
            LODWORD(v22) = v21;
          }
          DueTime.QuadPart = -10000LL * (int)v22;
          ZwSetTimer(*(HANDLE *)(v6.QuadPart + 480), &DueTime, 0LL, 0LL, 0, 0, 0LL);
          *(LARGE_INTEGER *)(v6.QuadPart + 512) = KeQueryPerformanceCounter(0LL);
        }
      }
      goto LABEL_40;
    }
    v10 = KeQueryPerformanceCounter(0LL);
    v12 = *(_QWORD *)(v6.QuadPart + 512);
    if ( v12 && v10.QuadPart - v12 <= *(_QWORD *)(v6.QuadPart + 504) )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        4,
        61,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        4,
        60,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
      ((void (__fastcall *)(_QWORD))RIMEndAllStaleContacts)((union _LARGE_INTEGER)v6.QuadPart);
      if ( !*(_DWORD *)(v6.QuadPart + 592) )
      {
        ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 472), 0LL);
        v13 = *(void **)(v6.QuadPart + 480);
        if ( v13 != (void *)-1LL )
        {
          ZwCancelTimer(v13, 0LL);
          *(_QWORD *)(v6.QuadPart + 512) = 0LL;
        }
        *(_DWORD *)(v6.QuadPart + 596) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(v13, 0LL);
        goto LABEL_40;
      }
    }
    DueTime.QuadPart = -1000000LL;
    ZwSetTimer(*(HANDLE *)(v6.QuadPart + 472), &DueTime, 0LL, 0LL, 0, 0, 0LL);
LABEL_40:
    RIMUnlockExclusive(v6.QuadPart + 696);
LABEL_42:
    RIMUnlockExclusive(v6.QuadPart + 96);
    ObfDereferenceObject((PVOID)v6.QuadPart);
  }
  LODWORD(Period) = v5;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x43u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    Period);
  return (unsigned int)v5;
}
