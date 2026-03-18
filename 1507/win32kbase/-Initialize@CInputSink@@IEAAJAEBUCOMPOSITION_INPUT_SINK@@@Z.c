/*
 * XREFs of ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK@@@Z @ 0x1C00220A4
 * Callers:
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0024AB0 (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 * Callees:
 *     ?InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ @ 0x1C0021EF8 (-InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ.c)
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z @ 0x1C002361C (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z.c)
 */

__int64 __fastcall CInputSink::Initialize(struct IInputQueue **this, const struct COMPOSITION_INPUT_SINK *a2)
{
  int InputQueue; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx

  InputQueue = CInputSink::CreateInputQueue((const struct COMPOSITION_INPUT_SINK *)((char *)a2 + 8), this + 6);
  if ( InputQueue < 0
    || (InputQueue = CInputSink::CreateInputQueue((const struct COMPOSITION_INPUT_SINK *)((char *)a2 + 56), this + 7),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue((const struct COMPOSITION_INPUT_SINK *)((char *)a2 + 104), this + 8),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue((const struct COMPOSITION_INPUT_SINK *)((char *)a2 + 152), this + 9),
        InputQueue < 0) )
  {
    CInputSink::InvalidateAndReleaseQueues((CInputSink *)this);
  }
  else
  {
    this[5] = (struct IInputQueue *)PsGetCurrentProcess(v6, v5);
    *((_DWORD *)this + 38) = *((_DWORD *)a2 + 1);
    *((_BYTE *)this + 32) = 1;
  }
  return (unsigned int)InputQueue;
}
