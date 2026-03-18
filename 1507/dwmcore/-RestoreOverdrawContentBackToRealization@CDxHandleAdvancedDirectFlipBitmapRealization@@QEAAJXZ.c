/*
 * XREFs of ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014F278
 * Callers:
 *     ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18014F070 (-ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDispl.c)
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18000D3BC (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800F6AD8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     Template_xddddd @ 0x1800F79EC (Template_xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z @ 0x18014EA00 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z @ 0x18014F498 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::RestoreOverdrawContentBackToRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  const struct CRegion *v5; // rdx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // r9
  int RectangleCount; // eax
  unsigned int v10; // r10d
  __int64 v11; // rcx
  struct tagRECT v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]

  v2 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = *((_QWORD *)this + 62);
    if ( v4 )
      v5 = (const struct CRegion *)(v4 + 16);
    else
      v5 = 0LL;
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(this, v5, 1);
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
          &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENTBACKTOREALIZATION,
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x154u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x151u);
  }
  return v3;
}
