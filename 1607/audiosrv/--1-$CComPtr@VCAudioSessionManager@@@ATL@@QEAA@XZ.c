/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ @ 0x180050794
 * Callers:
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x18005344F (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$9.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x18006AE33 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>(CAudioSessionManager **a1)
{
  CAudioSessionManager *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CAudioSessionManager::Release )
      CAudioSessionManager::Release(v1);
    else
      v2();
  }
}
