/*
 * XREFs of ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x1800F5ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x180034C90 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetTransform(
        CCoRenderVisualProxy *this,
        const struct _D3DMATRIX *a2,
        const struct _D3DMATRIX *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rax
  CBitmapOfDeviceBitmaps *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD v20[4]; // [rsp+30h] [rbp-59h] BYREF
  _OWORD v21[4]; // [rsp+70h] [rbp-19h] BYREF

  v3 = 0;
  if ( !*(_QWORD *)(*((_QWORD *)this + 3) + 352LL) )
  {
    v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           168LL);
    v8 = (CBitmapOfDeviceBitmaps *)v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
      *(_DWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = v9;
      *(_QWORD *)(v7 + 24) = 0LL;
      *(_DWORD *)(v7 + 32) = 0;
      *(_DWORD *)(v7 + 32) |= 1u;
      *(_QWORD *)v7 = &CMatrixTransform3D::`vftable';
      *(_DWORD *)(v7 + 104) = 1065353216;
      *(_DWORD *)(v7 + 124) = 1065353216;
      *(_DWORD *)(v7 + 144) = 1065353216;
      *(_DWORD *)(v7 + 164) = 1065353216;
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1B4u);
      return v3;
    }
    CBitmapOfDeviceBitmaps::AddRef(v8);
    v10 = CVisual::SetTransform(*((struct CResource ***)this + 3), v8);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1B5u);
      CMILCOMBase::InternalRelease(v8);
      return v3;
    }
    CMILCOMBase::InternalRelease(v8);
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
  if ( a3 )
  {
    v12 = *(_OWORD *)&a3->_21;
    v20[0] = *(_OWORD *)&a3->_11;
    v13 = *(_OWORD *)&a3->_31;
    v20[1] = v12;
    v14 = *(_OWORD *)&a3->_41;
    v20[2] = v13;
    v15 = *(_OWORD *)&a2->_11;
    v20[3] = v14;
    v16 = *(_OWORD *)&a2->_21;
    v21[0] = v15;
    v17 = *(_OWORD *)&a2->_31;
    v21[1] = v16;
    v18 = *(_OWORD *)&a2->_41;
    v21[2] = v17;
    v21[3] = v18;
    D2DMatrixMultiply((struct D2DMatrix *)(v11 + 104), (const struct D2DMatrix *)v21, (const struct D2DMatrix *)v20);
  }
  else
  {
    *(_OWORD *)(v11 + 104) = *(_OWORD *)&a2->_11;
    *(_OWORD *)(v11 + 120) = *(_OWORD *)&a2->_21;
    *(_OWORD *)(v11 + 136) = *(_OWORD *)&a2->_31;
    *(_OWORD *)(v11 + 152) = *(_OWORD *)&a2->_41;
  }
  CResource::NotifyOnChanged((_DWORD *)v11, 0, 0LL);
  return v3;
}
