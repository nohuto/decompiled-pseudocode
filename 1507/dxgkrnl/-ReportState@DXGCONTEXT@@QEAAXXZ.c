/*
 * XREFs of ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C0132E3C
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0136C7C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C001CA48 (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     Template_pqqqqqqqqppp @ 0x1C001CAA4 (Template_pqqqqqqqqppp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this)
{
  DXGCONTEXT *v1; // rdi
  __int128 v2; // xmm0
  __int64 v3; // r9
  __int128 v4; // xmm1
  __int64 v5; // rsi
  __int64 v6; // rbx
  struct _KTHREAD **Current; // rax
  char v8; // [rsp+B0h] [rbp+8h] BYREF

  v1 = this;
  if ( bTracingEnabled )
  {
    v2 = *((_OWORD *)this + 11);
    v3 = *((_QWORD *)this + 2);
    v4 = *((_OWORD *)this + 12);
    this = (DXGCONTEXT *)*((unsigned int *)this + 6);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_pqqqqqqqqppp(
        DWORD1(v2),
        &EventReportContext,
        v2,
        v3,
        *((_DWORD *)v1 + 80),
        *((_DWORD *)v1 + 81),
        (_DWORD)v2,
        DWORD1(v2),
        DWORD2(v2),
        HIDWORD(v2),
        (_DWORD)v4,
        0,
        v1,
        (unsigned int)this,
        0LL);
  }
  v5 = *((_QWORD *)v1 + 26);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL) + 400LL);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8, Current);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 440LL))(v5);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8);
  }
  if ( *((_QWORD *)v1 + 27) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL) + 376LL) + 8LL) + 232LL))();
  DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)v1 + 240));
  VIDMM_EXPORT::VidMmReportContextAllocList(
    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL) + 400LL),
    *((struct DXGDEVICE **)v1 + 2),
    (struct _LIST_ENTRY *)((char *)v1 + 264));
  *((_QWORD *)v1 + 31) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 240, 0LL);
  KeLeaveCriticalRegion();
}
