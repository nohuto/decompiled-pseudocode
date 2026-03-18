/*
 * XREFs of ?VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0011558
 * Callers:
 *     DxgkLock2 @ 0x1C009EBF0 (DxgkLock2.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmLock(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        __int64 a4,
        void **a5)
{
  struct _KTHREAD **Current; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
  LODWORD(this) = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct _VIDMM_MULTI_ALLOC *, _QWORD, void **))(*((_QWORD *)this + 1) + 808LL))(
                    a2,
                    a3,
                    0LL,
                    a5);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10);
  return (unsigned int)this;
}
