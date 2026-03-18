/*
 * XREFs of VidMmTerminateProcessX @ 0x1C008A878
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VidMmTerminateProcessX(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rcx
  char v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v6 = 104LL;
  do
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + v6) )
    {
      v7 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + v6);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
      v10 = *(_QWORD *)(a1 + 72);
      if ( v10 )
        v10 = *(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)v7 - 1));
      if ( v10 )
      {
        (*(void (**)(void))(*(_QWORD *)(v7 + 8) + 344LL))();
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * (unsigned int)(*(_DWORD *)v7 - 1)) = 0LL;
      }
      DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11);
    }
    ++v4;
    v6 += 8LL;
  }
  while ( v4 < 2 );
}
