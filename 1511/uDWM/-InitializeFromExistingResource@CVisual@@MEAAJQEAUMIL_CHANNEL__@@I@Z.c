/*
 * XREFs of ?InitializeFromExistingResource@CVisual@@MEAAJQEAUMIL_CHANNEL__@@I@Z @ 0x180023650
 * Callers:
 *     ?WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003EC0C (-WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18001D004 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
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
