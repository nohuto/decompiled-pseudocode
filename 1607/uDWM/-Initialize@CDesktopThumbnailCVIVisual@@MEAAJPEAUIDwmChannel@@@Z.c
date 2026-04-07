/*
 * XREFs of ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180097380
 * Callers:
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007FBB8 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Initialize(CDesktopThumbnailCVIVisual *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
    *((_BYTE *)this + 320) = 0;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x2B6u);
  return v4;
}
