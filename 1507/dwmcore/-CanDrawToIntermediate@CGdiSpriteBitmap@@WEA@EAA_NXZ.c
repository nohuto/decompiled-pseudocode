/*
 * XREFs of ?CanDrawToIntermediate@CGdiSpriteBitmap@@WEA@EAA_NXZ @ 0x18009A6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGdiSpriteBitmap::CanDrawToIntermediate(__int64 a1)
{
  return CDesktopTreeData::IsDesktop((CDesktopTreeData *)(a1 - 64));
}
