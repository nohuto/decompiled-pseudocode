/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800123B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180011DB4 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180011F60 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180011FAC (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x18001236C (-HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180058DFC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x18007E8D8 (-UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x180114140 (Template_qqqq.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x180133058 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180133444 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x180178E28 (-ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryBitmap *this, struct MilRectU *a2, __int64 a3)
{
  __int64 v3; // rax
  CSecondaryD2DBitmap *v4; // rsi
  int *v7; // r14
  struct tagRECT *v9; // rdx
  __int64 v10; // rcx
  int valid; // eax
  unsigned int v12; // ebx
  int v13; // eax
  float v15; // xmm2_4
  int left; // eax
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm1_4
  int right; // eax
  unsigned int v20; // xmm0_4
  int bottom; // eax
  unsigned int v22; // ecx
  unsigned int top; // edx
  unsigned int v24; // eax
  unsigned int v25; // r8d
  int v26; // r9d
  unsigned __int8 PixelFormatSize; // al
  char v28; // r10
  unsigned int v29; // [rsp+20h] [rbp-99h]
  bool v30; // [rsp+28h] [rbp-91h]
  struct IBitmapLock *v31; // [rsp+30h] [rbp-89h] BYREF
  enum DXGI_FORMAT v32; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-7Dh] BYREF
  struct ID3D11Resource *v34; // [rsp+40h] [rbp-79h] BYREF
  struct IUnknown *v35; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v36[8]; // [rsp+50h] [rbp-69h] BYREF
  void *v37; // [rsp+58h] [rbp-61h] BYREF
  _OWORD v38[4]; // [rsp+60h] [rbp-59h] BYREF
  int v39; // [rsp+A0h] [rbp-19h]
  struct tagRECT v40; // [rsp+B0h] [rbp-9h] BYREF
  unsigned int v41; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v42; // [rsp+C4h] [rbp+Bh]
  unsigned int v43; // [rsp+C8h] [rbp+Fh]
  float v44; // [rsp+CCh] [rbp+13h]
  struct tagRECT X; // [rsp+D0h] [rbp+17h] BYREF

  v3 = *((_QWORD *)this - 30);
  v4 = (CSecondaryBitmap *)((char *)this - 264);
  v31 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v7 = *(int **)(v3 + 24);
  if ( CSecondaryD2DBitmap::HasPrefilterScale((CSecondaryBitmap *)((char *)this - 264)) )
  {
    v15 = *((float *)this - 9) / 96.0;
    v39 = dword_1801EAD50;
    left = v9->left;
    v38[1] = xmmword_1801EAD20;
    v38[3] = xmmword_1801EAD40;
    v38[0] = CMILMatrix::Identity;
    v38[2] = xmmword_1801EAD30;
    *(float *)&v17 = (float)left;
    *(float *)&v18 = (float)v9->top;
    right = v9->right;
    v41 = v17;
    *(float *)&v20 = (float)right;
    bottom = v9->bottom;
    v42 = v18;
    v43 = v20;
    v44 = (float)bottom;
    CMILMatrix::Scale((CMILMatrix *)v38, *((float *)this - 10) / 96.0, v15, 1.0);
    CMILMatrix::Transform2DBoundsHelper<0>(v38, &v41, &X);
    v40.left = (int)floorf_0(*(float *)&X.left);
    v40.top = (int)floorf_0(*(float *)&X.top);
    v40.right = (int)ceilf_0(*(float *)&X.right);
    v40.bottom = (int)ceilf_0(*(float *)&X.bottom);
    CSecondaryBitmap::GetBitmapRect(this, (struct MilRectU *)&v41);
    v22 = v40.left;
    top = v40.top;
    if ( v41 > v40.left )
      v22 = v41;
    v24 = v40.right;
    if ( v42 > v40.top )
      top = v42;
    v25 = v40.bottom;
    if ( v43 < v40.right )
      v24 = v43;
    v40.left = v22;
    if ( LODWORD(v44) < v40.bottom )
      v25 = LODWORD(v44);
    v40.bottom = v25;
    v40.top = top;
    v40.right = v24;
    if ( v24 <= v22 || v25 <= top )
    {
      v40.bottom = 0;
      v40.right = 0;
      v40.top = 0;
      v40.left = 0;
    }
  }
  else
  {
    v40 = *v9;
  }
  X = v40;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(this)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v40) )
  {
    v12 = -2147024809;
    v29 = 210;
    v26 = -2147024809;
    goto LABEL_48;
  }
  if ( !CSecondaryD2DBitmap::HasPrefilterScale(v4) )
  {
    valid = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, struct IBitmapLock **))(*(_QWORD *)a3 + 72LL))(
              a3,
              &v40,
              &v31);
    v12 = valid;
    if ( valid >= 0 )
      goto LABEL_7;
    v29 = 219;
LABEL_37:
    v26 = valid;
LABEL_48:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v29);
    goto LABEL_16;
  }
  valid = CSecondaryD2DBitmap::CreateScaledLock(v10, &v40, a3, &v31);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 215;
    goto LABEL_37;
  }
LABEL_7:
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, enum DXGI_FORMAT *))(*(_QWORD *)v31 + 24LL))(v31, &v32);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 222;
    goto LABEL_37;
  }
  v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 19) + 32LL))((char *)this - 152);
  if ( v32 != v13 )
  {
    valid = CSecondaryD2DBitmap::FormatConvertLock(v4, &v31);
    v12 = valid;
    if ( valid < 0 )
    {
      v29 = 230;
      goto LABEL_37;
    }
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v31 + 64LL))(v31, &v33);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 233;
    goto LABEL_37;
  }
  valid = (*(__int64 (__fastcall **)(struct IBitmapLock *, _BYTE *, void **))(*(_QWORD *)v31 + 72LL))(v31, v36, &v37);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 234;
    goto LABEL_37;
  }
  if ( v7[169] < 40960
    && (*(int (__fastcall **)(struct IBitmapLock *, struct IUnknown **))(*(_QWORD *)v31 + 80LL))(v31, &v35) >= 0 )
  {
    CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver((CD3DResourceManager *)(v7 + 220), v35);
  }
  valid = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this - 16))(
            *((_QWORD *)this - 16),
            &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
            &v34);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 253;
    goto LABEL_37;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v32);
    Template_qqqq(
      PixelFormatSize >> 3,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v40.right - v40.left,
      v40.bottom - v40.top,
      v28,
      PixelFormatSize >> 3);
  }
  CD3DDeviceLevel1::UpdateSubresource((CD3DDeviceLevel1 *)v7, v34, &v40, v37, v33, v30);
  valid = CSecondaryBitmap::AddValidRect(this, a2);
  v12 = valid;
  if ( valid < 0 )
  {
    v29 = 271;
    goto LABEL_37;
  }
LABEL_16:
  if ( v34 )
    ((void (__fastcall *)(struct ID3D11Resource *))v34->lpVtbl->Release)(v34);
  if ( v35 )
    ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v35);
  if ( v31 )
    (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v31 + 16LL))(v31);
  return v12;
}
