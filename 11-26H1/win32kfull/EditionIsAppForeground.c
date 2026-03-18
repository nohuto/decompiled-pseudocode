/*
 * XREFs of EditionIsAppForeground @ 0x14029DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1401CB2E8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EditionIsAppForeground(const struct tagWND *a1, __int64 a2)
{
  return CoreWindowProp::CompositeAppHasForeground(a1, a2);
}
