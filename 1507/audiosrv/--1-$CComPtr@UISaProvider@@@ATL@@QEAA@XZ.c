/*
 * XREFs of ??1?$CComPtr@UISaProvider@@@ATL@@QEAA@XZ @ 0x180067798
 * Callers:
 *     _CAudioDGProcess::OnADGInactivityTimerFired_::_1_::dtor$1 @ 0x1800455D2 (_CAudioDGProcess--OnADGInactivityTimerFired_--_1_--dtor$1.c)
 *     _CAudioStream::UpdateStreamPriority_::_1_::dtor$1 @ 0x180046F4C (_CAudioStream--UpdateStreamPriority_--_1_--dtor$1.c)
 *     _CPerStreamVolumeAudioStream::FinalRelease_::_1_::dtor$0 @ 0x1800486DF (_CPerStreamVolumeAudioStream--FinalRelease_--_1_--dtor$0.c)
 *     _CAudioDGProcess::OnADGProcessTerminated_::_1_::dtor$1 @ 0x18006B583 (_CAudioDGProcess--OnADGProcessTerminated_--_1_--dtor$1.c)
 *     _CAudioStream::RegisterStream_::_1_::dtor$0 @ 0x180082595 (_CAudioStream--RegisterStream_--_1_--dtor$0.c)
 *     _CAudioStream::ReleaseSaDevice_::_1_::dtor$0 @ 0x1800827E2 (_CAudioStream--ReleaseSaDevice_--_1_--dtor$0.c)
 *     _CAudioStream::UnregisterStream_::_1_::dtor$0 @ 0x180082CF7 (_CAudioStream--UnregisterStream_--_1_--dtor$0.c)
 *     _CVADServer::InitializeEngine_::_1_::dtor$0 @ 0x18008B3EF (_CVADServer--InitializeEngine_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtr<ISaProvider>::~CComPtr<ISaProvider>(__int64 *a1, volatile int *a2)
{
  __int64 (__fastcall *v2)(__int64, volatile int *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v2 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)*a1 + 16LL);
    if ( v2 == ATL::CComObject<CSaProvider>::Release )
      return ATL::CComObject<CSaProvider>::Release(*a1, a2);
    else
      return ((__int64 (__fastcall *)(__int64))v2)(*a1);
  }
  return result;
}
