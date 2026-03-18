/*
 * XREFs of IsSysShadow @ 0x1C0128C54
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSysShadow(__int64 a1)
{
  return *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) == (unsigned __int16)gatomShadow;
}
