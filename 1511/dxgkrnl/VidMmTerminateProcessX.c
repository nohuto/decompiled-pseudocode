/*
 * XREFs of VidMmTerminateProcessX @ 0x1C008D824
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1) + v3) )
    {
      v4 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1) + v3);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7, Current);
      v6 = *(_QWORD *)(a1 + 72);
      if ( v6 )
        v6 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)v4 - 1));
      if ( v6 )
      {
        (*(void (**)(void))(*(_QWORD *)(v4 + 8) + 344LL))();
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * (unsigned int)(*(_DWORD *)v4 - 1)) = 0LL;
      }
      DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v7);
    }
    ++v1;
    v3 += 8LL;
  }
  while ( v1 < 2 );
}
