/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00BD6D4
 * Callers:
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z @ 0x1C00BD788 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0128AB8 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall ADAPTER_RENDER::PageInAllDevices(ADAPTER_RENDER *this)
{
  char *v2; // r15
  __int64 v3; // r12
  char *i; // r14
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this + 104;
  v3 = 2LL;
  do
  {
    for ( i = *(char **)v2; i != v2 && i; i = *(char **)i )
    {
      v5 = *((_QWORD *)i + 67);
      v6 = *((_QWORD *)this + 51);
      v7 = *((_QWORD *)this + 50);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13, Current);
      LODWORD(v7) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 8) + 848LL))(v6, v5);
      DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13);
      if ( (int)v7 < 0 )
      {
        v12 = WdLogNewEntry5_WdAssertion(this, v9, v10, v11);
        *(_QWORD *)(v12 + 24) = 21644LL;
        WdLogEvent5_WdAssertion(v12);
      }
    }
    v2 = (char *)this + 120;
    --v3;
  }
  while ( v3 );
}
