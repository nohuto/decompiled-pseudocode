/*
 * XREFs of ZwAlpcQueryInformation @ 0x140180090
 * Callers:
 *     VfZwAlpcQueryInformation @ 0x140755214 (VfZwAlpcQueryInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcQueryInformation(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
