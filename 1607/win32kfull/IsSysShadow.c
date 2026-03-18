/*
 * XREFs of IsSysShadow @ 0x1C0224E50
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxAddShadow @ 0x1C0138D4C (xxxAddShadow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSysShadow(__int64 a1)
{
  return *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) == (unsigned __int16)gatomShadow;
}
