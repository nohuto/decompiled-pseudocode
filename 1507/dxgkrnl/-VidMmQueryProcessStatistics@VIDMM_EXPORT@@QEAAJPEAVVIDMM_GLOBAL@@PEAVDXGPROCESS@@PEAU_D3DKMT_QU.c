/*
 * XREFs of ?VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C001B27C
 * Callers:
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C0127860 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmQueryProcessStatistics(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGPROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *a4)
{
  struct _KTHREAD **Current; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ebx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13, Current);
  v9 = *((_QWORD *)a3 + 9);
  v10 = 0LL;
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)this - 1));
  v11 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *))(*((_QWORD *)this + 1) + 288LL))(
          a2,
          v10,
          a4);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13);
  return v11;
}
