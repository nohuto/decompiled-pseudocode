/*
 * XREFs of ExIsSafeWorkItem @ 0x14014D4B0
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x14020E3F0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_14014DF14;
}
