/*
 * XREFs of ?Invoke@CAudioChannelVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18005C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x18000E7F0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioChannelVolumeChanged::Invoke(__int64 a1, CAudioSessionManager **a2)
{
  unsigned int v3; // edi
  CAudioSessionManager *v4; // rcx
  void (*v5)(void); // rax

  v3 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(*(_QWORD *)*a2 + 48LL))(
         *a2,
         *(_QWORD *)(a1 + 8),
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         *(_DWORD *)(a1 + 28),
         *(_QWORD *)(a1 + 32));
  v4 = *a2;
  if ( *a2 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CAudioSessionManager::Release )
    {
      CAudioSessionManager::Release(v4);
    }
    else if ( (char *)v5 == (char *)CServerAudioSessionControl::Release )
    {
      CServerAudioSessionControl::Release(v4);
    }
    else
    {
      v5();
    }
  }
  return v3;
}
