/*
 * XREFs of ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     EngLockSurface @ 0x1C00308D0 (EngLockSurface.c)
 *     GreGetBounds @ 0x1C0030A80 (GreGetBounds.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     EngUnlockSurface @ 0x1C005EAD0 (EngUnlockSurface.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

void __fastcall RECALTUNLOCKSTACKBACKTRACE(unsigned int a1)
{
  struct tagAltStackTraceEntry **v1; // rsi
  __int64 v2; // rdi
  struct tagAltStackTraceEntry *v3; // rcx
  unsigned __int64 v4; // rbx

  v1 = gpentHmgrAltStacks;
  v2 = a1;
  if ( !gpentHmgrAltStacks[a1] )
    v1[a1] = (struct tagAltStackTraceEntry *)PALLOCMEM2(0x2008uLL, 1651729991LL, 1);
  v3 = v1[v2];
  if ( v3 )
  {
    v4 = (unsigned __int64)(*((_DWORD *)v3 + 1) & 0xF) << 8;
    memset((char *)v3 + v4 + 4104, 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)((char *)v1[v2] + v4 + 4104), 0x20u, 0);
    ++*((_DWORD *)gpentHmgrAltStacks[v2] + 1);
  }
}
