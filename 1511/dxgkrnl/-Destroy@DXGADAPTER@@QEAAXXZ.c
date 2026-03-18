/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0129444
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C0124E68 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0011778 (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiReportAdapter @ 0x1C00D4280 (DpiReportAdapter.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01290DC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01292F4 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0146640 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C016B0B0 (DpiFreeAdapterInfo.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  ADAPTER_DISPLAY **v9; // rcx
  ADAPTER_RENDER *v10; // rcx
  void (__fastcall *v11)(_QWORD); // rax
  void (__fastcall *v12)(_QWORD); // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // [rsp+C0h] [rbp-58h]
  int v18; // [rsp+D8h] [rbp-40h]
  _BYTE v19[16]; // [rsp+100h] [rbp-18h] BYREF

  v4 = *((_DWORD *)this + 71);
  v6 = *((_DWORD *)this + 230);
  *((_BYTE *)this + 169) = 1;
  if ( (v4 & 0x10) != 0 && !*((_QWORD *)this + 248) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v19);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v7) + 89) == this )
    {
      *((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 89) = 0LL;
      DXGADAPTER::ReleaseReference(this);
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  v9 = (ADAPTER_DISPLAY **)*((_QWORD *)this + 248);
  if ( v9 )
    ADAPTER_DISPLAY::Destroy(v9, a2, a3, a4);
  v10 = (ADAPTER_RENDER *)*((_QWORD *)this + 249);
  if ( v10 )
    ADAPTER_RENDER::Destroy(v10);
  v11 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 138);
  if ( v11 )
  {
    v11(*((_QWORD *)this + 136));
    memset((char *)this + 1080, 0, 0xB8uLL);
  }
  v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 162);
  if ( v12 )
  {
    v12(*((_QWORD *)this + 160));
    memset((char *)this + 1272, 0, 0x30uLL);
  }
  DpiFreeAdapterInfo((char *)this + 880);
  memset((char *)this + 224, 0, 0x290uLL);
  memset((char *)this + 880, 0, 0xC8uLL);
  v13 = *((_DWORD *)this + 46);
  if ( v13 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), v13);
    *((_DWORD *)this + 46) = -1;
  }
  v14 = *((_QWORD *)this + 22);
  if ( v14 )
  {
    DpiReportAdapter(v14, (__int64)this);
    if ( bTracingEnabled )
    {
      v15 = *((_DWORD *)this + 343);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        v16 = (unsigned int)v15 >> 14;
        LOBYTE(v16) = v16 & 7;
        Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
          v16,
          &EventDestroyAdapter,
          v15 < 0,
          *((_QWORD *)this + 22),
          (char)this,
          v6,
          *((_QWORD *)this + 165),
          *((_DWORD *)this + 332),
          *((_QWORD *)this + 167),
          *((_DWORD *)this + 336),
          *((_DWORD *)this + 337),
          *((_DWORD *)this + 339),
          *((_DWORD *)this + 340),
          *((_DWORD *)this + 341),
          *((_DWORD *)this + 344),
          *((_DWORD *)this + 338),
          *((_DWORD *)this + 342),
          v15,
          ((unsigned int)v15 >> 10) & 0xF,
          v16,
          ((unsigned int)v15 >> 17) & 7,
          v15 < 0,
          *((_DWORD *)this + 345),
          *((_DWORD *)this + 346),
          v17,
          *((_DWORD *)this + 348),
          *((_DWORD *)this + 349),
          v18,
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
