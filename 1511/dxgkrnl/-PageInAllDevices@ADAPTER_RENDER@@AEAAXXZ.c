/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00CC22C
 * Callers:
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z @ 0x1C00CC2E0 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAX_N@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C012F070 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this + 104;
  v3 = 2LL;
  do
  {
    for ( i = *(char **)v2; i != v2 && i; i = *(char **)i )
    {
      v5 = *((_QWORD *)i + 67);
      v6 = *((_QWORD *)this + 54);
      v7 = *((_QWORD *)this + 53);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
      LODWORD(v7) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 8) + 848LL))(v6, v5);
      DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11);
      if ( (int)v7 < 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v10 + 24) = 22150LL;
        WdLogEvent5_WdAssertion(v10);
      }
    }
    v2 = (char *)this + 120;
    --v3;
  }
  while ( v3 );
}
