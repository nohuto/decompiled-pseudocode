/*
 * XREFs of ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x180085260
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004BB7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x18008994C (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180089E30 (-Initialize@CTouchDragVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CTouchDragVisual>(
        struct MIL_CHANNEL__ *a1,
        unsigned __int64 a2,
        CTouchDragVisual **a3)
{
  unsigned int v6; // edi
  CTouchDragVisual *v7; // rax
  CTouchDragVisual *v8; // rbx
  int v9; // eax

  if ( a3 )
  {
    v7 = (CTouchDragVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               448LL);
    if ( v7 )
      v8 = CTouchDragVisual::CTouchDragVisual(v7, a2);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v9 = CTouchDragVisual::Initialize(v8, a1);
      v6 = v9;
      if ( v9 >= 0 )
      {
        *a3 = v8;
        v8 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x3Fu);
      }
      if ( v8 )
        CBaseObject::Release(v8);
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v6;
}
