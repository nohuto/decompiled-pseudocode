/*
 * XREFs of Simulator_EvaluateNode @ 0x1C0059C94
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0059AB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 */

__int64 __fastcall Simulator_EvaluateNode(__int64 a1)
{
  unsigned int NameSpaceObject; // esi

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16));
  DereferenceObjectEx(0LL);
  return NameSpaceObject;
}
