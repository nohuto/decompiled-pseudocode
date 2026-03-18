/*
 * XREFs of ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0073E68
 * Callers:
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0073EC4 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks(MANAGEDPRIMARIESTRACKER *this)
{
  struct DXGGLOBAL *Global; // rax

  if ( (*((_DWORD *)this + 4) & 1) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    *((_QWORD *)Global + 108) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Global + 856, 0LL);
    KeLeaveCriticalRegion();
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 200LL))(
      *(_QWORD *)(*(_QWORD *)this + 16LL),
      *((_DWORD *)this + 4) >> 2);
    *((_DWORD *)this + 4) &= ~1u;
  }
}
