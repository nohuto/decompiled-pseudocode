/*
 * XREFs of AudioSessionDestroy @ 0x18000D9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x18000E7F0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x18000EFD0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall AudioSessionDestroy(CServerAudioSessionControl **a1)
{
  CServerAudioSessionControl *v1; // rbx
  unsigned __int32 v3; // edi
  unsigned int (__fastcall *v4)(CServerAudioSessionControl *__hidden); // rax
  __int64 (__fastcall *v6)(CServerAudioSessionControl *__hidden); // rax

  v1 = *a1;
  v3 = _InterlockedDecrement((volatile signed __int32 *)*a1 + 6);
  if ( !v3 )
  {
    v6 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v1 + 104LL);
    if ( v6 == CServerAudioSessionControl::Dispose )
      CServerAudioSessionControl::Dispose(v1);
    else
      v6(v1);
  }
  v4 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v1 + 16LL);
  if ( v4 == CServerAudioSessionControl::Release )
    CServerAudioSessionControl::Release(v1);
  else
    v4(v1);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, v3);
  }
  *a1 = 0LL;
  return 0LL;
}
