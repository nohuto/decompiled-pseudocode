/*
 * XREFs of EditionIsCompositeAppOrSelfDisabled @ 0x140221650
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140038250 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EditionIsCompositeAppOrSelfDisabled(const struct tagWND *a1, __int64 a2)
{
  return CoreWindowProp::IsCompositeAppOrSelfDisabled(a1, a2);
}
