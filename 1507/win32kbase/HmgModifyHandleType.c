/*
 * XREFs of HmgModifyHandleType @ 0x1C0012F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1 + 12) = WORD1(a1);
  **(_QWORD **)(v1 + 24LL * (unsigned __int16)a1) = a1;
  return a1;
}
