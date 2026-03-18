/*
 * XREFs of ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C01370DC
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C013B35C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C001CD5C (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     Template_pqqqqqqqqppp @ 0x1C001CDB8 (Template_pqqqqqqqqppp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this)
{
  __int128 v2; // xmm0
  __int64 v3; // r9
  __int128 v4; // xmm1
  unsigned int v5; // ecx
  __int64 v6; // rsi
  __int64 v7; // rbx
  struct _KTHREAD **Current; // rax
  char v9; // [rsp+B0h] [rbp+8h] BYREF

  if ( bTracingEnabled )
  {
    v2 = *((_OWORD *)this + 11);
    v3 = *((_QWORD *)this + 2);
    v4 = *((_OWORD *)this + 12);
    v5 = *((_DWORD *)this + 6);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_pqqqqqqqqppp(
        DWORD1(v2),
        &EventReportContext,
        v2,
        v3,
        *((_DWORD *)this + 80),
        *((_DWORD *)this + 81),
        (_DWORD)v2,
        DWORD1(v2),
        DWORD2(v2),
        HIDWORD(v2),
        (_DWORD)v4,
        0,
        this,
        v5,
        0LL);
  }
  v6 = *((_QWORD *)this + 26);
  if ( v6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9, Current);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 440LL))(v6);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9);
  }
  if ( *((_QWORD *)this + 27) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 232LL))();
  DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)this + 240));
  VIDMM_EXPORT::VidMmReportContextAllocList(
    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL),
    *((struct DXGDEVICE **)this + 2),
    (struct _LIST_ENTRY *)((char *)this + 264));
  *((_QWORD *)this + 31) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 240, 0LL);
  KeLeaveCriticalRegion();
}
