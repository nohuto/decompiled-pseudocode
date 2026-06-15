/*
 * XREFs of ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180074560
 * Callers:
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180071DD0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800753A0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x180076820 (-Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180077050 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18000EE10 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800117C0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?AddVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180070304 (-AddVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180071BD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180074DC4 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_qqq @ 0x180077B6C (WPP_SF_qqq.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::GetVolumeStrip(
        struct IAudioEndpointVolumeCallback *this,
        struct IAudioEndpointVolumeCallbackVtbl **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r12
  int DeviceVolumeStrip; // edi
  struct IAudioEndpointVolumeCallback *v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  const unsigned __int16 *Buffer; // rax
  CVolumeStrip *v9; // rbx
  ULONG (__stdcall *Release)(IUnknown *); // rsi
  const unsigned __int16 *v11; // rdx
  __int64 (__fastcall *v12)(CVolumeStrip *); // rbp
  struct IUnknown *v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)&this[118];
  DeviceVolumeStrip = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&this[118]);
  v6 = this + 123;
  if ( !this[123].lpVtbl )
  {
    v14 = 0LL;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x48u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (__int64)this);
    }
    v7 = g_pVolumeProvider;
    if ( !g_pVolumeProvider )
    {
      DeviceVolumeStrip = -2147418113;
      goto LABEL_39;
    }
    Buffer = CAudioEndpointId::GetBuffer((CAudioEndpointId *)&this[98]);
    DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(v7, Buffer, (PCNZWCH **)&v14);
    if ( DeviceVolumeStrip < 0 )
    {
      v9 = (CVolumeStrip *)v14;
      if ( !v14 )
        goto LABEL_39;
      Release = v14->lpVtbl->Release;
LABEL_11:
      if ( (char *)Release != (char *)CVolumeStrip::Release )
      {
LABEL_12:
        ((void (__fastcall *)(CVolumeStrip *))Release)(v9);
        goto LABEL_39;
      }
LABEL_23:
      CVolumeStrip::Release(v9);
      goto LABEL_39;
    }
    CAudioEndpointId::GetBuffer((CAudioEndpointId *)&this[98]);
    v9 = (CVolumeStrip *)v14;
    DeviceVolumeStrip = CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
                          (CPerEndpointVolumeAudioSession *)this,
                          v11,
                          (struct CVolumeStrip *)v14);
    if ( DeviceVolumeStrip < 0 )
    {
      if ( !v9 )
        goto LABEL_39;
      Release = *(ULONG (__stdcall **)(IUnknown *))(*(_QWORD *)v9 + 16LL);
      goto LABEL_11;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x49u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (__int64)this);
    }
    DeviceVolumeStrip = CVolumeStrip::AddVolumeInternalNotification(v9, this + 117);
    if ( DeviceVolumeStrip < 0 )
    {
      if ( !v9 )
        goto LABEL_39;
      Release = *(ULONG (__stdcall **)(IUnknown *))(*(_QWORD *)v9 + 16LL);
      if ( (char *)Release != (char *)CVolumeStrip::Release )
        goto LABEL_12;
      goto LABEL_23;
    }
    if ( (CVolumeStrip *)v6->lpVtbl != v9 )
      ATL::AtlComPtrAssign((struct IUnknown **)&this[123], (struct IUnknown *)v9);
    if ( v9 )
    {
      v12 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v9 + 16LL);
      if ( v12 == CVolumeStrip::Release )
        CVolumeStrip::Release(v9);
      else
        v12(v9);
    }
  }
  if ( a2 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        74LL,
        &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        this,
        v6->lpVtbl,
        a2);
    }
    *a2 = v6->lpVtbl;
    if ( v6->lpVtbl )
      (*((void (__fastcall **)(struct IAudioEndpointVolumeCallbackVtbl *))v6->lpVtbl->QueryInterface + 1))(v6->lpVtbl);
    DeviceVolumeStrip = 0;
  }
LABEL_39:
  LeaveCriticalSection(v2);
  if ( DeviceVolumeStrip < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x4Bu,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      DeviceVolumeStrip);
  }
  return (unsigned int)DeviceVolumeStrip;
}
