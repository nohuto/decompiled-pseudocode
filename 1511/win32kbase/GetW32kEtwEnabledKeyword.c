/*
 * XREFs of GetW32kEtwEnabledKeyword @ 0x1C00ACD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetW32kEtwEnabledKeyword()
{
  return *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
}
