/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01FF9DC
 * Callers:
 *     RemoveThreadSwitchWindowInfo @ 0x1C00EE760 (RemoveThreadSwitchWindowInfo.c)
 *     RemoveSwitchWindowInfo @ 0x1C0200E20 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 */

void __fastcall SwitchWndCleanup(struct tagSwitchWndInfo **a1)
{
  struct tagBWL *v2; // rcx

  v2 = (struct tagBWL *)*((_QWORD *)*a1 + 2);
  if ( v2 )
  {
    FreeHwndList(v2);
    *((_QWORD *)*a1 + 2) = 0LL;
  }
  Win32FreePool(*a1);
  *a1 = 0LL;
}
