/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0149174
 * Callers:
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01496A0 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v9; // rax
  char v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this + 104;
  v3 = 2LL;
  do
  {
    for ( i = *(char **)v2; i != v2 && i; i = *(char **)i )
    {
      v5 = *((_QWORD *)i + 70);
      v6 = *((_QWORD *)this + 51);
      v7 = *((_QWORD *)this + 50);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
      LODWORD(v7) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 8) + 864LL))(v6, v5);
      DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10);
      if ( (int)v7 < 0 )
      {
        v9 = WdLogNewEntry5_WdAssertion(this);
        *(_QWORD *)(v9 + 24) = 2560LL;
        WdLogEvent5_WdAssertion(v9);
      }
    }
    v2 = (char *)this + 120;
    --v3;
  }
  while ( v3 );
}
