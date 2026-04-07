/*
 * XREFs of ?Initialize@CTopLevelWindow3D@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180027EE0
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800083A4 (-Create@CTopLevelWindow3D@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?DisableTrilinearFiltering@CVisual@@QEAAXXZ @ 0x18001E900 (-DisableTrilinearFiltering@CVisual@@QEAAXXZ.c)
 *     ?DisableAnisotropicFiltering@CVisual@@QEAAXXZ @ 0x18001E950 (-DisableAnisotropicFiltering@CVisual@@QEAAXXZ.c)
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x18001E9A4 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::Initialize(CBaseObject **this, struct MIL_CHANNEL__ *const a2)
{
  int v3; // eax
  unsigned int v4; // edi

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x42u);
  }
  else
  {
    CVisual::DisableTrilinearFiltering((CVisual *)this);
    CVisual::DisableAnisotropicFiltering((CVisual *)this);
    CVisual::DisablePrefiltering((CVisual *)this);
  }
  return v4;
}
