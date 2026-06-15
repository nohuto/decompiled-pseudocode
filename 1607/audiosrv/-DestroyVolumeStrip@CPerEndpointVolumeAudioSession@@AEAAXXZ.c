/*
 * XREFs of ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x180002D3C
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180002700 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18005ACD0 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180001F10 (-DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x180018430 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPerEndpointVolumeAudioSession::DestroyVolumeStrip(
        CPerEndpointVolumeAudioSession *this,
        __int64 a2,
        bool a3)
{
  CVolumeStrip *v4; // rcx
  struct IAudioEndpointVolumeCallback *v5; // rdx
  __int64 (__fastcall *v6)(CVolumeStrip *, struct IAudioEndpointVolumeCallback *); // rax
  CVolumeStrip *v7; // rcx
  void (*v8)(void); // rax
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 1016), a3);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x31u,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      this,
      *((_QWORD *)this + 132));
  }
  v4 = (CVolumeStrip *)*((_QWORD *)this + 132);
  if ( v4 )
  {
    v5 = (struct IAudioEndpointVolumeCallback *)((char *)this + 1008);
    v6 = *(__int64 (__fastcall **)(CVolumeStrip *, struct IAudioEndpointVolumeCallback *))(*(_QWORD *)v4 + 248LL);
    if ( v6 == CVolumeStrip::DeleteVolumeInternalNotification )
      CVolumeStrip::DeleteVolumeInternalNotification(v4, v5);
    else
      v6(v4, v5);
    v7 = (CVolumeStrip *)*((_QWORD *)this + 132);
    if ( v7 )
    {
      *((_QWORD *)this + 132) = 0LL;
      v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
      if ( (char *)v8 == (char *)CVolumeStrip::Release )
        CVolumeStrip::Release(v7);
      else
        v8();
    }
  }
  if ( v9[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v9);
}
