/*
 * XREFs of NtGdiSTROBJ_bEnum @ 0x1C02AEBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSTROBJ_bEnum(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  return NtGdiSTROBJ_bEnumInternal(a1, a2, a3, 0);
}
