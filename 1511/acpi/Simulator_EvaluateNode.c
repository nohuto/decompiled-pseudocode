/*
 * XREFs of Simulator_EvaluateNode @ 0x1C00425F4
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0042410 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 */

__int64 __fastcall Simulator_EvaluateNode(__int64 a1)
{
  unsigned int NameSpaceObject; // esi

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16));
  DereferenceObjectEx(0LL);
  return NameSpaceObject;
}
