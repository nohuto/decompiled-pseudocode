/*
 * XREFs of ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x1800015D0
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18000192C (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x180001744 (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18000182C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSessionManagerProvider::NotifyAudioDGTerminated(
        CAudioSessionManagerProvider *this,
        char a2,
        bool a3)
{
  char v3; // r15
  CAudioSessionManagerProvider *v4; // rsi
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rbx
  CAudioSessionManager *v11; // rcx
  unsigned int (__fastcall *v12)(CAudioSessionManager *__hidden); // rax
  ATL::CAtlException *v13; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v14[16]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+58h] [rbp-30h]

  v3 = a2;
  v4 = this;
  v5 = 0LL;
  v15 = 0LL;
  v6 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v14, (struct _RTL_CRITICAL_SECTION *)((char *)this + 64), a3);
  v8 = 0LL;
  while ( (unsigned __int64)(unsigned int)v8 < *((_QWORD *)v4 + 14) )
  {
    try
    {
      if ( (unsigned __int64)(unsigned int)v8 >= *((_QWORD *)v4 + 14) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        &v15,
        *(_QWORD *)(*((_QWORD *)v4 + 13) + 8 * v8));
    }
    catch ( ATL::CAtlException *v13 )
    {
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v4 = this;
      v3 = a2;
    }
    v8 = (unsigned int)(v8 + 1);
    v6 = v16;
    v5 = v15;
  }
  if ( v14[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v14);
  for ( i = 0LL; i < v6; ++i )
  {
    LOBYTE(v7) = v3;
    CAudioSessionManager::Disconnect(v5[i], 6LL, v7);
  }
  if ( v5 )
  {
    for ( j = 0LL; j < v6; ++j )
    {
      v11 = (CAudioSessionManager *)v5[j];
      if ( v11 )
      {
        v12 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v11 + 16LL);
        if ( v12 == CAudioSessionManager::Release )
          CAudioSessionManager::Release(v11);
        else
          v12(v11);
      }
    }
    free(v5);
  }
}
