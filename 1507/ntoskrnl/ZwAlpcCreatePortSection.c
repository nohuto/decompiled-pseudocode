/*
 * XREFs of ZwAlpcCreatePortSection @ 0x14017FEF0
 * Callers:
 *     VfZwAlpcCreatePortSection @ 0x14075508C (VfZwAlpcCreatePortSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePortSection(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
