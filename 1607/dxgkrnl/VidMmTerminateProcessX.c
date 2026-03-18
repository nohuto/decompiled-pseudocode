/*
 * XREFs of VidMmTerminateProcessX @ 0x1C0090344
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall VidMmTerminateProcessX(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 104LL;
  do
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + v3) )
    {
      v4 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + v3);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7, Current);
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
        v6 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)v4 - 1));
      if ( v6 )
      {
        (*(void (**)(void))(*(_QWORD *)(v4 + 8) + 360LL))();
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * (unsigned int)(*(_DWORD *)v4 - 1)) = 0LL;
      }
      DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7);
    }
    ++v1;
    v3 += 8LL;
  }
  while ( v1 < 2 );
}
