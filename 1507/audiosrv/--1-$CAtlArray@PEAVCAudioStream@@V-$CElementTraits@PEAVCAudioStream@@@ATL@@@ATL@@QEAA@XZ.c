/*
 * XREFs of ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x180005D34
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18000FB3C (--1CAudioSession@@MEAA@XZ.c)
 *     ??1?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ @ 0x1800714A4 (--1-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800714F8 (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x180071768 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180077550 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _CAudioSession::Disconnect_::_1_::dtor$0 @ 0x180077775 (_CAudioSession--Disconnect_--_1_--dtor$0.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x180077B50 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     _CAudioSession::DisconnectStreams_::_1_::dtor$0 @ 0x180077D8D (_CAudioSession--DisconnectStreams_--_1_--dtor$0.c)
 *     ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x180077DF0 (-DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z.c)
 *     _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$0 @ 0x180078048 (_CAudioSession--DisconnectStreamsForResource_--_1_--dtor$0.c)
 *     ??1CAudioSessionManager@@UEAA@XZ @ 0x18007EC7C (--1CAudioSessionManager@@UEAA@XZ.c)
 *     ??1CDuckingManager@@UEAA@XZ @ 0x1800A428C (--1CDuckingManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
