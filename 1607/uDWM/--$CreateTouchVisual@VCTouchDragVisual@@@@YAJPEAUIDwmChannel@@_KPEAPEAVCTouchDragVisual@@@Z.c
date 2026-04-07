/*
 * XREFs of ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800858B4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004DBCC (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x180088F28 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180089400 (-Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CTouchDragVisual>(
        struct IDwmChannel *a1,
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
