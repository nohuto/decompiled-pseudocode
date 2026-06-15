/*
 * XREFs of ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180001624
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001AB0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x18000178C (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001A5D4 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSessionManagerProvider::NotifyAudioDGTerminated(CAudioSessionManagerProvider *this, char a2)
{
  char v2; // r15
  CAudioSessionManagerProvider *v3; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r8
  unsigned __int64 i; // rdi
  unsigned __int64 j; // rdi
  __int64 v10; // rsi
  unsigned int (__fastcall *v11)(CAudioSessionManager *__hidden); // r15
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+48h] [rbp-30h]

  v2 = a2;
  v3 = this;
  v4 = 0LL;
  v13 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v6 = 0LL;
  while ( (unsigned __int64)(unsigned int)v6 < *((_QWORD *)v3 + 14) )
  {
    try
    {
      if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)v3 + 14) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        &v13,
        *(_QWORD *)(*((_QWORD *)v3 + 13) + 8 * v6));
    }
    catch ( ATL::CAtlException *v12 )
    {
      if ( *(_DWORD *)v12 == -1073741571 )
        _resetstkoflw();
      v3 = this;
      v2 = a2;
    }
    v6 = (unsigned int)(v6 + 1);
    v5 = v14;
    v4 = v13;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 64));
  for ( i = 0LL; i < v5; ++i )
  {
    LOBYTE(v7) = v2;
    CAudioSessionManager::Disconnect(v4[i], 6LL, v7);
  }
  if ( v4 )
  {
    for ( j = 0LL; j < v5; ++j )
    {
      v10 = v4[j];
      if ( v10 )
      {
        v11 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v10 + 16LL);
        if ( v11 == CAudioSessionManager::Release )
          CAudioSessionManager::Release((CAudioSessionManager *)v4[j]);
        else
          v11((CAudioSessionManager *)v4[j]);
      }
    }
    free(v4);
  }
}
