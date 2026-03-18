/*
 * XREFs of ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z @ 0x1800FF108
 * Callers:
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CWARPDrawListEntry@@AEAA@XZ @ 0x1800FEFD0 (--0CWARPDrawListEntry@@AEAA@XZ.c)
 *     ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@@Z @ 0x1800FF204 (-Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Create(const struct WARPAlphaBltParameters *a1, struct CWARPDrawListEntry **a2)
{
  CWARPDrawListEntry *v4; // rax
  volatile signed __int32 *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax

  v4 = (CWARPDrawListEntry *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               352LL);
  if ( v4 )
    v5 = (volatile signed __int32 *)CWARPDrawListEntry::CWARPDrawListEntry(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v7 = CWARPDrawListEntry::Initialize((CWARPDrawListEntry *)v5, a1);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a2 = (struct CWARPDrawListEntry *)v5;
      v5 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x14u);
    }
    if ( v5 )
      CMILRefCountBase::Release((CMILRefCountBase *)v5);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x11u);
  }
  return v6;
}
