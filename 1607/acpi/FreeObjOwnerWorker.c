/*
 * XREFs of FreeObjOwnerWorker @ 0x1C005C0D0
 * Callers:
 *     <none>
 * Callees:
 *     FreeObjOwner @ 0x1C005BF90 (FreeObjOwner.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  __int64 Count; // rbx

  Count = StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}
