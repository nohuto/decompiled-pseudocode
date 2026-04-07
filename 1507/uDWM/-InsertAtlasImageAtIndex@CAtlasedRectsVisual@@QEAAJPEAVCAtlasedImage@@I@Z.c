/*
 * XREFs of ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x18001B704
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001A070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001A980 (-Initialize@CButton@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18007B620 (-Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x18003713C (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAtlasImageAtIndex(CAtlasedRectsVisual *this, struct CAtlasedImage *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  void (__fastcall *v5)(CVisual *__hidden, unsigned int); // rsi
  struct CAtlasedImage *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v3 = DynArray<CAtlasedImage *,0>::InsertAt((char *)this + 264, &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x73u);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    *((_QWORD *)v7 + 10) = this;
    v5 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v5 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x2000u);
    else
      v5(this, 0x2000u);
  }
  return v4;
}
