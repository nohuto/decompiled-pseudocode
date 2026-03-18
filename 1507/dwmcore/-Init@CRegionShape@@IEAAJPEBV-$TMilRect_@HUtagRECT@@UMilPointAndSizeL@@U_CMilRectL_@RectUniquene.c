/*
 * XREFs of ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180078790
 * Callers:
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x18000D020 (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180078740 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x18014AAD0 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x18005D5B0 (-CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRegionShape::Init(_QWORD *a1, const struct tagRECT *a2, unsigned int a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // r14
  __int64 v6; // rsi
  int D2DFactoryNoRef; // eax
  int v9; // eax
  struct ID2D1Geometry *v10; // rsi
  int v11; // eax
  struct CD2DFactory *v13; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1Geometry *v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a1 + 1;
  v14 = 0LL;
  v6 = a1[1];
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(a1[1]);
    *v4 = 0LL;
  }
  if ( a3 )
  {
    v13 = 0LL;
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)a1, &v13);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x14Au);
    }
    else
    {
      v9 = CD2DFactory::CreateRegionGeometry(v13, a2, a3, &v14);
      v10 = v14;
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x150u);
      }
      else
      {
        v11 = (**(__int64 (__fastcall ***)(struct ID2D1Geometry *, GUID *, _QWORD *))v14)(
                v14,
                &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
                v4);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x158u);
      }
      if ( v10 )
        (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return v3;
}
