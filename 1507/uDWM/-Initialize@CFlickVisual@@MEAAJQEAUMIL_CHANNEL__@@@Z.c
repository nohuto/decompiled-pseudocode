/*
 * XREFs of ?Initialize@CFlickVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180087A20
 * Callers:
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCFlickVisual@@@Z @ 0x18007D07C (--$CreateTouchVisual@VCFlickVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCFlickVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800124AC (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 */

__int64 __fastcall CFlickVisual::Initialize(CBaseObject **this, struct MIL_CHANNEL__ *const a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int inserted; // eax

  v4 = CVisual::Initialize(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CImage::Create(a2, this + 39);
    v5 = v6;
    if ( v6 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), this[39], 0LL, 0, 1);
      v5 = inserted;
      if ( inserted >= 0 )
      {
        this[42] = 0LL;
        this[38] = 0LL;
        *((_DWORD *)this + 83) = 1061158912;
        *((_DWORD *)this + 82) = 20;
        *((_BYTE *)this + 264) = 0;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x27u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x26u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x23u);
  }
  return v5;
}
