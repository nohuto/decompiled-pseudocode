/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0052C14
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C0052CB8 (xxxSetMenuItemInfo.c)
 * Callees:
 *     MNIspItemValid @ 0x1C0054FCC (MNIspItemValid.c)
 *     MNGetPopupFromMenu @ 0x1C005573C (MNGetPopupFromMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C005B8D0 (DwmGetClassStyle.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C3A0 (xxxMNUpdateShownMenu.c)
 */

void __fastcall xxxRedrawForSetLPITEMInfo(struct tagMENU *a1, struct tagITEM *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rax

  v4 = MNGetPopupFromMenu(a1, 0LL);
  if ( !v4 || (xxxMNUpdateShownMenu(v4, a2, 1LL), (unsigned __int8)MNIspItemValid(a1, a2)) )
  {
    if ( (*((_DWORD *)a1 + 10) & 0x100) != 0 && *((_DWORD *)a2 + 2) == 61536 )
    {
      v5 = *((_QWORD *)a1 + 9);
      if ( v5 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v5) )
        {
          DwmGetClassStyle(*((_QWORD *)a1 + 9));
          v6 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v6);
        }
      }
    }
  }
}
