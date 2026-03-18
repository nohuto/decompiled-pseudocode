/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C0124910
 * Callers:
 *     DxgkPresent @ 0x1C00B2160 (DxgkPresent.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0124880 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(DXGADAPTER **this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((DXGSTABLEVISRGNANDSPRITE *)(this + 4));
}
