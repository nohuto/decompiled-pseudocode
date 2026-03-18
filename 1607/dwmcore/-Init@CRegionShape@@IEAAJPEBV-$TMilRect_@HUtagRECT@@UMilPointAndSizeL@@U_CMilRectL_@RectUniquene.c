/*
 * XREFs of ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18002BEBC
 * Callers:
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180020CD8 (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18002C248 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x18018A3A0 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x1800AACC4 (-CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::Init(__int64 a1, const struct tagRECT *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rsi
  CD3DDeviceManager *v6; // rcx
  int D2DFactoryNoRef; // eax
  int v9; // eax
  struct ID2D1Geometry *v10; // rdi
  int v11; // eax
  CD2DFactory *v13; // [rsp+50h] [rbp+8h] BYREF
  struct ID2D1Geometry *v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (_QWORD *)(a1 + 8);
  v14 = 0LL;
  v6 = *(CD3DDeviceManager **)(a1 + 8);
  if ( v6 )
  {
    (*(void (__fastcall **)(CD3DDeviceManager *))(*(_QWORD *)v6 + 16LL))(v6);
    *v4 = 0LL;
  }
  if ( a3 )
  {
    v13 = 0LL;
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v6, &v13);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x141u);
    }
    else
    {
      v9 = CD2DFactory::CreateRegionGeometry(v13, a2, a3, &v14);
      v10 = v14;
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x145u);
      }
      else
      {
        v11 = (**(__int64 (__fastcall ***)(struct ID2D1Geometry *, GUID *, _QWORD *))v14)(
                v14,
                &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
                v4);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x14Bu);
      }
      if ( v10 )
        (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return v3;
}
