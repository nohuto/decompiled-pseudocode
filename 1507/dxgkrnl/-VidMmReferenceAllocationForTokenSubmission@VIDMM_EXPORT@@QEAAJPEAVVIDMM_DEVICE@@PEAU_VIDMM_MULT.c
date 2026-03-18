/*
 * XREFs of ?VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C001F058
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0071C20 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmReferenceAllocationForTokenSubmission(
        VIDMM_EXPORT *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  struct _KTHREAD **Current; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
  LODWORD(this) = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *, struct _VIDMM_MULTI_ALLOC *, struct VIDMM_ALLOC **))(*((_QWORD *)this + 1) + 400LL))(
                    a2,
                    a3,
                    a4);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10);
  return (unsigned int)this;
}
