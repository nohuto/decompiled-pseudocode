/*
 * XREFs of ExIsSafeWorkItem @ 0x140156820
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1402262A4 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_140157334;
}
