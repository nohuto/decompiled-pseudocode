/*
 * XREFs of ?InitializeFromExistingResource@CVisual@@MEAAJQEAUMIL_CHANNEL__@@I@Z @ 0x18001E240
 * Callers:
 *     ?WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800089A8 (-WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800159F4 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CVisual::InitializeFromExistingResource(
        struct CResource **this,
        struct MIL_CHANNEL__ *const a2,
        int a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CResource::WrapExistingResource(a2, a3, this + 2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x7Au);
  return v4;
}
