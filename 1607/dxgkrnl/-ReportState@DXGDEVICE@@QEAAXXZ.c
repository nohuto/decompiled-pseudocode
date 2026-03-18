/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C015EB74
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C014936C (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C0021C74 (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     Template_ppqpttq @ 0x1C00224CC (Template_ppqpttq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C01568E8 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C015E9FC (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C015EA8C (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this)
{
  DXGCONTEXT *i; // rbx
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  struct DXGALLOCATION *j; // rbx
  _BYTE v6[32]; // [rsp+50h] [rbp-28h] BYREF
  char v7; // [rsp+80h] [rbp+8h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    Template_ppqpttq(
      (__int64)this,
      &EventReportDevice,
      *((unsigned __int8 *)this + 2869),
      *(_QWORD *)(*((_QWORD *)this + 5) + 56LL),
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
      *((_DWORD *)this + 76),
      this,
      *((unsigned __int8 *)this + 2869),
      *((unsigned __int8 *)this + 2870),
      *((_DWORD *)this + 77));
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 39); i != (DXGDEVICE *)((char *)this + 312) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i);
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7, Current);
  (*(void (__fastcall **)(DXGDEVICE *))(*(_QWORD *)(v3 + 8) + 56LL))(this);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7);
  if ( *((_QWORD *)this + 71) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 376LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, (struct _KTHREAD **)this + 17);
  for ( j = (struct DXGALLOCATION *)*((_QWORD *)this + 6); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    DXGDEVICE::ReportAllocationState(this, j, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 576));
  VIDMM_EXPORT::VidMmReportContextAllocList(
    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
    this,
    (struct _LIST_ENTRY *)((char *)this + 600));
  *((_QWORD *)this + 73) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 576, 0LL);
  KeLeaveCriticalRegion();
}
