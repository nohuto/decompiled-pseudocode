/*
 * XREFs of MNAllocPopup @ 0x1C01063A4
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNStartMenuState @ 0x1C01FCFB8 (xxxMNStartMenuState.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
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
