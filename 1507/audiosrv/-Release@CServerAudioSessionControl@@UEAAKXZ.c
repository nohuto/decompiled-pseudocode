/*
 * XREFs of ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180
 * Callers:
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180005508 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800080EC (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180016B88 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180017EC0 (-RemoveInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComP.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018070 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180019EA0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800312F0 (-Invoke@CAudioSessionVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     AudioSessionDestroy @ 0x180031510 (AudioSessionDestroy.c)
 *     ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180031D00 (-Invoke@CAudioSessionGroupingParamChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Release@CServerAudioSessionControl@@W7EAAKXZ @ 0x180044D80 (-Release@CServerAudioSessionControl@@W7EAAKXZ.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180067810 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 *     ??1?$CComPtr@UISessionInternalEvents@@@ATL@@QEAA@XZ @ 0x180067F40 (--1-$CComPtr@UISessionInternalEvents@@@ATL@@QEAA@XZ.c)
 *     ?Invoke@CAudioChannelVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800795A0 (-Invoke@CAudioChannelVolumeChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionDisconnected@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180079670 (-Invoke@CAudioSessionDisconnected@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionDisplayNameChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180079730 (-Invoke@CAudioSessionDisplayNameChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioSessionIconPathChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800797F0 (-Invoke@CAudioSessionIconPathChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180018990 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::Release(CServerAudioSessionControl *this)
{
  char *v1; // rsi
  unsigned __int32 v2; // ebx
  void (__fastcall *v4)(CServerAudioSessionControl *__hidden); // rdi

  v1 = (char *)this + 8;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    v4 = *(void (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v1 + 32LL);
    if ( v4 == CServerAudioSessionControl::FinalRelease )
      CServerAudioSessionControl::FinalRelease((CServerAudioSessionControl *)((char *)this + 8));
    else
      v4((CServerAudioSessionControl *)((char *)this + 8));
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
