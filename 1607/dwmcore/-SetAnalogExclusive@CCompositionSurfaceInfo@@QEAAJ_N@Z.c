/*
 * XREFs of ?SetAnalogExclusive@CCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180152960
 * Callers:
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x180165444 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165588 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3 | 0x10000000, 0x361u);
  }
  return v2;
}
