/*
 * XREFs of ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C00137D0
 * Callers:
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00139BC (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C001D1C0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00D68C0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F18 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

bool __fastcall DirectComposition::CConnection::IsConnected(DirectComposition::CCriticalSection **this)
{
  bool v2; // bl

  DirectComposition::CCriticalSection::AcquireShared(this[1]);
  v2 = *((_DWORD *)this + 37) != 0;
  ExReleaseResourceLite((PERESOURCE)this[1]);
  KeLeaveCriticalRegion();
  return v2;
}
