/*
 * XREFs of ?Initialize@CThumbnailVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180014660
 * Callers:
 *     ?Create@CThumbnailVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001225C (-Create@CThumbnailVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::Initialize(CThumbnailVisual *this, struct MIL_CHANNEL__ *const a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::Initialize(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x41u);
  return v3;
}
