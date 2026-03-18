/*
 * XREFs of ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEA_K11@Z @ 0x1C00100AC
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C008BD90 (DxgkQueryAdapterInfo.c)
 *     ?RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C00D5BBC (-RenderTelemetry@ADAPTER_RENDER@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_.c)
 *     ?SqmRenderInformation@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00D5CE8 (-SqmRenderInformation@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  struct _KTHREAD **Current; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
  (*(void (__fastcall **)(struct VIDMM_GLOBAL *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(*((_QWORD *)this + 1) + 72LL))(
    a2,
    a3,
    a4,
    a5);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10);
}
