/*
 * XREFs of ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x18002FA1C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180027698 (--1CAudioSession@@MEAA@XZ.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800721B0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _CAudioSession::Disconnect_::_1_::dtor$0 @ 0x1800723FB (_CAudioSession--Disconnect_--_1_--dtor$0.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800727E0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     _CAudioSession::DisconnectStreams_::_1_::dtor$0 @ 0x180072A5F (_CAudioSession--DisconnectStreams_--_1_--dtor$0.c)
 *     ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x180072AC0 (-DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z.c)
 *     _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$0 @ 0x180073111 (_CAudioSession--DisconnectStreamsForResource_--_1_--dtor$0.c)
 *     _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$1 @ 0x18007311D (_CAudioSession--DisconnectStreamsForResource_--_1_--dtor$1.c)
 *     _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$2 @ 0x180073129 (_CAudioSession--DisconnectStreamsForResource_--_1_--dtor$2.c)
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
