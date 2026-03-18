/*
 * XREFs of ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C00044A4
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C006B51C (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct VIDMM_DEVICE *__fastcall VIDMM_EXPORT::VidMmCreateDevice(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGDEVICE *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rbx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9, Current);
  v7 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct DXGDEVICE *))(*((_QWORD *)this + 1) + 368LL))(a2, a3);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9);
  return (struct VIDMM_DEVICE *)v7;
}
