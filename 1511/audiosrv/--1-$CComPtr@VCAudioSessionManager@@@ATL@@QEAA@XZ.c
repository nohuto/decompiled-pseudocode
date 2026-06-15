/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ @ 0x180066014
 * Callers:
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x1800690C8 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$9.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x18008219E (_CPolicyConfig--DisconnectHelper_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>(CAudioSessionManager **a1)
{
  __int64 (__fastcall *v1)(CAudioSessionManager *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == CAudioSessionManager::Release )
      return CAudioSessionManager::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
