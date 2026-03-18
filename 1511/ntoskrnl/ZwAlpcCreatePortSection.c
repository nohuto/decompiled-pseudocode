/*
 * XREFs of ZwAlpcCreatePortSection @ 0x140151520
 * Callers:
 *     VfZwAlpcCreatePortSection @ 0x1406D14C4 (VfZwAlpcCreatePortSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePortSection(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
