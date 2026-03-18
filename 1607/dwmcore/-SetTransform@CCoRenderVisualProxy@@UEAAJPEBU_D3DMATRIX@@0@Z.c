/*
 * XREFs of ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180126020
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMatrixTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x180021524 (--0CMatrixTransform3D@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x180050728 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005BB18 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetTransform(
        CCoRenderVisualProxy *this,
        const struct _D3DMATRIX *a2,
        const struct _D3DMATRIX *a3)
{
  unsigned int v3; // edi
  CMatrixTransform3D *v7; // rax
  CBitmapOfDeviceBitmaps *v8; // rbx
  int v9; // eax
  __int128 v10; // xmm0
  __int64 v11; // rbx
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  struct _D3DMATRIX *D3DMatrix; // rax
  _QWORD v22[9]; // [rsp+30h] [rbp-D8h] BYREF
  int v23; // [rsp+78h] [rbp-90h]
  _OWORD v24[4]; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+C8h] [rbp-40h]
  struct _D3DMATRIX v26; // [rsp+D8h] [rbp-30h] BYREF
  int v27; // [rsp+118h] [rbp+10h]

  v3 = 0;
  if ( !*(_QWORD *)(*((_QWORD *)this + 3) + 288LL) )
  {
    v7 = (CMatrixTransform3D *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 280LL);
    if ( v7 )
      v8 = CMatrixTransform3D::CMatrixTransform3D(v7, *(struct CComposition **)(*((_QWORD *)this + 3) + 16LL));
    else
      v8 = 0LL;
    if ( !v8 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1B4u);
      return v3;
    }
    CBitmapOfDeviceBitmaps::AddRef(v8);
    v9 = CVisual::SetTransform(*((struct CResource ***)this + 3), v8);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1B5u);
      CMILCOMBase::InternalRelease(v8);
      return v3;
    }
    CMILCOMBase::InternalRelease(v8);
  }
  v10 = *(_OWORD *)&a2->_11;
  v11 = *(_QWORD *)(*((_QWORD *)this + 3) + 288LL);
  if ( a3 )
  {
    v13 = *(_OWORD *)&a2->_21;
    v27 = 0;
    v25 = 0;
    v23 = 0;
    v24[1] = v13;
    v14 = *(_OWORD *)&a2->_41;
    v24[0] = v10;
    v15 = *(_OWORD *)&a2->_31;
    v24[3] = v14;
    v16 = *(_OWORD *)&a3->_21;
    v24[2] = v15;
    v17 = *(_OWORD *)&a3->_11;
    *(_OWORD *)&v22[3] = v16;
    v18 = *(_OWORD *)&a3->_41;
    *(_OWORD *)&v22[1] = v17;
    v19 = *(_OWORD *)&a3->_31;
    *(_OWORD *)&v22[7] = v18;
    *(_OWORD *)&v22[5] = v19;
    CMILMatrix::Multiply((const struct CMILMatrix *)v24, (const struct CMILMatrix *)&v22[1], (struct CMILMatrix *)&v26);
    D3DMatrix = CMILMatrix::GetD3DMatrix(&v26, (struct _D3DMATRIX *)&v22[1]);
    *(_OWORD *)(v11 + 216) = *(_OWORD *)&D3DMatrix->_11;
    *(_OWORD *)(v11 + 232) = *(_OWORD *)&D3DMatrix->_21;
    *(_OWORD *)(v11 + 248) = *(_OWORD *)&D3DMatrix->_31;
    v12 = *(_OWORD *)&D3DMatrix->_41;
  }
  else
  {
    *(_OWORD *)(v11 + 216) = v10;
    *(_OWORD *)(v11 + 232) = *(_OWORD *)&a2->_21;
    *(_OWORD *)(v11 + 248) = *(_OWORD *)&a2->_31;
    v12 = *(_OWORD *)&a2->_41;
  }
  *(_OWORD *)(v11 + 264) = v12;
  CResource::NotifyOnChanged((_DWORD *)v11, 0, 0LL);
  return v3;
}
