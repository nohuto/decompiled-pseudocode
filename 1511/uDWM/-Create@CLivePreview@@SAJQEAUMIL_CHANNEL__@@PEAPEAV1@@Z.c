/*
 * XREFs of ?Create@CLivePreview@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180043860
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180044F5C (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CLivePreview@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800439F0 (-Initialize@CLivePreview@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x180043A7C (--0CLivePreview@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CLivePreview::Create(struct MIL_CHANNEL__ *const a1, struct CLivePreview **a2)
{
  CLivePreview *v4; // rax
  CLivePreview *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  if ( !a2 )
  {
    v7 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x5Bu);
    return v7;
  }
  v4 = (CLivePreview *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         592LL);
  if ( v4 )
    v5 = CLivePreview::CLivePreview(v4);
  else
    v5 = 0LL;
  if ( !v5 )
  {
    v7 = -2147024882;
    goto LABEL_13;
  }
  v6 = CLivePreview::Initialize(v5, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x5Bu);
  }
  else
  {
    *a2 = v5;
    v5 = 0LL;
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v7;
}
