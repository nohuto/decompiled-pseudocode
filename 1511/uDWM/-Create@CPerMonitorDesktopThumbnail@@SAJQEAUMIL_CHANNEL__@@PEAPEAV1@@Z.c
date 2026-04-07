/*
 * XREFs of ?Create@CPerMonitorDesktopThumbnail@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180099CD0
 * Callers:
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x18009A334 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::Create(
        struct MIL_CHANNEL__ *const a1,
        struct CPerMonitorDesktopThumbnail **a2)
{
  unsigned int v2; // esi
  __int64 v5; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 8) = 1;
      *(_QWORD *)v5 = &CPerMonitorDesktopThumbnail::`vftable';
      *(_QWORD *)(v5 + 32) = 0LL;
      *(_QWORD *)(v5 + 64) = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      *(_QWORD *)(v5 + 16) = a1;
      *a2 = (struct CPerMonitorDesktopThumbnail *)v5;
      return v2;
    }
    v2 = -2147024882;
  }
  else
  {
    v2 = -2147024809;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x73u);
  return v2;
}
