/*
 * XREFs of ?VidMmAsyncUnpinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C0022390
 * Callers:
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015F104 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmAsyncUnpinAllocation(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGALLOCATION *a3)
{
  struct _KTHREAD **Current; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8, Current);
  LODWORD(this) = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct DXGALLOCATION *))(*((_QWORD *)this + 1)
                                                                                           + 240LL))(
                    a2,
                    a3);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8);
  return (unsigned int)this;
}
