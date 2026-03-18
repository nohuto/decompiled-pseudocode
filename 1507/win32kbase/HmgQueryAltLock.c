/*
 * XREFs of HmgQueryAltLock @ 0x1C005E490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgQueryAltLock(unsigned __int16 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * a1) + 8LL);
}
