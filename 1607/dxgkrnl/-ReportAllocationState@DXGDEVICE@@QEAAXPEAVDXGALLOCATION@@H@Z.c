/*
 * XREFs of ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C015E9FC
 * Callers:
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C015EA8C (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C015EB74 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportMultiGlobalAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGADAPTERALLOCATION@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C0022460 (-VidMmReportMultiGlobalAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGADAPTERALLOCATION@@PEAVDXG.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::ReportAllocationState(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  struct DXGSHAREDRESOURCE *v3; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  struct _KTHREAD **Current; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( a3 )
  {
    v6 = *((_QWORD *)a2 + 5);
    if ( v6 )
      v3 = *(struct DXGSHAREDRESOURCE **)(v6 + 56);
    VIDMM_EXPORT::VidMmReportMultiGlobalAlloc(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
      this,
      *((struct DXGADAPTERALLOCATION **)a2 + 6),
      v3);
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9, Current);
  (*(void (__fastcall **)(DXGDEVICE *, struct DXGALLOCATION *))(*(_QWORD *)(v7 + 8) + 592LL))(this, a2);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9);
}
