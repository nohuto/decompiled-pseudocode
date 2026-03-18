/*
 * XREFs of ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C001CA48
 * Callers:
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C0132E3C (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0136C7C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmReportContextAllocList(
        VIDMM_EXPORT *this,
        struct DXGDEVICE *a2,
        struct _LIST_ENTRY *a3)
{
  struct _KTHREAD **Current; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7, Current);
  (*(void (__fastcall **)(struct DXGDEVICE *, struct _LIST_ENTRY *))(*((_QWORD *)this + 1) + 696LL))(a2, a3);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7);
}
