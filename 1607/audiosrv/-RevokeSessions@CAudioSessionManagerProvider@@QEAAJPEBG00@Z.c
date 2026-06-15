/*
 * XREFs of ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x180064108
 * Callers:
 *     ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x180063EF8 (-HandleDeviceAccess@@YAJPEAXPEBG1_N@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x180001744 (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z @ 0x18006318C (-RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::RevokeSessions(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  CAudioSessionManagerProvider *v4; // rsi
  int v5; // ebx
  _QWORD *v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rdi
  unsigned __int64 i; // rdi
  int v10; // eax
  unsigned __int64 j; // rdi
  CAudioSessionManager *v12; // rcx
  void (*v13)(void); // rax
  ATL::CAtlException *v15; // rbx
  int v16; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+38h] [rbp-70h]
  ATL::CAtlException *v18; // [rsp+48h] [rbp-60h] BYREF
  LPCRITICAL_SECTION v19; // [rsp+50h] [rbp-58h] BYREF
  char v20; // [rsp+58h] [rbp-50h]
  _QWORD *v21; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp-38h]
  int v24; // [rsp+78h] [rbp-30h]

  v4 = this;
  v5 = 0;
  v16 = 0;
  v6 = 0LL;
  v21 = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v19, (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  v8 = 0LL;
  while ( (unsigned __int64)(unsigned int)v8 < *((_QWORD *)v4 + 14) )
  {
    try
    {
      if ( (unsigned __int64)(unsigned int)v8 >= *((_QWORD *)v4 + 14) )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::Add(
        &v21,
        *(CAudioSessionManager **)(*((_QWORD *)v4 + 13) + 8 * v8));
    }
    catch ( ATL::CAtlException *v18 )
    {
      v15 = v18;
      if ( *(_DWORD *)v18 == -1073741571 )
        _o__resetstkoflw();
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
    v7 = v22;
    v6 = v21;
  }
  if ( v20 )
    ATL::CCritSecLock::Unlock(&v19);
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
      v12 = (CAudioSessionManager *)v6[j];
      if ( v12 )
      {
        v13 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
        if ( (char *)v13 == (char *)CAudioSessionManager::Release )
          CAudioSessionManager::Release(v12);
        else
          v13();
      }
    }
    free(v6);
  }
  return (unsigned int)v5;
}
