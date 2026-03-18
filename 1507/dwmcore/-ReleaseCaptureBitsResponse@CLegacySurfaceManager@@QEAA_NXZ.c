/*
 * XREFs of ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800625C0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18004A980 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x180061A30 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1800E9118 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x180061FB4 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
