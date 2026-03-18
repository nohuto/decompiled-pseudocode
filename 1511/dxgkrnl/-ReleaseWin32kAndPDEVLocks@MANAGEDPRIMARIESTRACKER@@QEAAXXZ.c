/*
 * XREFs of ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B047C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B04D8 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks(MANAGEDPRIMARIESTRACKER *this)
{
  struct DXGGLOBAL *Global; // rax

  if ( (*((_DWORD *)this + 4) & 1) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    *((_QWORD *)Global + 131) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Global + 1040, 0LL);
    KeLeaveCriticalRegion();
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 200LL))(
      *(_QWORD *)(*(_QWORD *)this + 16LL),
      *((_DWORD *)this + 4) >> 2);
    *((_DWORD *)this + 4) &= ~1u;
  }
}
