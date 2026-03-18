/*
 * XREFs of MNAllocPopup @ 0x1C0133454
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNStartMenuState @ 0x1C01FD458 (xxxMNStartMenuState.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall MNAllocPopup(int a1)
{
  void *v1; // rbx

  if ( a1 || (gdwPUDFlags & 0x800000) != 0 )
  {
    v1 = (void *)Win32AllocPoolWithQuota(88LL, 1836086101LL);
  }
  else
  {
    gdwPUDFlags |= 0x800000u;
    v1 = (void *)gpopupMenu;
  }
  if ( v1 )
    memset(v1, 0, 0x58uLL);
  return v1;
}
