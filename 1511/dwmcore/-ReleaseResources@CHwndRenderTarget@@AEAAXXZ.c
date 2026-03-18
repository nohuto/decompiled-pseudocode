/*
 * XREFs of ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18007BED8
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18007C550 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18007E754 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800A5DCC (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x1800A5F98 (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ?ReleaseDrawingContext@CRenderTarget@@IEAAXXZ @ 0x1800AD24C (-ReleaseDrawingContext@CRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseResources(CHwndRenderTarget *this)
{
  __int64 v2; // rbp
  char *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  *((_BYTE *)this + 554) = 1;
  v3 = (char *)this + 240;
  *((_DWORD *)v3 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v3, 0x10u);
  v4 = *((_QWORD *)this + 14);
  *((_BYTE *)this + 559) = 0;
  *((_BYTE *)this + 561) = 0;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  CRenderTarget::ReleaseDrawingContext(this);
  v5 = *((_QWORD *)this + 68);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 68));
    *((_QWORD *)this + 68) = 0LL;
  }
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
  CLegacySurfaceManager::FlushVistaBltPresentHistory((CLegacySurfaceManager *)(v2 + 96));
  if ( *(_QWORD *)(v2 + 376) )
  {
    if ( ++*(_DWORD *)(v2 + 384) > 8u )
      ++*(_DWORD *)(v2 + 392);
    CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v2 + 96));
  }
}
