/*
 * XREFs of ZwAlpcCreateResourceReserve @ 0x140151540
 * Callers:
 *     VfZwAlpcCreateResourceReserve @ 0x1406D1558 (VfZwAlpcCreateResourceReserve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateResourceReserve(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
