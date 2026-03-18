/*
 * XREFs of ?CanDrawToIntermediate@CGdiSpriteBitmap@@WEA@EAA_NXZ @ 0x1800BD330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGdiSpriteBitmap::CanDrawToIntermediate(__int64 a1)
{
  return CDesktopTreeData::IsDesktop((CDesktopTreeData *)(a1 - 64));
}
