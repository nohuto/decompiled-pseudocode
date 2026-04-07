/*
 * XREFs of ?Create@CDesktopThumbnailCVIVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18007F288
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003FFD0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007FB70 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18007FF10 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x180099AB0 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18009A5F0 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Create(
        struct MIL_CHANNEL__ *const a1,
        struct CDesktopThumbnailCVIVisual **a2)
{
  unsigned int v4; // edi
  CVisual *v5; // rax
  CVisual *v6; // rbx
  int v7; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0xA4u);
    return v4;
  }
  v5 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    328LL);
  v6 = v5;
  if ( v5 )
  {
    CVisual::CVisual(v5);
    *((_QWORD *)v6 + 33) = 0LL;
    *((_QWORD *)v6 + 35) = 0LL;
    *((_QWORD *)v6 + 36) = 0LL;
    *(_QWORD *)v6 = &CDesktopThumbnailCVIVisual::`vftable';
    *(_WORD *)((char *)v6 + 321) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v4 = -2147024882;
    goto LABEL_3;
  }
  v7 = CDesktopThumbnailCVIVisual::Initialize(v6, a1);
  v4 = v7;
  if ( v7 >= 0 )
  {
    *a2 = v6;
    v6 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xA4u);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v4;
}
