/*
 * XREFs of ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x18002D260
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180030510 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18007899C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 * Callees:
 *     floor_0 @ 0x18004988A (floor_0.c)
 */

void __fastcall CWindowList::GetPhysicalPtFromLogical(
        CWindowList *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        int *a4,
        int *a5)
{
  LONG left; // edi
  LONG top; // esi
  float v9; // xmm2_4

  left = a3->left;
  top = a3->top;
  if ( (double)*((int *)a2 + 74) != 0.0 || (double)*((int *)a2 + 75) != 0.0 )
  {
    left -= (int)floor_0((float)*((int *)a2 + 74) + 0.5);
    top -= (int)floor_0((float)*((int *)a2 + 75) + 0.5);
  }
  v9 = *((float *)a2 + 43);
  if ( v9 != 1.0 || *((float *)a2 + 44) != 1.0 )
  {
    left = (int)floor_0((float)((float)left * v9) + 0.5);
    top = (int)floor_0((float)((float)top * *((float *)a2 + 44)) + 0.5);
  }
  if ( (double)*((int *)a2 + 76) != 0.0 || (double)*((int *)a2 + 77) != 0.0 )
  {
    left += (int)floor_0((float)*((int *)a2 + 76) + 0.5);
    top += (int)floor_0((float)*((int *)a2 + 77) + 0.5);
  }
  *a5 = top;
  *a4 = left;
}
