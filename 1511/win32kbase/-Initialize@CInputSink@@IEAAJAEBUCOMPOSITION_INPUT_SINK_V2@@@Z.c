/*
 * XREFs of ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C004A718
 * Callers:
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C004B400 (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 * Callees:
 *     ?InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ @ 0x1C004A554 (-InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ.c)
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z @ 0x1C004A850 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@PEAPEAVIInputQueue@@@Z.c)
 */

__int64 __fastcall CInputSink::Initialize(struct IInputQueue **this, const struct COMPOSITION_INPUT_SINK_V2 *a2)
{
  int InputQueue; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  InputQueue = CInputSink::CreateInputQueue((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 8), this + 6);
  if ( InputQueue < 0
    || (InputQueue = CInputSink::CreateInputQueue((const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 56), this + 7),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 104),
                       this + 8),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 152),
                       this + 9),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 200),
                       this + 10),
        InputQueue < 0) )
  {
    CInputSink::InvalidateAndReleaseQueues((CInputSink *)this);
  }
  else
  {
    this[5] = (struct IInputQueue *)PsGetCurrentProcess(v6, v5);
    *((_DWORD *)this + 40) = *((_DWORD *)a2 + 1);
    *((_BYTE *)this + 32) = 1;
  }
  return (unsigned int)InputQueue;
}
