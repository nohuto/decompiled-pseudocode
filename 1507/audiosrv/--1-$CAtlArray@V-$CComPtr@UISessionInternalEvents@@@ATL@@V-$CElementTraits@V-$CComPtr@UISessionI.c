/*
 * XREFs of ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800080EC
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18000FB3C (--1CAudioSession@@MEAA@XZ.c)
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::ForEachEntry_::_1_::dtor$0 @ 0x180046870 (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--ForEachEntry_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::~CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>(
        __int64 a1)
{
  _QWORD *v1; // r14
  unsigned __int64 v3; // r15
  unsigned __int64 i; // rbx
  __int64 v5; // rdi
  unsigned int (__fastcall *v6)(CServerAudioSessionControl *__hidden); // rbp

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    for ( i = 0LL; i < v3; ++i )
    {
      v5 = v1[i];
      if ( v5 )
      {
        v6 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v5 + 16LL);
        if ( v6 == CAudioSessionManager::Release )
        {
          CAudioSessionManager::Release((CAudioSessionManager *)v1[i]);
        }
        else if ( v6 == CServerAudioSessionControl::Release )
        {
          CServerAudioSessionControl::Release((CServerAudioSessionControl *)v1[i]);
        }
        else
        {
          v6((CServerAudioSessionControl *)v1[i]);
        }
      }
    }
    free(*(void **)a1);
  }
}
