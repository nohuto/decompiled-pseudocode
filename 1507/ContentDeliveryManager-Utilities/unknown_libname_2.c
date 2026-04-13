/*
 * XREFs of unknown_libname_2 @ 0x18000AD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002234C @ 0x18002234C (sub_18002234C.c)
 */

// Microsoft VisualC v7/14 64bit runtime
bool __fastcall unknown_libname_2(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  return ((unsigned __int16)sub_18002234C(a3, a1 + 16) & a2) != 0;
}
