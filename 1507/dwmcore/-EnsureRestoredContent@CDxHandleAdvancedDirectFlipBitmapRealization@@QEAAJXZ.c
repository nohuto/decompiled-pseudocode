/*
 * XREFs of ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014EB48
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18014ED10 (-GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDi.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18014EE60 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoCon.c)
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18000D3BC (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800881A0 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800F6AD8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     Template_xddddd @ 0x1800F79EC (Template_xddddd.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18014E7BC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z @ 0x18014EA00 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014F11C (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z @ 0x18014F498 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  const struct FastRegion::Internal::CRgnData **v5; // rdx
  int v6; // eax
  int v7; // eax
  int RectangleCount; // eax
  unsigned int v9; // r10d
  __int64 v10; // rcx
  int v11; // eax
  struct tagRECT v13; // [rsp+48h] [rbp-39h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h]
  struct tagRECT v15; // [rsp+60h] [rbp-21h] BYREF
  void *v16[10]; // [rsp+78h] [rbp-9h] BYREF

  if ( !*((_BYTE *)this + 505) )
  {
    v2 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 1);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x123u);
      return v3;
    }
    v4 = *((_QWORD *)this + 14);
    v15.left = 0;
    v15.top = 0;
    (*(void (__fastcall **)(char *, LONG *, LONG *))(v4 + 24))((char *)this + 112, &v15.right, &v15.bottom);
    CRegion::CRegion((CRegion *)v16, &v15);
    v5 = (const struct FastRegion::Internal::CRgnData **)*((_QWORD *)this + 62);
    if ( v5 )
      v5 += 2;
    FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)v16, v5);
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(this, (const struct CRegion *)v16, 0);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x132u);
LABEL_8:
      FastRegion::CRegion::FreeMemory(v16);
      return v3;
    }
    v7 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x134u);
      goto LABEL_8;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v13 = 0LL;
      FastRegion::CRegion::GetBoundingRect((LONG **)v16, &v13);
      v14 = *(_QWORD *)((char *)this + 508);
      RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)v16);
      Template_xddddd(
        v10,
        &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
        v9 | (unsigned __int64)((__int64)SHIDWORD(v14) << 32),
        RectangleCount,
        v13.left,
        v13.top,
        v13.right,
        v13.bottom);
    }
    *((_BYTE *)this + 505) = 1;
    FastRegion::CRegion::FreeMemory(v16);
  }
  v11 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 0);
  v3 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x146u);
  return v3;
}
