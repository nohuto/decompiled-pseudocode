/*
 * XREFs of ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0091FB0
 * Callers:
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0080050 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00808F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C012C9AC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C012D0CC (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0094840 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct _EX_RUNDOWN_REF *a2,
        struct COREDEVICEACCESS *a3)
{
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bl

  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 216), LODWORD(a2[2].Count), v6, v7);
  DxgkUnreferenceDxgResource((struct DXGRESOURCE *)a2);
  *((_QWORD *)Current + 25) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
  KeLeaveCriticalRegion();
  v8 = 0;
  if ( a3 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a3 + 2)) )
  {
    v8 = 1;
    if ( *((_BYTE *)a3 + 64) )
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 32));
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 8));
  }
  ExWaitForRundownProtectionRelease(a2 + 9);
  if ( v8 )
  {
    COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a3 + 8));
    if ( *((_BYTE *)a3 + 64) )
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a3 + 32));
  }
}
