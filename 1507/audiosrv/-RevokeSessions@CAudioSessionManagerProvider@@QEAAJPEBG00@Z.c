/*
 * XREFs of ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x180081638
 * Callers:
 *     s_RevokeDeviceAccessForPackage @ 0x1800817E0 (s_RevokeDeviceAccessForPackage.c)
 * Callees:
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x18000178C (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z @ 0x180080774 (-RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManagerProvider::RevokeSessions(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  CAudioSessionManagerProvider *v4; // rdi
  int v5; // ebx
  _QWORD *v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  unsigned __int64 i; // rdi
  int v10; // eax
  unsigned __int64 j; // rdi
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(CAudioSessionManager *); // r12
  ATL::CAtlException *v15; // rbx
  int v16; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+38h] [rbp-70h]
  ATL::CAtlException *v18; // [rsp+48h] [rbp-60h] BYREF
  _QWORD *v19; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  int v22; // [rsp+68h] [rbp-40h]

  v4 = this;
  v5 = 0;
  v16 = 0;
  v6 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v8 = 0LL;
  while ( (unsigned __int64)(unsigned int)v8 < *((_QWORD *)v4 + 14) )
  {
    try
    {
      if ( (unsigned __int64)(unsigned int)v8 >= *((_QWORD *)v4 + 14) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        &v19,
        *(CAudioSessionManager **)(*((_QWORD *)v4 + 13) + 8 * v8));
    }
    catch ( ATL::CAtlException *v18 )
    {
      v15 = v18;
      if ( *(_DWORD *)v18 == -1073741571 )
        _resetstkoflw();
      v17 = *(_DWORD *)v15;
      v5 = v16;
      v4 = this;
      if ( v17 < 0 )
      {
        if ( v16 >= 0 )
          v5 = v17;
        v16 = v5;
      }
    }
    v8 = (unsigned int)(v8 + 1);
    v7 = v20;
    v6 = v19;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 64));
  for ( i = 0LL; i < v7; ++i )
  {
    v10 = CAudioSessionManager::RevokeSessions(v6[i], a2, a3, a4);
    if ( v10 < 0 && v5 >= 0 )
      v5 = v10;
  }
  if ( v6 )
  {
    for ( j = 0LL; j < v7; ++j )
    {
      v12 = v6[j];
      if ( v12 )
      {
        v13 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v12 + 16LL);
        if ( v13 == CAudioSessionManager::Release )
          CAudioSessionManager::Release((CAudioSessionManager *)v6[j]);
        else
          v13((CAudioSessionManager *)v6[j]);
      }
    }
    free(v6);
  }
  return (unsigned int)v5;
}
