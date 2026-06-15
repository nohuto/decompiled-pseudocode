/*
 * XREFs of ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180079340
 * Callers:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800771F0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180079F60 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x18007B590 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18007BDC0 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x18000D284 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002CD20 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800342D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?AddVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180071C14 (-AddVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180079A2C (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_qqq @ 0x18007C87C (WPP_SF_qqq.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::GetVolumeStrip(
        struct IAudioEndpointVolumeCallback *this,
        struct IAudioEndpointVolumeCallbackVtbl **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r12
  int DeviceVolumeStrip; // esi
  struct IAudioEndpointVolumeCallback *v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  const wchar_t *Buffer; // rax
  struct IUnknown *v9; // rbx
  const unsigned __int16 *v10; // rdx
  struct IUnknown *v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)&this[99];
  DeviceVolumeStrip = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&this[99]);
  v6 = this + 104;
  if ( !this[104].lpVtbl )
  {
    v12 = 0LL;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x48u,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        this);
    }
    v7 = g_pVolumeProvider;
    if ( !g_pVolumeProvider )
    {
      DeviceVolumeStrip = -2147418113;
      goto LABEL_32;
    }
    Buffer = CAudioEndpointId::GetBuffer((CAudioEndpointId *)&this[79]);
    DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(v7, Buffer, &v12);
    if ( DeviceVolumeStrip < 0 )
    {
      if ( v12 )
        ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
      goto LABEL_32;
    }
    CAudioEndpointId::GetBuffer((CAudioEndpointId *)&this[79]);
    v9 = v12;
    DeviceVolumeStrip = CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
                          (CPerEndpointVolumeAudioSession *)this,
                          v10,
                          (struct CVolumeStrip *)v12);
    if ( DeviceVolumeStrip < 0 )
      goto LABEL_13;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x49u,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        this);
    }
    DeviceVolumeStrip = CVolumeStrip::AddVolumeInternalNotification((CVolumeStrip *)v9, this + 98);
    if ( DeviceVolumeStrip < 0 )
    {
LABEL_13:
      if ( v9 )
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      goto LABEL_32;
    }
    if ( (struct IUnknown *)v6->lpVtbl != v9 )
      ATL::AtlComPtrAssign((struct IUnknown **)&this[104], v9);
    if ( v9 )
      ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  }
  if ( a2 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qqq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        74LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        this,
        v6->lpVtbl,
        a2);
    }
    *a2 = v6->lpVtbl;
    if ( v6->lpVtbl )
      (*((void (__fastcall **)(struct IAudioEndpointVolumeCallbackVtbl *))v6->lpVtbl->QueryInterface + 1))(v6->lpVtbl);
    DeviceVolumeStrip = 0;
  }
LABEL_32:
  LeaveCriticalSection(v2);
  if ( DeviceVolumeStrip < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x4Bu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      DeviceVolumeStrip);
  }
  return (unsigned int)DeviceVolumeStrip;
}
