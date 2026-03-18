/*
 * XREFs of ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0114D38
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C0082B5C (xxxInternalKeyEventDirect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCurrentProcessDwm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  return IsProcessDwm(CurrentProcess);
}
