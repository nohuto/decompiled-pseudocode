/*
 * XREFs of ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800A5DCC
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18007BED8 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800A4FA0 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180105064 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800A5470 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 */

char __fastcall CLegacySurfaceManager::ReleaseCaptureBitsResponse(CLegacySurfaceManager *this)
{
  char v2; // si
  CResponseItem *v3; // rcx

  v2 = 0;
  v3 = (CResponseItem *)*((_QWORD *)this + 35);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 292) )
    {
      CResponseItem::ReleaseResponseRef(v3);
      *((_BYTE *)this + 292) = 0;
    }
    CResponseItem::QueueResponse(*((CResponseItem **)this + 35));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 8LL))(*((_QWORD *)this + 35));
    *((_QWORD *)this + 35) = 0LL;
    *((_DWORD *)this + 72) = 0;
    return 1;
  }
  return v2;
}
