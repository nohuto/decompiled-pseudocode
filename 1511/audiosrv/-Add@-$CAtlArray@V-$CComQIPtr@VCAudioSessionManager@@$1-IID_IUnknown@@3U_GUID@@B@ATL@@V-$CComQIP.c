/*
 * XREFs of ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x1800023F8
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180002290 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x18007C9E8 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x18000238C (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800162C0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        _QWORD *a1,
        CAudioSessionManager *a2)
{
  unsigned __int64 v2; // rsi
  CAudioSessionManager **v5; // rcx
  unsigned int (__fastcall *v6)(CAudioSessionManager *__hidden); // rbp

  v2 = a1[1];
  if ( v2 >= a1[2]
    && !ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::GrowBuffer(
          (__int64)a1,
          v2 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v5 = (CAudioSessionManager **)(*a1 + 8 * v2);
  if ( v5 )
  {
    *v5 = a2;
    if ( a2 )
    {
      v6 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)a2 + 8LL);
      if ( v6 == CAudioSessionManager::AddRef )
        CAudioSessionManager::AddRef(a2);
      else
        v6(a2);
    }
  }
  ++a1[1];
  return v2;
}
