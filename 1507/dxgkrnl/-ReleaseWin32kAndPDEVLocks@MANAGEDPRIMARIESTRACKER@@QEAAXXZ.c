/*
 * XREFs of ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B51B4
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B5210 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks(
        MANAGEDPRIMARIESTRACKER *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGGLOBAL *Global; // rax

  if ( (*((_DWORD *)this + 4) & 1) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
    *((_QWORD *)Global + 110) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Global + 872, 0LL);
    KeLeaveCriticalRegion();
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 200LL))(
      *(_QWORD *)(*(_QWORD *)this + 16LL),
      *((_DWORD *)this + 4) >> 2);
    *((_DWORD *)this + 4) &= ~1u;
  }
}
