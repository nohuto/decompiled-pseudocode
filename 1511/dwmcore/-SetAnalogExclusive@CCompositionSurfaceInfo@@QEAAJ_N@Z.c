/*
 * XREFs of ?SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1801305D8
 * Callers:
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x18013B2A8 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B3E4 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::SetAnalogExclusive(CCompositionSurfaceInfo *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  v3 = NtSetCompositionSurfaceAnalogExclusive(*((_QWORD *)this + 4), a2);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3 | 0x10000000, 0x343u);
  }
  return v2;
}
