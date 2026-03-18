/*
 * XREFs of ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004DB5C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180049B20 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall CVisual::GetInputHandle(CVisual *this)
{
  CInteraction *v1; // rcx
  void *result; // rax

  v1 = (CInteraction *)*((_QWORD *)this + 50);
  result = 0LL;
  if ( v1 )
    return CInteraction::GetInputHandle(v1);
  return result;
}
