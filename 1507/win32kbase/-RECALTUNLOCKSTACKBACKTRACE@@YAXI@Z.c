/*
 * XREFs of ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B3150
 * Callers:
 *     EngLockSurface @ 0x1C0008010 (EngLockSurface.c)
 *     EngUnlockSurface @ 0x1C0008310 (EngUnlockSurface.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0 (--1SURFMEM@@QEAA@XZ.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetBounds @ 0x1C0054F60 (GreGetBounds.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     memset @ 0x1C0085E40 (memset.c)
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
