/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManagerProvider@@@ATL@@QEAA@XZ @ 0x180050758
 * Callers:
 *     _VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor$0 @ 0x180039938 (_VAD_AudiosrvAudioDGProcessTerminated_--_1_--dtor$0.c)
 *     _CVADServer::InitializePolicy_::_1_::dtor$3 @ 0x180039E04 (_CVADServer--InitializePolicy_--_1_--dtor$3.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$8 @ 0x180053443 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$8.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x18006AE27 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CAudioSessionManagerProvider>::~CComPtr<CAudioSessionManagerProvider>(int **a1)
{
  int *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v1);
    else
      v2();
  }
}
