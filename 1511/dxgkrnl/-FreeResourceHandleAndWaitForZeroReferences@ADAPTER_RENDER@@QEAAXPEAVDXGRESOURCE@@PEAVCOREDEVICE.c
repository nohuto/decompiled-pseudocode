/*
 * XREFs of ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0068868
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGRESOURCE@@PEAE@Z @ 0x1C0073410 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074234 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074AD0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0132ED0 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0065A50 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
        ADAPTER_RENDER *this,
        struct DXGRESOURCE *a2,
        struct COREDEVICEACCESS *a3)
{
  struct DXGPROCESS *Current; // rbx
  char v6; // bl

  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 216), *((_DWORD *)a2 + 4));
  DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)a2);
  *((_QWORD *)Current + 25) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
  KeLeaveCriticalRegion();
  v6 = 0;
  if ( a3 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a3 + 2)) )
  {
    v6 = 1;
    if ( *((_BYTE *)a3 + 64) )
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 32));
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a3 + 8));
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 9);
  if ( v6 )
  {
    COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a3 + 8));
    if ( *((_BYTE *)a3 + 64) )
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a3 + 32));
  }
}
