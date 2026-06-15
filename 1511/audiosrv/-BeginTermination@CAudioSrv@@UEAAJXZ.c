/*
 * XREFs of ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x180067B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x180066A4C (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     Template_pq @ 0x180069DC8 (Template_pq.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?ListenTo_Terminate@@YAXXZ @ 0x180091908 (-ListenTo_Terminate@@YAXXZ.c)
 *     PdcActivationClientUnregister @ 0x1800A7A78 (PdcActivationClientUnregister.c)
 */

__int64 __fastcall CAudioSrv::BeginTermination(CAudioSrv *this)
{
  int v2; // edi
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, __int64); // rsi
  int v5; // eax
  TraceLoggingHProvider v6; // rcx
  unsigned int v7; // ebx
  RPC_STATUS v8; // eax
  int v9; // eax
  RPC_STATUS v10; // eax
  int v11; // eax
  RPC_STATUS v12; // eax

  if ( *((_DWORD *)this + 24) )
  {
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(
      *(_QWORD *)&g_DeviceEnumerator,
      (char *)this + 64);
    *((_DWORD *)this + 24) = 0;
  }
  if ( ThreadPool && *((_QWORD *)this + 24) )
  {
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, _QWORD))(*(_QWORD *)ThreadPool + 40LL))(
      ThreadPool,
      *((_QWORD *)this + 24),
      0LL);
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 64LL))(
      ThreadPool,
      *((_QWORD *)this + 24));
    *((_QWORD *)this + 24) = 0LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v2 = 1;
  while ( *((_QWORD *)this + 20) )
  {
    v3 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((__int64)this + 144);
    v4 = (void (__fastcall ***)(_QWORD, __int64))v3;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        29LL,
        &WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
        *(_QWORD *)(v3 + 8));
    }
    if ( v4 )
      (**v4)(v4, 1LL);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  if ( g_hPdcActivator )
  {
    v5 = PdcActivationClientUnregister();
    v7 = v5;
    if ( v5 < 0 )
    {
      v6 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
          v5);
      }
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
      Template_pq(v6, &EVT_AUDIOSRV_PdcActivationClientUnregister, g_hPdcActivator, v7);
    g_hPdcActivator = 0LL;
  }
  if ( *((_DWORD *)this + 22) )
    ListenTo_Terminate();
  if ( *((_DWORD *)this + 14) )
  {
    v8 = RpcServerUnregisterIfEx(&unk_1800AEAA0, 0LL, 1);
    if ( v8 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
          v8);
      }
      v9 = 1;
    }
    else
    {
      v9 = 0;
    }
    *((_DWORD *)this + 14) = v9;
  }
  if ( *((_DWORD *)this + 12) )
  {
    v10 = RpcServerUnregisterIfEx(&unk_1800AEA40, 0LL, 1);
    if ( v10 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x20u,
          (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
          v10);
      }
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    *((_DWORD *)this + 12) = v11;
  }
  if ( *((_DWORD *)this + 13) )
  {
    v12 = RpcServerUnregisterIfEx(L"`", 0LL, 1);
    if ( v12 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x21u,
          (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
          v12);
      }
    }
    else
    {
      v2 = 0;
    }
    *((_DWORD *)this + 13) = v2;
  }
  return 0LL;
}
