/*
 * XREFs of ?Invoke@CAudioSessionDisconnected@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180079670
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180018180 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionDisconnected::Invoke(__int64 a1, CAudioSessionManager **a2)
{
  unsigned int v3; // esi
  __int64 (__fastcall *v4)(CServerAudioSessionControl *); // rbx

  v3 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD))(*(_QWORD *)*a2 + 72LL))(
         *a2,
         *(_QWORD *)(a1 + 8),
         *(unsigned int *)(a1 + 16));
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
