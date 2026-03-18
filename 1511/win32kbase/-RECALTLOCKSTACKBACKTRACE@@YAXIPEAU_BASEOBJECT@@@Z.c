/*
 * XREFs of ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B5B74
 * Callers:
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 *     INC_SHARE_REF_CNT @ 0x1C006DCD0 (INC_SHARE_REF_CNT.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B5A60 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

void __fastcall RECALTLOCKSTACKBACKTRACE(unsigned int a1, struct _BASEOBJECT *a2)
{
  struct tagAltStackTraceEntry **v2; // rsi
  __int64 v4; // rdi
  struct tagAltStackTraceEntry *v5; // rcx
  struct tagAltStackTraceEntry *v6; // rcx
  unsigned __int64 v7; // rbx

  v2 = gpentHmgrAltStacks;
  v4 = a1;
  if ( !gpentHmgrAltStacks[a1] )
    v2[a1] = (struct tagAltStackTraceEntry *)PALLOCMEM2(0x2008uLL, 1651729991LL, 1);
  v5 = v2[v4];
  if ( v5 )
  {
    if ( *((_DWORD *)a2 + 2) == 1 )
      memset(v5, 0, 0x2008uLL);
    v6 = v2[v4];
    v7 = (unsigned __int64)(*(_DWORD *)v6 & 0xF) << 8;
    memset((char *)v6 + v7 + 8, 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)((char *)v2[v4] + v7 + 8), 0x20u, 0);
    ++*(_DWORD *)gpentHmgrAltStacks[v4];
  }
}
