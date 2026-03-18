/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x140151580
 * Callers:
 *     VfZwAlpcCreateSecurityContext @ 0x1406D1600 (VfZwAlpcCreateSecurityContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSecurityContext(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
