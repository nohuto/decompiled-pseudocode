/*
 * XREFs of ?Create@CAtlasedImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180074D34
 * Callers:
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18007B620 (-Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800293DC (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasedImage::Create(struct MIL_CHANNEL__ *const a1, struct CAtlasedImage **a2)
{
  unsigned int v2; // esi
  CAtlasedImage *v5; // rax
  CAtlasedImage *v6; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            136LL);
    if ( v5 )
      v6 = CAtlasedImage::CAtlasedImage(v5);
    else
      v6 = 0LL;
    if ( v6 )
    {
      *((_QWORD *)v6 + 13) = a1;
      *a2 = v6;
      return v2;
    }
    v2 = -2147024882;
  }
  else
  {
    v2 = -2147024809;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x95u);
  return v2;
}
