/*
 * XREFs of ?Initialize@CClientArea@@MEAAJQEAUMIL_CHANNEL__@@I@Z @ 0x18003D3A0
 * Callers:
 *     ?Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003D184 (-Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18001D004 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CClientArea::Initialize(CClientArea *this, struct MIL_CHANNEL__ *const a2, int a3)
{
  bool v4; // zf
  CBaseObject **v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax

  v4 = a3 == 0;
  v5 = (CBaseObject **)((char *)this + 16);
  if ( v4 )
  {
    v9 = CResource::Create(0x21u, (__int64)a2, v5);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x66u);
  }
  else
  {
    v6 = CResource::WrapExistingResource(a2, a3, v5);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x62u);
  }
  return v7;
}
