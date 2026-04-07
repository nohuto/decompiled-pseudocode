/*
 * XREFs of ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18009A5F0
 * Callers:
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18007F288 (-Create@CDesktopThumbnailCVIVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800222C0 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Initialize(
        CDesktopThumbnailCVIVisual *this,
        struct MIL_CHANNEL__ *const a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
    *((_BYTE *)this + 320) = 0;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x2A2u);
  return v4;
}
