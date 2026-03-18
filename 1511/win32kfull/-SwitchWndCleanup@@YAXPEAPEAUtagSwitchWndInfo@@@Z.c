/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C020008C
 * Callers:
 *     RemoveThreadSwitchWindowInfo @ 0x1C00F3DA0 (RemoveThreadSwitchWindowInfo.c)
 *     RemoveSwitchWindowInfo @ 0x1C02011C0 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 */

void __fastcall SwitchWndCleanup(struct tagSwitchWndInfo **a1)
{
  struct tagBWL *v2; // rcx

  v2 = (struct tagBWL *)*((_QWORD *)*a1 + 2);
  if ( v2 )
    FreeHwndList(v2);
  Win32FreePool(*a1);
  *a1 = 0LL;
}
