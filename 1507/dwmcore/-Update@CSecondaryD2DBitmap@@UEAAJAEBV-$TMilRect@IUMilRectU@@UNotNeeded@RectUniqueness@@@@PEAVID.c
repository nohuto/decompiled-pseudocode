/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180151730
 * Callers:
 *     <none>
 * Callees:
 *     MatrixAppendScale2D @ 0x1800139C8 (MatrixAppendScale2D.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x180018F40 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019BBC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ceilf_0 @ 0x180099B5A (ceilf_0.c)
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     Template_qqqq @ 0x1800E1FC0 (Template_qqqq.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x18013ADDC (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180150320 (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1801505F4 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180150BC0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180150EB8 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x180150FC4 (-HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x1801516DC (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryBitmap *this, struct tagRECT *a2, __int64 a3)
{
  __int64 v3; // rax
  CSecondaryD2DBitmap *v4; // r14
  int *v7; // r15
  struct tagRECT *v9; // rdx
  int left; // eax
  float v11; // xmm2_4
  unsigned int v12; // xmm0_4
  unsigned int v13; // xmm1_4
  int right; // eax
  unsigned int v15; // xmm0_4
  int bottom; // eax
  unsigned int v17; // ecx
  unsigned int top; // edx
  unsigned int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  int valid; // eax
  unsigned int v23; // edi
  int v24; // r9d
  int v25; // eax
  unsigned __int8 PixelFormatSize; // al
  char v27; // r10
  unsigned int v29; // [rsp+20h] [rbp-A9h]
  struct IBitmapLock *v30; // [rsp+30h] [rbp-99h] BYREF
  enum DXGI_FORMAT v31; // [rsp+38h] [rbp-91h] BYREF
  struct IUnknown *v32; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-81h] BYREF
  struct ID3D11Resource *v34; // [rsp+50h] [rbp-79h] BYREF
  void *v35; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v36[16]; // [rsp+60h] [rbp-69h] BYREF
  struct tagRECT v37; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v38; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v39; // [rsp+84h] [rbp-45h]
  unsigned int v40; // [rsp+88h] [rbp-41h]
  float v41; // [rsp+8Ch] [rbp-3Dh]
  struct tagRECT X; // [rsp+90h] [rbp-39h] BYREF
  _DWORD v43[16]; // [rsp+A0h] [rbp-29h] BYREF

  v3 = *((_QWORD *)this - 30);
  v4 = (CSecondaryBitmap *)((char *)this - 264);
  v30 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v7 = *(int **)(v3 + 16);
  if ( CSecondaryD2DBitmap::HasPrefilterScale((CSecondaryBitmap *)((char *)this - 264)) )
  {
    left = v9->left;
    v11 = *((float *)this - 9) / 96.0;
    v43[14] = 0;
    v43[13] = 0;
    v43[12] = 0;
    v43[11] = 0;
    v43[9] = 0;
    v43[8] = 0;
    v43[7] = 0;
    v43[6] = 0;
    v43[4] = 0;
    v43[3] = 0;
    v43[2] = 0;
    v43[1] = 0;
    v43[15] = 1065353216;
    v43[10] = 1065353216;
    v43[5] = 1065353216;
    v43[0] = 1065353216;
    *(float *)&v12 = (float)left;
    *(float *)&v13 = (float)v9->top;
    right = v9->right;
    v38 = v12;
    *(float *)&v15 = (float)right;
    bottom = v9->bottom;
    v39 = v13;
    v40 = v15;
    v41 = (float)bottom;
    MatrixAppendScale2D((struct D2DMatrix *)v43, *((float *)this - 10) / 96.0, v11);
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)v43, (const struct MilRectF *)&v38, (struct MilRectF *)&X);
    v37.left = (int)floorf_0(*(float *)&X.left);
    v37.top = (int)floorf_0(*(float *)&X.top);
    v37.right = (int)ceilf_0(*(float *)&X.right);
    v37.bottom = (int)ceilf_0(*(float *)&X.bottom);
    CSecondaryBitmap::GetBitmapRect(this, (struct MilRectU *)&v38);
    v17 = v37.left;
    top = v37.top;
    if ( v38 > v37.left )
      v17 = v38;
    v19 = v37.right;
    if ( v39 > v37.top )
      top = v39;
    v20 = v37.bottom;
    if ( v40 < v37.right )
      v19 = v40;
    v37.left = v17;
    if ( LODWORD(v41) < v37.bottom )
      v20 = LODWORD(v41);
    v37.bottom = v20;
    v37.top = top;
    v37.right = v19;
    if ( v19 <= v17 || v20 <= top )
    {
      v37.bottom = 0;
      v37.right = 0;
      v37.top = 0;
      v37.left = 0;
    }
  }
  else
  {
    v37 = *v9;
  }
  X = v37;
  if ( !CSecondaryBitmap::RectInBounds(this, (unsigned int *)&X)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v37) )
  {
    v23 = -2147024809;
    v29 = 210;
    v24 = -2147024809;
    goto LABEL_41;
  }
  if ( CSecondaryD2DBitmap::HasPrefilterScale(v4) )
  {
    valid = CSecondaryD2DBitmap::CreateScaledLock(v21, &v37.left, a3, &v30);
    v23 = valid;
    if ( valid < 0 )
    {
      v29 = 215;
LABEL_19:
      v24 = valid;
LABEL_41:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, v29);
      goto LABEL_42;
    }
  }
  else
  {
    valid = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, struct IBitmapLock **))(*(_QWORD *)a3 + 72LL))(
              a3,
              &v37,
              &v30);
    v23 = valid;
    if ( valid < 0 )
    {
      v29 = 219;
      goto LABEL_19;
    }
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, enum DXGI_FORMAT *))(*(_QWORD *)v30 + 24LL))(v30, &v31);
  v23 = valid;
  if ( valid < 0 )
  {
    v29 = 222;
    goto LABEL_19;
  }
  v25 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 19) + 32LL))((char *)this - 152);
  if ( v31 != v25 )
  {
    valid = CSecondaryD2DBitmap::FormatConvertLock(v4, &v30);
    v23 = valid;
    if ( valid < 0 )
    {
      v29 = 230;
      goto LABEL_19;
    }
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v30 + 64LL))(v30, &v33);
  v23 = valid;
  if ( valid < 0 )
  {
    v29 = 233;
    goto LABEL_19;
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, _BYTE *, void **))(*(_QWORD *)v30 + 72LL))(v30, v36, &v35);
  v23 = valid;
  if ( valid < 0 )
  {
    v29 = 234;
    goto LABEL_19;
  }
  if ( v7[151] < 40960
    && (*(int (__fastcall **)(struct IBitmapLock *, struct IUnknown **))(*(_QWORD *)v30 + 80LL))(v30, &v32) >= 0 )
  {
    CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver((CD3DResourceManager *)(v7 + 224), v32);
  }
  valid = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this - 16))(
            *((_QWORD *)this - 16),
            &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
            &v34);
  v23 = valid;
  if ( valid < 0 )
  {
    v29 = 253;
    goto LABEL_19;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v31);
    Template_qqqq(
      PixelFormatSize >> 3,
      &EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v37.right - v37.left,
      v37.bottom - v37.top,
      v27,
      PixelFormatSize >> 3);
  }
  CD3DDeviceLevel1::UpdateSubresource((CD3DDeviceLevel1 *)v7, v34, &v37, v35, v33);
  valid = CSecondaryBitmap::AddValidRect((const struct FastRegion::Internal::CRgnData **)this, a2);
  v23 = valid;
  if ( valid < 0 )
  {
    v29 = 271;
    goto LABEL_19;
  }
LABEL_42:
  if ( v34 )
    ((void (__fastcall *)(struct ID3D11Resource *))v34->lpVtbl->Release)(v34);
  if ( v32 )
    ((void (__fastcall *)(struct IUnknown *))v32->lpVtbl->Release)(v32);
  if ( v30 )
    (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v30 + 16LL))(v30);
  return v23;
}
