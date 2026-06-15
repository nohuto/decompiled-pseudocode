/*
 * XREFs of ?Invoke@CAudioChannelVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180074830
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180015730 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioChannelVolumeChanged::Invoke(__int64 a1, CAudioSessionManager **a2)
{
  unsigned int v3; // esi
  __int64 (__fastcall *v4)(CServerAudioSessionControl *); // rbx

  v3 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 48LL))(
         *a2,
         *(_QWORD *)(a1 + 8),
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         *(_DWORD *)(a1 + 28),
         *(_QWORD *)(a1 + 32),
         -2LL);
  if ( *a2 )
  {
    v4 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)*a2 + 16LL);
    if ( v4 == CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(*a2);
    }
    else if ( v4 == CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(*a2);
    }
    else
    {
      v4(*a2);
    }
  }
  return v3;
}
