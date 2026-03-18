/*
 * XREFs of ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x1C00211FC
 * Callers:
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z @ 0x1C009F048 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsEqualRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  return a1->left == a2->left && a1->top == a2->top && a1->right == a2->right && a1->bottom == a2->bottom;
}
