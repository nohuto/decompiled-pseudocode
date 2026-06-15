/*
 * XREFs of ?CallDestructors@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@CAXPEAV?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@_K@Z @ 0x180001818
 * Callers:
 *     ??1?$CInterfaceArray@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@QEAA@XZ @ 0x180067FA4 (--1-$CInterfaceArray@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

int __fastcall ATL::CAtlArray<ATL::CComQIPtr<CAudioSessionManager,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CAudioSessionManager,&_GUID const IID_IUnknown>>::CallDestructors(
        __int64 a1,
        unsigned __int64 a2)
{
  _UNKNOWN **v2; // rax
  unsigned __int64 i; // rbx
  __int64 v6; // rdi
  unsigned int (__fastcall *v7)(CAudioSessionManager *__hidden); // rbp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    v2 = &retaddr;
    for ( i = 0LL; i < a2; ++i )
    {
      v6 = *(_QWORD *)(a1 + 8 * i);
      if ( v6 )
      {
        v7 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v6 + 16LL);
        if ( v7 == CAudioSessionManager::Release )
          LODWORD(v2) = CAudioSessionManager::Release(*(CAudioSessionManager **)(a1 + 8 * i));
        else
          LODWORD(v2) = v7(*(CAudioSessionManager **)(a1 + 8 * i));
      }
    }
  }
  return (int)v2;
}
