/*
 * XREFs of ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x1800FF3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800FF7E0 (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall MilCompositionEngine_Uninitialize(struct HMIL_CONNECTION__ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
  {
    CConnection::Disconnect(a1);
    CMILCOMBase::InternalRelease((struct HMIL_CONNECTION__ *)((char *)a1 + 8));
  }
  else
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6Du);
  }
  return v1;
}
