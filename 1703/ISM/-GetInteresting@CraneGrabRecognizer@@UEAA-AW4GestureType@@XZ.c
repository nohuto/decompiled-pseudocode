/*
 * XREFs of ?GetInteresting@CraneGrabRecognizer@@UEAA?AW4GestureType@@XZ @ 0x180039B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CraneGrabRecognizer::GetInteresting(__int64 a1)
{
  return *(_BYTE *)(a1 + 20) != 0 ? 0x8000 : 0;
}
