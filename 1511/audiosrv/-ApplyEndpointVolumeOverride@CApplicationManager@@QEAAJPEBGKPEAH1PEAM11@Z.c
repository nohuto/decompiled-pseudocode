/*
 * XREFs of ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18009E4C8
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18000EE10 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_dS @ 0x1800776A8 (WPP_SF_dS.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18009CCB4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ApplyEndpointVolumeOverride(
        CApplicationManager *this,
        unsigned __int16 *a2,
        DWORD a3,
        int *a4,
        int *a5,
        float *a6,
        int *a7,
        int *a8)
{
  CVolumeStrip *v11; // rbx
  TraceLoggingHProvider v12; // rcx
  int *v13; // r14
  int *v14; // r15
  int DeviceVolumeStrip; // edi
  __int64 (__fastcall *v16)(CVolumeStrip *); // rsi
  CVolumeStrip *v18[2]; // [rsp+50h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v19; // [rsp+60h] [rbp-10h] BYREF
  char v20; // [rsp+68h] [rbp-8h]
  CApplicationManager *v21; // [rsp+B0h] [rbp+40h] BYREF
  float v22; // [rsp+C8h] [rbp+58h] BYREF

  v21 = this;
  v18[1] = (CVolumeStrip *)-2LL;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v19,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  v11 = 0LL;
  v18[0] = 0LL;
  v22 = FLOAT_1_0;
  LODWORD(v21) = 0;
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x35u,
      (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
      a3,
      a2);
    v12 = WPP_GLOBAL_Control;
  }
  *a4 = 0;
  v13 = a5;
  *a5 = 0;
  v14 = a7;
  *a7 = 0;
  if ( g_pVolumeProvider )
  {
    DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, a2, (PCNZWCH **)v18);
    v11 = v18[0];
    if ( DeviceVolumeStrip >= 0 )
    {
      (*(void (__fastcall **)(CVolumeStrip *, float *))(*(_QWORD *)v18[0] + 120LL))(v18[0], &v22);
      (*(void (__fastcall **)(CVolumeStrip *, CApplicationManager **))(*(_QWORD *)v11 + 192LL))(v11, &v21);
      DeviceVolumeStrip = TsSessionIdAddEndpointVolumeReference(a3, (char *)a2, v22, (int)v21, a4, v13, a6, v14, a8);
      if ( DeviceVolumeStrip >= 0 )
        goto LABEL_14;
    }
    v12 = WPP_GLOBAL_Control;
  }
  else
  {
    DeviceVolumeStrip = -2147418113;
  }
  if ( v12 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v12 + 7) & 0x40000000) != 0
    && *((_BYTE *)v12 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v12 + 2), 0x36u, (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, DeviceVolumeStrip);
  }
LABEL_14:
  if ( v11 )
  {
    v16 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v11 + 16LL);
    if ( v16 == CVolumeStrip::Release )
      CVolumeStrip::Release(v11);
    else
      v16(v11);
  }
  if ( v20 )
    ATL::CCritSecLock::Unlock(&v19);
  return (unsigned int)DeviceVolumeStrip;
}
