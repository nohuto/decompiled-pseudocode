/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18009F3EC
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18000EE10 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 *     WPP_SF_Sq @ 0x1800775D0 (WPP_SF_Sq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::UpdateEndpointVolume(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        int a3,
        float a4,
        int a5,
        unsigned int a6)
{
  CVolumeStrip *v8; // rbx
  int DeviceVolumeStrip; // edi
  __int64 v10; // rdx
  unsigned int v11; // ebp
  __int64 (__fastcall *v12)(CVolumeStrip *); // rsi
  LPCRITICAL_SECTION v14; // [rsp+38h] [rbp-40h] BYREF
  char v15; // [rsp+40h] [rbp-38h]
  CVolumeStrip *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = this;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v14,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  v8 = 0LL;
  v16 = 0LL;
  if ( !g_pVolumeProvider )
  {
    DeviceVolumeStrip = -2147418113;
LABEL_17:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Bu,
        (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        DeviceVolumeStrip);
    }
    goto LABEL_21;
  }
  DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, a2, (PCNZWCH **)&v16);
  v8 = v16;
  if ( DeviceVolumeStrip < 0 )
    goto LABEL_17;
  if ( a5 )
  {
    v11 = a6;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x39u,
        (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        a2);
    }
    DeviceVolumeStrip = (*(__int64 (__fastcall **)(CVolumeStrip *, _QWORD, __int64 *))(*(_QWORD *)v8 + 184LL))(
                          v8,
                          v11,
                          &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE);
    if ( DeviceVolumeStrip < 0 )
      goto LABEL_17;
  }
  if ( a3 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Au,
        (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        a2);
    }
    DeviceVolumeStrip = (*(__int64 (__fastcall **)(CVolumeStrip *, __int64, __int64 *))(*(_QWORD *)v8 + 104LL))(
                          v8,
                          v10,
                          &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE);
  }
  if ( DeviceVolumeStrip < 0 )
    goto LABEL_17;
LABEL_21:
  if ( v8 )
  {
    v12 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v8 + 16LL);
    if ( v12 == CVolumeStrip::Release )
      CVolumeStrip::Release(v8);
    else
      v12(v8);
  }
  if ( v15 )
    ATL::CCritSecLock::Unlock(&v14);
  return (unsigned int)DeviceVolumeStrip;
}
