/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180012180
 * Callers:
 *     <none>
 * Callees:
 *     ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x18001213C (-HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180018E1C (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180018FF0 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x18001903C (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x180022D9C (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002D40C (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     MatrixAppendScale2D @ 0x180068D90 (MatrixAppendScale2D.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 *     Template_qqqq @ 0x1801002AC (Template_qqqq.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x18014AF74 (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x18015EC88 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18015F0EC (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryBitmap *this, struct MilRectU *a2, __int64 a3)
{
  __int64 v3; // rax
  CSecondaryD2DBitmap *v4; // r14
  int *v7; // r15
  struct tagRECT *v9; // rdx
  __int64 v10; // rcx
  int valid; // eax
  unsigned int v12; // edi
  int v13; // eax
  int left; // eax
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  int right; // eax
  unsigned int v19; // xmm0_4
  int bottom; // eax
  unsigned int v21; // ecx
  unsigned int top; // edx
  unsigned int v23; // eax
  unsigned int v24; // r8d
  int v25; // r9d
  unsigned __int8 PixelFormatSize; // al
  char v27; // r10
  unsigned int v28; // [rsp+20h] [rbp-A9h]
  bool v29; // [rsp+28h] [rbp-A1h]
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
    *(float *)&v16 = (float)left;
    *(float *)&v17 = (float)v9->top;
    right = v9->right;
    v38 = v16;
    *(float *)&v19 = (float)right;
    bottom = v9->bottom;
    v39 = v17;
    v40 = v19;
    v41 = (float)bottom;
    MatrixAppendScale2D((struct D2DMatrix *)v43);
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)v43, (const struct MilRectF *)&v38, (struct MilRectF *)&X);
    v37.left = (int)floorf_0(*(float *)&X.left);
    v37.top = (int)floorf_0(*(float *)&X.top);
    v37.right = (int)ceilf_0(*(float *)&X.right);
    v37.bottom = (int)ceilf_0(*(float *)&X.bottom);
    CSecondaryBitmap::GetBitmapRect(this, (struct MilRectU *)&v38);
    v21 = v37.left;
    top = v37.top;
    if ( v38 > v37.left )
      v21 = v38;
    v23 = v37.right;
    if ( v39 > v37.top )
      top = v39;
    v24 = v37.bottom;
    if ( v40 < v37.right )
      v23 = v40;
    v37.left = v21;
    if ( LODWORD(v41) < v37.bottom )
      v24 = LODWORD(v41);
    v37.bottom = v24;
    v37.top = top;
    v37.right = v23;
    if ( v23 <= v21 || v24 <= top )
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
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(this, &X)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v37) )
  {
    v12 = -2147024809;
    v28 = 210;
    v25 = -2147024809;
    goto LABEL_48;
  }
  if ( CSecondaryD2DBitmap::HasPrefilterScale(v4) )
  {
    valid = CSecondaryD2DBitmap::CreateScaledLock(v10, &v37, a3, &v30);
    v12 = valid;
    if ( valid < 0 )
    {
      v28 = 215;
LABEL_37:
      v25 = valid;
LABEL_48:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v28);
      goto LABEL_16;
    }
  }
  else
  {
    valid = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, struct IBitmapLock **))(*(_QWORD *)a3 + 72LL))(
              a3,
              &v37,
              &v30);
    v12 = valid;
    if ( valid < 0 )
    {
      v28 = 219;
      goto LABEL_37;
    }
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, enum DXGI_FORMAT *))(*(_QWORD *)v30 + 24LL))(v30, &v31);
  v12 = valid;
  if ( valid < 0 )
  {
    v28 = 222;
    goto LABEL_37;
  }
  v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 19) + 32LL))((char *)this - 152);
  if ( v31 != v13 )
  {
    valid = CSecondaryD2DBitmap::FormatConvertLock(v4, &v30);
    v12 = valid;
    if ( valid < 0 )
    {
      v28 = 230;
      goto LABEL_37;
    }
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v30 + 64LL))(v30, &v33);
  v12 = valid;
  if ( valid < 0 )
  {
    v28 = 233;
    goto LABEL_37;
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, _BYTE *, void **))(*(_QWORD *)v30 + 72LL))(v30, v36, &v35);
  v12 = valid;
  if ( valid < 0 )
  {
    v28 = 234;
    goto LABEL_37;
  }
  if ( v7[153] < 40960
    && (*(int (__fastcall **)(struct IBitmapLock *, struct IUnknown **))(*(_QWORD *)v30 + 80LL))(v30, &v32) >= 0 )
  {
    CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver((CD3DResourceManager *)(v7 + 212), v32);
  }
  valid = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this - 16))(
            *((_QWORD *)this - 16),
            &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
            &v34);
  v12 = valid;
  if ( valid < 0 )
  {
    v28 = 253;
    goto LABEL_37;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v31);
    Template_qqqq(
      PixelFormatSize >> 3,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v37.right - v37.left,
      v37.bottom - v37.top,
      v27,
      PixelFormatSize >> 3);
  }
  CD3DDeviceLevel1::UpdateSubresource((CD3DDeviceLevel1 *)v7, v34, &v37, v35, v33, v29);
  valid = CSecondaryBitmap::AddValidRect(this, a2);
  v12 = valid;
  if ( valid < 0 )
  {
    v28 = 271;
    goto LABEL_37;
  }
LABEL_16:
  if ( v34 )
    ((void (__fastcall *)(struct ID3D11Resource *))v34->lpVtbl->Release)(v34);
  if ( v32 )
    ((void (__fastcall *)(struct IUnknown *))v32->lpVtbl->Release)(v32);
  if ( v30 )
    (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v30 + 16LL))(v30);
  return v12;
}
