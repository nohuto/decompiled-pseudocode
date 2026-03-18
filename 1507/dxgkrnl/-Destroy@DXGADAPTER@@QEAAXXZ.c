/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0123780
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C011F368 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0010008 (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiFreeAdapterInfo @ 0x1C00B431C (DpiFreeAdapterInfo.c)
 *     DpiReportAdapter @ 0x1C00C3D40 (DpiReportAdapter.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01233FC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0123630 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0140168 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  ADAPTER_DISPLAY **v11; // rcx
  ADAPTER_RENDER *v12; // rcx
  void (__fastcall *v13)(_QWORD); // rax
  void (__fastcall *v14)(_QWORD); // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // [rsp+C0h] [rbp-58h]
  int v20; // [rsp+D8h] [rbp-40h]
  _BYTE v21[24]; // [rsp+100h] [rbp-18h] BYREF

  v5 = *((_DWORD *)this + 228);
  if ( (*((_DWORD *)this + 71) & 8) != 0 && !*((_QWORD *)this + 247) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v21);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v7, v6, v8, v9) + 71) == this )
    {
      *((_QWORD *)DXGGLOBAL::GetGlobal(v10, a2, a3, a4) + 71) = 0LL;
      DXGADAPTER::ReleaseReference(this);
    }
    if ( v21[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  }
  v11 = (ADAPTER_DISPLAY **)*((_QWORD *)this + 247);
  if ( v11 )
    ADAPTER_DISPLAY::Destroy(v11, a2, a3, a4);
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 248);
  if ( v12 )
    ADAPTER_RENDER::Destroy(v12);
  v13 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 137);
  if ( v13 )
  {
    v13(*((_QWORD *)this + 135));
    memset((char *)this + 1072, 0, 0xB8uLL);
  }
  v14 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 161);
  if ( v14 )
  {
    v14(*((_QWORD *)this + 159));
    memset((char *)this + 1264, 0, 0x30uLL);
  }
  if ( (*((_DWORD *)this + 71) & 8) == 0 )
    DpiFreeAdapterInfo((__int64)this + 880);
  memset((char *)this + 224, 0, 0x290uLL);
  memset((char *)this + 880, 0, 0xC0uLL);
  v15 = *((_DWORD *)this + 46);
  if ( v15 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), v15);
    *((_DWORD *)this + 46) = -1;
  }
  v16 = *((_QWORD *)this + 22);
  if ( v16 )
  {
    DpiReportAdapter(v16, (__int64)this);
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)this + 341);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        v18 = (unsigned int)v17 >> 14;
        LOBYTE(v18) = v18 & 7;
        Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
          v18,
          &EventDestroyAdapter,
          v17 < 0,
          *((_QWORD *)this + 22),
          (char)this,
          v5,
          *((_QWORD *)this + 164),
          *((_DWORD *)this + 330),
          *((_QWORD *)this + 166),
          *((_DWORD *)this + 334),
          *((_DWORD *)this + 335),
          *((_DWORD *)this + 337),
          *((_DWORD *)this + 338),
          *((_DWORD *)this + 339),
          *((_DWORD *)this + 342),
          *((_DWORD *)this + 336),
          *((_DWORD *)this + 340),
          v17,
          ((unsigned int)v17 >> 10) & 0xF,
          v18,
          ((unsigned int)v17 >> 17) & 7,
          v17 < 0,
          *((_DWORD *)this + 343),
          *((_DWORD *)this + 344),
          v19,
          *((_DWORD *)this + 346),
          *((_DWORD *)this + 347),
          v20,
          0,
          0,
          0);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 56));
    *((_DWORD *)this + 30) = 0;
    *((_QWORD *)this + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
    KeLeaveCriticalRegion();
  }
}
