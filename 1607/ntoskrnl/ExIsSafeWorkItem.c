/*
 * XREFs of ExIsSafeWorkItem @ 0x140156D90
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1402260D0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1401578A4;
}
