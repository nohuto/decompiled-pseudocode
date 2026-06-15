/*
 * XREFs of ??1?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA@XZ @ 0x180050464
 * Callers:
 *     _CVolumeControlBase::_CVolumeControlBase_::_1_::dtor$2 @ 0x18005666C (_CVolumeControlBase--_CVolumeControlBase_--_1_--dtor$2.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18005ADCC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     _CAudioSession::DisconnectStreamList_::_1_::dtor$0 @ 0x18005AFDB (_CAudioSession--DisconnectStreamList_--_1_--dtor$0.c)
 *     ?DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z @ 0x18005B2B0 (-DisconnectStreamsForResource@CAudioSession@@UEAAJ_K@Z.c)
 *     _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$0 @ 0x18005B819 (_CAudioSession--DisconnectStreamsForResource_--_1_--dtor$0.c)
 *     _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$1 @ 0x18005B825 (_CAudioSession--DisconnectStreamsForResource_--_1_--dtor$1.c)
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
