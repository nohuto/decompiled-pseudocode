/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800A223C
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C130 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002CD20 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     WPP_SF_Sq @ 0x18007C2E0 (WPP_SF_Sq.c)
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
  struct CVolumeStrip *v8; // rbx
  int DeviceVolumeStrip; // esi
  __int64 v10; // rdx
  unsigned int v11; // esi
  LPCRITICAL_SECTION v13; // [rsp+38h] [rbp-40h] BYREF
  char v14; // [rsp+40h] [rbp-38h]
  struct CVolumeStrip *v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = this;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v13,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  v8 = 0LL;
  v15 = 0LL;
  if ( !g_pVolumeProvider )
  {
    DeviceVolumeStrip = -2147418113;
LABEL_17:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x3Au,
        (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        DeviceVolumeStrip);
    }
    goto LABEL_21;
  }
  DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, a2, (struct IUnknown **)&v15);
  v8 = v15;
  if ( DeviceVolumeStrip < 0 )
    goto LABEL_17;
  if ( a5 )
  {
    v11 = a6;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_SD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x38u,
        (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        a2);
    }
    DeviceVolumeStrip = (*(__int64 (__fastcall **)(struct CVolumeStrip *, _QWORD, __int64 *))(*(_QWORD *)v8 + 184LL))(
                          v8,
                          v11,
                          &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE);
    if ( DeviceVolumeStrip < 0 )
      goto LABEL_17;
  }
  if ( a3 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_Sq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x39u,
        (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        a2);
    }
    DeviceVolumeStrip = (*(__int64 (__fastcall **)(struct CVolumeStrip *, __int64, __int64 *))(*(_QWORD *)v8 + 104LL))(
                          v8,
                          v10,
                          &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE);
  }
  if ( DeviceVolumeStrip < 0 )
    goto LABEL_17;
LABEL_21:
  if ( v8 )
    (*(void (__fastcall **)(struct CVolumeStrip *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v14 )
    ATL::CCritSecLock::Unlock(&v13);
  return (unsigned int)DeviceVolumeStrip;
}
