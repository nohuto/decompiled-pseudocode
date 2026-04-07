/*
 * XREFs of ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180085354
 * Callers:
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800858EC (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800863AC (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180047684 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18009BC50 (-Initialize@CTouchPressHoldVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CTouchPressHoldVisual>(
        struct MIL_CHANNEL__ *a1,
        __int64 a2,
        CTouchPressHoldVisual **a3)
{
  unsigned int v5; // edi
  CTouchVisual *v6; // rax
  CTouchPressHoldVisual *v7; // rbx
  int v8; // eax

  if ( a3 )
  {
    v6 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           384LL);
    v7 = v6;
    if ( v6 )
    {
      CTouchVisual::CTouchVisual(v6);
      *(_QWORD *)v7 = &CTouchPressHoldVisual::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v8 = CTouchPressHoldVisual::Initialize(v7, a1);
      v5 = v8;
      if ( v8 >= 0 )
      {
        *a3 = v7;
        v7 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x3Fu);
      }
      if ( v7 )
        CBaseObject::Release(v7);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v5;
}
