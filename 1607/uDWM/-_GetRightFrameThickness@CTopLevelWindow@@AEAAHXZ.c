/*
 * XREFs of ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ @ 0x18006F1A8
 * Callers:
 *     ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18007E418 (-GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::_GetRightFrameThickness(CTopLevelWindow *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 154);
  if ( (int)result <= 0 )
    return *(unsigned int *)(*((_QWORD *)this + 93) + 96LL);
  return result;
}
