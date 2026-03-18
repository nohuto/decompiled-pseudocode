/*
 * XREFs of ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x180064A40
 * Callers:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18001B594 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800637B0 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x180063E6C (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180123A8C (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
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
