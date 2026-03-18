/*
 * XREFs of ?ResetAccumulationBuffers@CDrawListPrimitiveBuilder@@IEAAXXZ @ 0x1801110D0
 * Callers:
 *     ?Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@$$QEAV?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@@Z @ 0x1801112A0 (-Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@$$QEAV-$SmartIfaceBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawListPrimitiveBuilder::ResetAccumulationBuffers(CDrawListPrimitiveBuilder *this)
{
  bool v1; // al

  v1 = 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 584) = 0;
  *((_DWORD *)this + 602) = 0;
  if ( !*((_BYTE *)this + 29) || (*((_BYTE *)this + 24) & 0x20) != 0 )
    v1 = CCommonRegistryData::m_fEnableCpuClipping != 0;
  *((_BYTE *)this + 2414) = v1;
}
