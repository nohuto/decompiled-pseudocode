/*
 * XREFs of ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0023224
 * Callers:
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0023264 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00235CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C002FFC0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00D4B90 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C54 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

bool __fastcall DirectComposition::CConnection::IsConnected(struct _ERESOURCE **this)
{
  bool v2; // bl

  DirectComposition::CCriticalSection::AcquireShared(this[1]);
  v2 = *((_DWORD *)this + 37) != 0;
  ExReleaseResourceLite(this[1]);
  KeLeaveCriticalRegion();
  return v2;
}
