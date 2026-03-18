/*
 * XREFs of HmgQueryAltLock @ 0x1C005BAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgQueryAltLock(unsigned __int16 a1)
{
  return *(unsigned int *)(*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * a1) + 8LL);
}
