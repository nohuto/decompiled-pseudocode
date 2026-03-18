/*
 * XREFs of ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C013B22C
 * Callers:
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C013B2BC (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C013B35C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportMultiGlobalAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGADAPTERALLOCATION@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C001D490 (-VidMmReportMultiGlobalAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGADAPTERALLOCATION@@PEAVDXG.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
      this,
      *((struct DXGADAPTERALLOCATION **)a2 + 6),
      v3);
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9, Current);
  (*(void (__fastcall **)(DXGDEVICE *, struct DXGALLOCATION *))(*(_QWORD *)(v7 + 8) + 576LL))(this, a2);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9);
}
