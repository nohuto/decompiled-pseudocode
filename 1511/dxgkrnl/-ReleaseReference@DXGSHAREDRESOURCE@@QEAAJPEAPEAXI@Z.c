/*
 * XREFs of ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00017FC
 * Callers:
 *     sub_1C0061864 @ 0x1C0061864 (sub_1C0061864.c)
 *     sub_1C0061964 @ 0x1C0061964 (sub_1C0061964.c)
 *     DxgkShareObjects @ 0x1C00621B0 (DxgkShareObjects.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C006BD20 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGRESOURCE@@PEAE@Z @ 0x1C0073410 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00BF0D0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0132F4C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0065BE4 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 */

__int64 __fastcall DXGSHAREDRESOURCE::ReleaseReference(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  unsigned __int32 v3; // ebx

  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 15);
  if ( !v3 )
    DXGSHAREDRESOURCE::Destroy(this, a2, a3);
  return v3;
}
