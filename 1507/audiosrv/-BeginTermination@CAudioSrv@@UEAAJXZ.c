/*
 * XREFs of ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800691B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     Template_pq @ 0x18006B0B4 (Template_pq.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?ListenTo_Terminate@@YAXXZ @ 0x1800940D8 (-ListenTo_Terminate@@YAXXZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x18009BD50 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     PdcActivationClientUnregister @ 0x1800A9F98 (PdcActivationClientUnregister.c)
 */

__int64 __fastcall CAudioSrv::BeginTermination(CAudioSrv *this)
{
  int v2; // edi
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, __int64); // rsi
  int v5; // eax
  __int64 v6; // rcx
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
    v3 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)this + 144);
    v4 = (void (__fastcall ***)(_QWORD, __int64))v3;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        29LL,
        &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
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
      v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x1Eu,
          (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
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
    v8 = RpcServerUnregisterIfEx(L"`", 0LL, 1);
    if ( v8 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x1Fu,
          (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
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
    v10 = RpcServerUnregisterIfEx(L"`", 0LL, 1);
    if ( v10 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x20u,
          (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
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
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x21u,
          (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
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
