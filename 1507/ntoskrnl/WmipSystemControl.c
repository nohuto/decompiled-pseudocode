/*
 * XREFs of WmipSystemControl @ 0x14052D89C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(a1, a1, a2);
}
