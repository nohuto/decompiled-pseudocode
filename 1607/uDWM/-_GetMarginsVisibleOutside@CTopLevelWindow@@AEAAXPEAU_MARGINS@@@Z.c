/*
 * XREFs of ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEAAXPEAU_MARGINS@@@Z @ 0x18006F1C4
 * Callers:
 *     ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18007E418 (-GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::_GetMarginsVisibleOutside(CTopLevelWindow *this, struct _MARGINS *a2)
{
  struct _MARGINS *v2; // rcx

  if ( (*((_BYTE *)this + 264) & 4) != 0 )
    v2 = (struct _MARGINS *)((char *)this + 660);
  else
    v2 = (struct _MARGINS *)((char *)this + 644);
  *a2 = *v2;
}
