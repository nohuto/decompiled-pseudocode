/*
 * XREFs of ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C0010F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::GetPinnedMode(DMMVIDPNTARGETMODESET *this)
{
  return (struct DMMVIDPNTARGETMODE *)*((_QWORD *)this + 18);
}
