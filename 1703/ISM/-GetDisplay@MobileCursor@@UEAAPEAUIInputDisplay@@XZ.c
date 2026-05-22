/*
 * XREFs of ?GetDisplay@MobileCursor@@UEAAPEAUIInputDisplay@@XZ @ 0x1800069F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInputDisplay *__fastcall MobileCursor::GetDisplay(MobileCursor *this)
{
  return (struct IInputDisplay *)*((_QWORD *)this + 4);
}
