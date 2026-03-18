/*
 * XREFs of ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DE28
 * Callers:
 *     ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x18015E220 (-SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTarget.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800193B8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800194AC (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xddddd @ 0x180111D6C (Template_xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z @ 0x18015D4C0 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DBDC (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z @ 0x18015DF58 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  const struct CRegion *v4; // rdx
  int v5; // eax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // r9
  int RectangleCount; // eax
  unsigned int v10; // r10d
  __int64 v11; // rcx
  struct tagRECT v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]

  v2 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 136LL))(*((_QWORD *)this + 60));
    v4 = (const struct CRegion *)*((_QWORD *)this + 62);
    if ( v4 )
      v4 = (const struct CRegion *)((char *)v4 + 16);
    v5 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(this, v4, 0);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v6 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
      v3 = v6;
      if ( v6 >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v7 = *((_QWORD *)this + 62);
          v13 = 0LL;
          FastRegion::CRegion::GetBoundingRect((LONG **)(v7 + 16), &v13);
          v14 = *(_QWORD *)((char *)this + 508);
          RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(v8 + 16));
          Template_xddddd(
            v11,
            &EVTDESC_ADVANCED_DIRECTFLIP_SAVECONTENT,
            v10 | (unsigned __int64)((__int64)SHIDWORD(v14) << 32),
            RectangleCount,
            v13.left,
            v13.top,
            v13.right,
            v13.bottom);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x109u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x107u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x102u);
  }
  return v3;
}
