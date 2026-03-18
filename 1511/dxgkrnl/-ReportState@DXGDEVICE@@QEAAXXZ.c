/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C013B35C
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C012E3CC (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C001CD5C (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     Template_ppqptt @ 0x1C001D4FC (Template_ppqptt.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C01370DC (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C013B22C (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C013B2BC (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this)
{
  DXGCONTEXT *i; // rbx
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  struct DXGALLOCATION *j; // rbx
  _BYTE v6[32]; // [rsp+50h] [rbp-28h] BYREF
  char v7; // [rsp+80h] [rbp+8h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    Template_ppqptt(
      (__int64)this,
      &EventReportDevice,
      *((_QWORD *)this + 2),
      *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
      *((_DWORD *)this + 70),
      this,
      *((unsigned __int8 *)this + 2845),
      *((unsigned __int8 *)this + 2846));
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 36); i != (DXGDEVICE *)((char *)this + 288) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i);
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7, Current);
  (*(void (__fastcall **)(DXGDEVICE *))(*(_QWORD *)(v3 + 8) + 56LL))(this);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7);
  if ( *((_QWORD *)this + 68) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, (struct _KTHREAD **)this + 17);
  for ( j = (struct DXGALLOCATION *)*((_QWORD *)this + 6); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    DXGDEVICE::ReportAllocationState(this, j, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 552));
  VIDMM_EXPORT::VidMmReportContextAllocList(
    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
    this,
    (struct _LIST_ENTRY *)this + 36);
  *((_QWORD *)this + 70) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 552, 0LL);
  KeLeaveCriticalRegion();
}
