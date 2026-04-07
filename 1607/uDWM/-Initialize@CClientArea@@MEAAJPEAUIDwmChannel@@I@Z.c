/*
 * XREFs of ?Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180015F50
 * Callers:
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180015D54 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019A98 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CClientArea::Initialize(struct CResource **this, struct IDwmChannel *a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax

  if ( a3 )
  {
    v3 = CResource::WrapExistingResource(a2, a3, this + 2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x62u);
  }
  else
  {
    v6 = CResource::Create(37LL, a2);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x66u);
  }
  return v4;
}
