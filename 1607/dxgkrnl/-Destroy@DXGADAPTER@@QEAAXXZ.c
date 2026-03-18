/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01451AC
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E90EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C0144CEC (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01468D0 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0011828 (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiReportAdapter @ 0x1C00E9744 (DpiReportAdapter.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0147394 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0148C38 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0169FDC (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C0192DA4 (DpiFreeAdapterInfo.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this)
{
  int v1; // eax
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  void (__fastcall *v8)(_QWORD); // rax
  void (__fastcall *v9)(_QWORD); // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // [rsp+C0h] [rbp-58h]
  int v15; // [rsp+D8h] [rbp-40h]
  _BYTE v16[16]; // [rsp+100h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 75);
  v3 = *((_DWORD *)this + 252);
  *((_BYTE *)this + 185) = 1;
  if ( (v1 & 0x10) != 0 && !*((_QWORD *)this + 266) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v16);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v4) + 70) == this )
    {
      *((_QWORD *)DXGGLOBAL::GetGlobal(v5) + 70) = 0LL;
      DXGADAPTER::ReleaseReference(this);
    }
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
  v6 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 266);
  if ( v6 )
    ADAPTER_DISPLAY::Destroy(v6);
  v7 = (ADAPTER_RENDER *)*((_QWORD *)this + 267);
  if ( v7 )
    ADAPTER_RENDER::Destroy(v7);
  v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 149);
  if ( v8 )
  {
    v8(*((_QWORD *)this + 147));
    memset((char *)this + 1168, 0, 0xB8uLL);
  }
  v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 173);
  if ( v9 )
  {
    v9(*((_QWORD *)this + 171));
    memset((char *)this + 1360, 0, 0x60uLL);
  }
  DpiFreeAdapterInfo((char *)this + 968);
  memset((char *)this + 240, 0, 0x2D8uLL);
  memset((char *)this + 968, 0, 0xC8uLL);
  v10 = *((_DWORD *)this + 50);
  if ( v10 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), v10);
    *((_DWORD *)this + 50) = -1;
  }
  v11 = *((_QWORD *)this + 24);
  if ( v11 )
  {
    DpiReportAdapter(v11, (__int64)this);
    if ( bTracingEnabled )
    {
      v12 = *((_DWORD *)this + 377);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v13 = (unsigned int)v12 >> 14;
        LOBYTE(v13) = v13 & 7;
        Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
          v13,
          &EventDestroyAdapter,
          v12 < 0,
          *((_QWORD *)this + 24),
          (char)this,
          v3,
          *((_QWORD *)this + 182),
          *((_DWORD *)this + 366),
          *((_QWORD *)this + 184),
          *((_DWORD *)this + 370),
          *((_DWORD *)this + 371),
          *((_DWORD *)this + 373),
          *((_DWORD *)this + 374),
          *((_DWORD *)this + 375),
          *((_DWORD *)this + 378),
          *((_DWORD *)this + 372),
          *((_DWORD *)this + 376),
          v12,
          ((unsigned int)v12 >> 10) & 0xF,
          v13,
          ((unsigned int)v12 >> 17) & 7,
          v12 < 0,
          *((_DWORD *)this + 379),
          *((_DWORD *)this + 380),
          v14,
          *((_DWORD *)this + 382),
          *((_DWORD *)this + 383),
          v15,
          0,
          0,
          0);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 72));
    *((_DWORD *)this + 34) = 0;
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
}
