/*
 * XREFs of ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C008F838
 * Callers:
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0006F28 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C009D6E0 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 * Callees:
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C008F974 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::Destroy(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  DXGSHAREDRESOURCE::DestroyCoreAllocations(this, a2, a3);
  (**(void (__fastcall ***)(DXGSHAREDRESOURCE *, __int64))this)(this, 1LL);
}
