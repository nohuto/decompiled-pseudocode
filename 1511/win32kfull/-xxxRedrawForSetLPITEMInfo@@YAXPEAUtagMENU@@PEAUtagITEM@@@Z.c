/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0072348
 * Callers:
 *     xxxInsertMenuItem @ 0x1C006E9E0 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00CC0DC (xxxSetMenuItemInfo.c)
 * Callees:
 *     MNIspItemValid @ 0x1C006EE3C (MNIspItemValid.c)
 *     MNGetPopupFromMenu @ 0x1C00723EC (MNGetPopupFromMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C00D2C50 (DwmGetClassStyle.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C570 (xxxMNUpdateShownMenu.c)
 */

void __fastcall xxxRedrawForSetLPITEMInfo(struct tagMENU *a1, struct tagITEM *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rax

  v4 = MNGetPopupFromMenu(a1, 0LL);
  if ( !v4 || (xxxMNUpdateShownMenu(v4, a2, 1LL), MNIspItemValid((__int64)a1, (__int64)a2)) )
  {
    if ( (*((_DWORD *)a1 + 10) & 0x100) != 0 && *((_DWORD *)a2 + 2) == 61536 )
    {
      v5 = *((_QWORD *)a1 + 9);
      if ( v5 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v5) )
        {
          DwmGetClassStyle(*((_QWORD *)a1 + 9));
          v10 = (void *)ReferenceDwmApiPort(v7, v6, v8, v9);
          DwmAsyncChildStyleChange(v10);
        }
      }
    }
  }
}
