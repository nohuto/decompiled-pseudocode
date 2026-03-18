/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F75E8
 * Callers:
 *     RemoveThreadSwitchWindowInfo @ 0x1C0114100 (RemoveThreadSwitchWindowInfo.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F84C0 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 */

void __fastcall SwitchWndCleanup(struct tagSwitchWndInfo **a1, __int64 a2, __int64 a3)
{
  struct tagBWL *v4; // rcx

  v4 = (struct tagBWL *)*((_QWORD *)*a1 + 2);
  if ( v4 )
  {
    FreeHwndList(v4);
    *((_QWORD *)*a1 + 2) = 0LL;
  }
  Win32FreePool(*a1, a2, a3);
  *a1 = 0LL;
}
