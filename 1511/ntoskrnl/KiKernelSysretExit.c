/*
 * XREFs of KiKernelSysretExit @ 0x140225AC0
 * Callers:
 *     KiCallUserMode @ 0x140156DB0 (KiCallUserMode.c)
 *     KiSystemCall64 @ 0x140165400 (KiSystemCall64.c)
 *     KiUmsFastReturnToUser @ 0x140166140 (KiUmsFastReturnToUser.c)
 * Callees:
 *     <none>
 */

void KiKernelSysretExit()
{
  unsigned int ShadowFlags; // esp
  unsigned __int64 UserDirectoryTableBase; // rbp
  char v2; // sp

  ShadowFlags = KeGetPcr()->Prcb.ShadowFlags;
  if ( (ShadowFlags & 2) == 0 )
  {
    UserDirectoryTableBase = KeGetCurrentThread()->Process->UserDirectoryTableBase;
    if ( (UserDirectoryTableBase & 1) != 0 )
    {
      if ( (v2 & 1) != 0 )
        __writegsdword(0x7018u, KeGetPcr()->Prcb.ShadowFlags & 0xFFFFFFFE);
      else
        UserDirectoryTableBase |= 0x8000000000000000uLL;
    }
    __writecr3(UserDirectoryTableBase);
  }
  __asm
  {
    swapgs
    sysret
  }
}
