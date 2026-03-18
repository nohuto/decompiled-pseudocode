/*
 * XREFs of ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180035B7C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000B398 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180037008 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x18005A05C (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 */

void *__fastcall CVisual::GetInputHandle(CVisual *this)
{
  CInteraction *v1; // rcx
  void *result; // rax

  v1 = (CInteraction *)*((_QWORD *)this + 52);
  result = 0LL;
  if ( v1 )
    return CInteraction::GetInputHandle(v1);
  return result;
}
