/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C011ED98
 * Callers:
 *     DxgkPresent @ 0x1C0069D10 (DxgkPresent.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C011ED08 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(DXGADAPTER **this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)(this + 4));
}
