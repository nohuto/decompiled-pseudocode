/*
 * XREFs of ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018EFE4
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018F1A0 (-GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDi.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18018F2F0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoCon.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18001200C (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18001D098 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D198 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18009AC34 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xddddd @ 0x18012A044 (Template_xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x18018EEB4 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F5A4 (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x18018F8F0 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
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
  struct tagRECT v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h]
  struct tagRECT v15; // [rsp+58h] [rbp-21h] BYREF
  FastRegion::CRegion *v16[10]; // [rsp+70h] [rbp-9h] BYREF

  if ( !*((_BYTE *)this + 465) )
  {
    v2 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x130u);
      return v3;
    }
    v15.left = 0;
    v4 = *((_QWORD *)this + 14);
    v15.top = 0;
    (*(void (__fastcall **)(char *, LONG *, LONG *))(v4 + 24))((char *)this + 112, &v15.right, &v15.bottom);
    CRegion::CRegion((CRegion *)v16, &v15);
    v5 = (const struct FastRegion::Internal::CRgnData **)*((_QWORD *)this + 57);
    if ( v5 )
      v5 += 2;
    FastRegion::CRegion::Subtract(v16, v5);
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(this, (const struct CRegion *)v16, 0);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x13Fu);
    }
    else
    {
      v7 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
      v3 = v7;
      if ( v7 >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v13 = 0LL;
          FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)v16, &v13);
          v14 = *(_QWORD *)((char *)this + 468);
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
        *((_BYTE *)this + 465) = 1;
        FastRegion::CRegion::FreeMemory(v16);
        goto LABEL_10;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x141u);
    }
    FastRegion::CRegion::FreeMemory(v16);
    return v3;
  }
LABEL_10:
  v11 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this);
  v3 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x153u);
  return v3;
}
