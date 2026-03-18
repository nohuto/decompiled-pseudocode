/*
 * XREFs of ?ReleaseLocksForStop@DXGADAPTER@@QEAAXXZ @ 0x1C00BD51C
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078A80 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ReleaseLocksForStop(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 248) )
  {
    *((_QWORD *)this + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
    KeLeaveCriticalRegion();
  }
}
