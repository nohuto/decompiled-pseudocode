/*
 * XREFs of ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C011ED08
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C00B3900 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C011ED98 (--1CWin32kLocks@@QEAA@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C011EF00 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::Unlock(DXGADAPTER **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax

  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[7]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = 753LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( this[2] )
  {
    (*((void (**)(void))this[3] + 3))();
    this[2] = 0LL;
  }
  if ( *this )
  {
    DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)(this + 4));
    (*((void (__fastcall **)(DXGADAPTER *, _QWORD))this[3] + 37))(*this, 0LL);
    (*((void (__fastcall **)(DXGADAPTER *, DXGADAPTER *))this[3] + 8))(*this, this[1]);
    *this = 0LL;
  }
}
