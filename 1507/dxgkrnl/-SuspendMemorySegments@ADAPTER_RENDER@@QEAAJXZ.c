/*
 * XREFs of ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01293BC
 * Callers:
 *     DxgkSuspendMemorySegments @ 0x1C012C590 (DxgkSuspendMemorySegments.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendMemorySegments(ADAPTER_RENDER *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rax
  int v6; // ebx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  ADAPTER_RENDER::FlushScheduler((__int64)this, 6, 0xFFFFFFFF, 1);
  v2 = *((_QWORD *)this + 51);
  v3 = *((_QWORD *)this + 50);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8, Current);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 96LL))(v2);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8);
  if ( v6 < 0 )
    ADAPTER_RENDER::FlushScheduler((__int64)this, 7, 0xFFFFFFFF, 1);
  return (unsigned int)v6;
}
