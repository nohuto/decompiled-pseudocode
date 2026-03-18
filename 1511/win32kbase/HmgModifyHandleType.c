/*
 * XREFs of HmgModifyHandleType @ 0x1C005DC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  _QWORD **SystemArgument2; // rdx

  SystemArgument2 = (_QWORD **)WPP_MAIN_CB.Dpc.SystemArgument2;
  *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 12 * (unsigned __int16)a1 + 6) = WORD1(a1);
  *SystemArgument2[3 * (unsigned __int16)a1] = a1;
  return a1;
}
