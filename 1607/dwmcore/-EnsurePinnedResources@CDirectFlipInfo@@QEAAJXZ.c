/*
 * XREFs of ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x18012CEFC
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801523F0 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsurePinnedResources(CDirectFlipInfo *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  struct _LUID v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
         *((_QWORD *)this + 2),
         &v6,
         0LL,
         0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xDEu);
  }
  else if ( *((_DWORD *)this + 14) == 2 )
  {
    v4 = CCompositionSurfaceInfo::CBindInfo::PinResources(
           (CCompositionSurfaceInfo::CBindInfo *)(*((_QWORD *)this + 4) + 48LL),
           v6);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xE2u);
    else
      *((_DWORD *)this + 14) = 3;
  }
  return v3;
}
