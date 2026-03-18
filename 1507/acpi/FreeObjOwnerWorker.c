/*
 * XREFs of FreeObjOwnerWorker @ 0x1C0044F20
 * Callers:
 *     <none>
 * Callees:
 *     FreeObjOwner @ 0x1C0044DE0 (FreeObjOwner.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  __int64 Count; // rbx

  Count = StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}
