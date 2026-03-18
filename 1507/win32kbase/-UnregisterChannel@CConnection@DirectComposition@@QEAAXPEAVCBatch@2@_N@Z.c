/*
 * XREFs of ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0023264
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C002FE20 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C54 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1C0022BF4 (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0023224 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C006B748 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 */

void __fastcall DirectComposition::CConnection::UnregisterChannel(
        DirectComposition::CConnection *this,
        struct DirectComposition::CBatch *a2,
        char a3)
{
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)this);
  DirectComposition::CCriticalSection::AcquireShared(*((struct _ERESOURCE **)this + 1));
  *((_DWORD *)a2 + 5) = 6;
  if ( DirectComposition::CConnection::IsConnected((struct _ERESOURCE **)this) )
    DirectComposition::CConnection::PostBatch(this, (struct _SLIST_ENTRY *)a2, a2);
  else
    DirectComposition::CBatch::ReturnToApplication(a2, 1);
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  if ( a3 )
    DirectComposition::CConnection::Release(this);
}
