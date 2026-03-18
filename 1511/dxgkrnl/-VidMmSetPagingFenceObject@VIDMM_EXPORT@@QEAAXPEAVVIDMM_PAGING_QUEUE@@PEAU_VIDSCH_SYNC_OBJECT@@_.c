/*
 * XREFs of ?VidMmSetPagingFenceObject@VIDMM_EXPORT@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C0004320
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C008BBBC (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmSetPagingFenceObject(
        VIDMM_EXPORT *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDSCH_SYNC_OBJECT *a3,
        __int64 a4)
{
  struct DXGPROCESS *Current; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9, Current);
  (*(void (__fastcall **)(struct VIDMM_PAGING_QUEUE *, struct _VIDSCH_SYNC_OBJECT *, __int64))(*((_QWORD *)this + 1)
                                                                                             + 864LL))(
    a2,
    a3,
    a4);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9);
}
