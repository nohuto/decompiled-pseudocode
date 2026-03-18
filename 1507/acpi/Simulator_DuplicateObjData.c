/*
 * XREFs of Simulator_DuplicateObjData @ 0x1C0042B8C
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C00429F0 (Simulator_CallbackWorker.c)
 * Callees:
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 */

__int64 __fastcall Simulator_DuplicateObjData(__int64 a1)
{
  __int64 v3; // rdi

  if ( !a1 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 3221225485LL;
  FreeObjData(*(_QWORD *)(a1 + 16));
  return DupObjData(gpheapGlobal, v3, *(_QWORD *)(a1 + 24));
}
