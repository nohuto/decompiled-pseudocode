/*
 * XREFs of ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x1800A1358
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002CD20 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_dS @ 0x18007C3B8 (WPP_SF_dS.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18009FB48 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ApplyEndpointVolumeOverride(
        CApplicationManager *this,
        wchar_t *a2,
        unsigned int a3,
        int *a4,
        int *a5,
        float *a6,
        int *a7,
        int *a8)
{
  struct CVolumeStrip *v11; // rbx
  __int64 v12; // rcx
  int *v13; // r15
  int *v14; // r12
  int DeviceVolumeStrip; // esi
  struct CVolumeStrip *v17[2]; // [rsp+50h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v18; // [rsp+60h] [rbp-10h] BYREF
  char v19; // [rsp+68h] [rbp-8h]
  CApplicationManager *v20; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+C0h] [rbp+50h]
  float v22; // [rsp+C8h] [rbp+58h] BYREF

  v21 = a3;
  v20 = this;
  v17[1] = (struct CVolumeStrip *)-2LL;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v18,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  v11 = 0LL;
  v17[0] = 0LL;
  v22 = FLOAT_1_0;
  LODWORD(v20) = 0;
  v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_dS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x34u,
      (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
      a3,
      a2);
    v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  *a4 = 0;
  v13 = a5;
  *a5 = 0;
  v14 = a7;
  *a7 = 0;
  if ( g_pVolumeProvider )
  {
    DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, a2, (struct IUnknown **)v17);
    v11 = v17[0];
    if ( DeviceVolumeStrip >= 0 )
    {
      (*(void (__fastcall **)(struct CVolumeStrip *, float *))(*(_QWORD *)v17[0] + 120LL))(v17[0], &v22);
      (*(void (__fastcall **)(struct CVolumeStrip *, CApplicationManager **))(*(_QWORD *)v11 + 192LL))(v11, &v20);
      DeviceVolumeStrip = TsSessionIdAddEndpointVolumeReference(v21, (char *)a2, v22, (int)v20, a4, v13, a6, v14, a8);
      if ( DeviceVolumeStrip >= 0 )
        goto LABEL_14;
    }
    v12 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  else
  {
    DeviceVolumeStrip = -2147418113;
  }
  if ( (struct _GUID *)v12 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v12 + 28) & 0x40000000) != 0
    && *(_BYTE *)(v12 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v12 + 16), 0x35u, (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids, DeviceVolumeStrip);
  }
LABEL_14:
  if ( v11 )
    (*(void (__fastcall **)(struct CVolumeStrip *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v19 )
    ATL::CCritSecLock::Unlock(&v18);
  return (unsigned int)DeviceVolumeStrip;
}
