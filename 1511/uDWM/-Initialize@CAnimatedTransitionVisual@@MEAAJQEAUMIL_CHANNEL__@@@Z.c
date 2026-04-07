/*
 * XREFs of ?Initialize@CAnimatedTransitionVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18000DE70
 * Callers:
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18000C06C (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800222C0 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180023D20 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Initialize(
        CAnimatedTransitionVisual *this,
        struct MIL_CHANNEL__ *const a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x89u);
  else
    CVisual::DisablePrefiltering(this);
  return v4;
}
