/*
 * XREFs of ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180002E30
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180002700 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180002C30 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x180003000 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18005F6F0 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     ?AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180001F40 (-AddVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x1800029A0 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180005E04 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x180018430 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B7C0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqq @ 0x180060128 (WPP_SF_qqq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPerEndpointVolumeAudioSession::GetVolumeStrip(
        CPerEndpointVolumeAudioSession *this,
        struct CVolumeStrip **a2)
{
  int EndpointVolumeInformation; // ebx
  _QWORD *v5; // rsi
  CAudioSession **v6; // rdx
  CVolumeStrip *v8; // rcx
  CVolumeProvider *v9; // rbx
  const unsigned __int16 *Buffer; // rdx
  __int64 (__fastcall *v11)(CVolumeProvider *__hidden, const unsigned __int16 *, struct CVolumeStrip **); // rax
  int DeviceVolumeStrip; // eax
  struct CVolumeStrip *v13; // rbx
  const unsigned __int16 *v14; // rdx
  struct IAudioEndpointVolumeCallback *v15; // rdx
  __int64 (__fastcall *QueryInterface)(CVolumeStrip *, struct IAudioEndpointVolumeCallback *); // rax
  int v17; // eax
  CVolumeStrip *v18; // rcx
  char *v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  struct IUnknown *v21; // [rsp+70h] [rbp+20h] BYREF

  EndpointVolumeInformation = 0;
  v19 = (char *)this + 1016;
  v20 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v19);
  v5 = (_QWORD *)((char *)this + 1056);
  v6 = &WPP_GLOBAL_Control;
  if ( *((_QWORD *)this + 132) )
    goto LABEL_2;
  v8 = 0LL;
  v21 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, this);
    v8 = (CVolumeStrip *)v21;
  }
  v9 = g_pVolumeProvider;
  if ( g_pVolumeProvider )
  {
    Buffer = CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 784));
    v11 = *(__int64 (__fastcall **)(CVolumeProvider *__hidden, const unsigned __int16 *, struct CVolumeStrip **))(*(_QWORD *)v9 + 48LL);
    if ( v11 == CVolumeProvider::GetDeviceVolumeStrip )
      DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(v9, Buffer, (struct CVolumeStrip **)&v21);
    else
      DeviceVolumeStrip = v11(v9, Buffer, (struct CVolumeStrip **)&v21);
    EndpointVolumeInformation = DeviceVolumeStrip;
    if ( DeviceVolumeStrip < 0 )
      goto LABEL_35;
    v13 = (struct CVolumeStrip *)v21;
    CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 784));
    EndpointVolumeInformation = CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(this, v14, v13);
    if ( EndpointVolumeInformation < 0 )
      goto LABEL_35;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, this);
    }
    v15 = (struct IAudioEndpointVolumeCallback *)((char *)this + 1008);
    QueryInterface = (__int64 (__fastcall *)(CVolumeStrip *, struct IAudioEndpointVolumeCallback *))v21->lpVtbl[10].QueryInterface;
    v17 = QueryInterface == CVolumeStrip::AddVolumeInternalNotification
        ? CVolumeStrip::AddVolumeInternalNotification((CVolumeStrip *)v21, v15)
        : QueryInterface((CVolumeStrip *)v21, v15);
    EndpointVolumeInformation = v17;
    if ( v17 < 0 )
    {
LABEL_35:
      if ( v21 )
      {
        if ( (unsigned int (__fastcall *)(CVolumeStrip *__hidden))v21->lpVtbl->Release == CVolumeStrip::Release )
          CVolumeStrip::Release((CVolumeStrip *)v21);
        else
          ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
      }
LABEL_3:
      if ( EndpointVolumeInformation >= 0 )
        goto LABEL_4;
      goto LABEL_47;
    }
    v18 = (CVolumeStrip *)v21;
    if ( (struct IUnknown *)*v5 != v21 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 132, v21);
      v18 = (CVolumeStrip *)v21;
    }
    if ( v18 )
    {
      if ( *(unsigned int (__fastcall **)(CVolumeStrip *__hidden))(*(_QWORD *)v18 + 16LL) == CVolumeStrip::Release )
        CVolumeStrip::Release(v18);
      else
        (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v6 = &WPP_GLOBAL_Control;
LABEL_2:
    if ( a2 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          48LL,
          &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
          this,
          *v5,
          a2,
          -2LL);
      }
      *a2 = (struct CVolumeStrip *)*v5;
      if ( *v5 )
        (*(void (__fastcall **)(_QWORD, CAudioSession **))(*(_QWORD *)*v5 + 8LL))(*v5, v6);
      EndpointVolumeInformation = 0;
    }
    goto LABEL_3;
  }
  EndpointVolumeInformation = -2147418113;
  if ( v8 )
  {
    if ( *(unsigned int (__fastcall **)(CVolumeStrip *__hidden))(*(_QWORD *)v8 + 16LL) == CVolumeStrip::Release )
      CVolumeStrip::Release(v8);
    else
      (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_47:
  AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::GetVolumeStrip", 0x82Fu, EndpointVolumeInformation);
LABEL_4:
  if ( v20 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v19);
  return (unsigned int)EndpointVolumeInformation;
}
