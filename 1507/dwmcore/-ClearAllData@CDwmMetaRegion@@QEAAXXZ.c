/*
 * XREFs of ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18005D808
 * Callers:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18000E18C (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18007D060 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x18007D784 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801053D8 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmMetaRegion::ClearAllData(CDwmMetaRegion *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    DeleteObject(v2);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    DeleteObject(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_BYTE *)this + 40) = 0;
}
