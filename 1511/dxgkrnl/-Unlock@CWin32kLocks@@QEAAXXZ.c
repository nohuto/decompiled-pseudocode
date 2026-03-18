/*
 * XREFs of ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0124880
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C00C8DC0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0124910 (--1CWin32kLocks@@QEAA@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C00C90E4 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::Unlock(DXGADAPTER **this)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[7]) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 743LL;
    WdLogEvent5_WdAssertion(v3);
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
