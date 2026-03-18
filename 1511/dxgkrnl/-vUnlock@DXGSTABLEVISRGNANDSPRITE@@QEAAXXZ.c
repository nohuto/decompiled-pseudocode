/*
 * XREFs of ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C00C90E4
 * Callers:
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0124880 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0124910 (--1CWin32kLocks@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSTABLEVISRGNANDSPRITE::vUnlock(DXGSTABLEVISRGNANDSPRITE *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 5) )
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)this + 288LL))(v2, *((_DWORD *)this + 4) == 0);
    (*(void (**)(void))(*(_QWORD *)this + 272LL))();
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
  }
}
