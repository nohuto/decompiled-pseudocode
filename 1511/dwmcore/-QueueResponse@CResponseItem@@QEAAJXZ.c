/*
 * XREFs of ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800A5470
 * Callers:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800A5DCC (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800FADE4 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x1800A5AC4 (-QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z.c)
 */

__int64 __fastcall CResponseItem::QueueResponse(CResponseItem *this)
{
  int v1; // esi

  v1 = 0;
  if ( !*((_BYTE *)this + 32) && !*((_BYTE *)this + 33) )
  {
    v1 = CLegacySurfaceManager::QueuePostPresentResponse((CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 96LL), this);
    if ( v1 < 0 )
      (*(void (__fastcall **)(CResponseItem *, _QWORD))(*(_QWORD *)this + 32LL))(this, (unsigned int)v1);
    else
      *((_BYTE *)this + 32) = 1;
  }
  return (unsigned int)v1;
}
