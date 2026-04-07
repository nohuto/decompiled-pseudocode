/*
 * XREFs of ?Initialize@CClientArea@@MEAAJQEAUMIL_CHANNEL__@@I@Z @ 0x180012B30
 * Callers:
 *     ?Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800128A4 (-Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800159F4 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CClientArea::Initialize(struct CResource **this, struct MIL_CHANNEL__ *const a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax

  if ( a3 )
  {
    v3 = CResource::WrapExistingResource(a2, a3, this + 2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x62u);
  }
  else
  {
    v6 = CResource::Create(32LL, a2);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x66u);
  }
  return v4;
}
