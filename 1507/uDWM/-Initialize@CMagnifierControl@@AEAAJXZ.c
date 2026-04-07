/*
 * XREFs of ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x180046A28
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x180045F68 (-Create@CMagnifierControl@@SAJPEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CFullScreenMagnifier@@SAJPEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18004689C (-Create@CFullScreenMagnifier@@SAJPEAUMIL_CHANNEL__@@PEAVCResource@@PEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CMagnifierControl::Initialize(CMagnifierControl *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int inserted; // eax
  int v5; // eax

  v2 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)this + 2), (CBaseObject ***)this + 5);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x83u);
  }
  else
  {
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 5) + 32LL),
                 *((struct CVisual **)this + 6),
                 0LL,
                 0,
                 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x85u);
    }
    else
    {
      v5 = CFullScreenMagnifier::Create(
             *((struct MIL_CHANNEL__ **)this + 2),
             *((struct CResource **)this + 3),
             *((struct CVisual **)this + 4),
             (struct CFullScreenMagnifier **)this + 7);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x8Fu);
    }
  }
  return v3;
}
