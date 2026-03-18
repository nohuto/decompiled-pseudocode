/*
 * XREFs of ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C012FA54
 * Callers:
 *     DxgkSuspendMemorySegments @ 0x1C0132AE0 (DxgkSuspendMemorySegments.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendMemorySegments(ADAPTER_RENDER *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  int v5; // ebx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  ADAPTER_RENDER::FlushScheduler((__int64)this, 6, 0xFFFFFFFF, 1);
  v2 = *((_QWORD *)this + 54);
  v3 = *((_QWORD *)this + 53);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7, Current);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 96LL))(v2);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7);
  if ( v5 < 0 )
    ADAPTER_RENDER::FlushScheduler((__int64)this, 7, 0xFFFFFFFF, 1);
  return (unsigned int)v5;
}
