/*
 * XREFs of BgkResumePrepare @ 0x1403CA94C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     BgGetContext @ 0x1407251F0 (BgGetContext.c)
 *     BgMarkHiberPhase @ 0x14072537C (BgMarkHiberPhase.c)
 *     BgkpLockBgfxCodeSection @ 0x140725674 (BgkpLockBgfxCodeSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14072572C (BgkpUnlockBgfxCodeSection.c)
 */

__int64 __fastcall BgkResumePrepare(PVOID MemoryMap)
{
  unsigned int v1; // ebx
  __int64 Context; // rax
  void *v4; // rdi
  void *v5; // r8
  _QWORD *v7; // rdi
  void *v8; // r8

  v1 = 0;
  if ( MemoryMap )
  {
    BgkpLockBgfxCodeSection();
    Context = BgGetContext();
    v4 = (void *)Context;
    if ( Context )
    {
      v5 = *(void **)(Context + 16);
      if ( v5 )
        PoSetHiberRange(MemoryMap, 0x8000u, v5, *(unsigned int *)(Context + 24), 0x4B494742u);
      Address = v4;
      return v1;
    }
    BgkpUnlockBgfxCodeSection();
    return (unsigned int)-1073741670;
  }
  v7 = Address;
  if ( !Address )
    return (unsigned int)-1073741670;
  PoSetHiberRange(0LL, 0x10000u, Address, *(unsigned int *)Address, 0);
  v8 = (void *)v7[2];
  if ( v8 )
    PoSetHiberRange(0LL, 0x10000u, v8, *((unsigned int *)v7 + 6), 0);
  return (unsigned int)BgMarkHiberPhase();
}
