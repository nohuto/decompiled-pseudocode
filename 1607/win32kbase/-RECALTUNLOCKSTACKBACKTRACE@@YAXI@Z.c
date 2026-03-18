/*
 * XREFs of ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C06FC
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall RECALTUNLOCKSTACKBACKTRACE(unsigned int a1)
{
  struct GdiHandleManager *v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx

  v1 = gpentHmgrAltStacks;
  v2 = a1;
  if ( !*((_QWORD *)gpentHmgrAltStacks + a1) )
    *((_QWORD *)v1 + a1) = PALLOCMEM2(0x2008uLL, 1651729991LL, 1);
  v3 = *((_QWORD *)v1 + v2);
  if ( v3 )
  {
    v4 = (unsigned __int64)(*(_DWORD *)(v3 + 4) & 0xF) << 8;
    memset((void *)(v4 + v3 + 4104), 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)(v4 + *((_QWORD *)v1 + v2) + 4104LL), 0x20u, 0);
    ++*(_DWORD *)(*((_QWORD *)gpentHmgrAltStacks + v2) + 4LL);
  }
}
