/*
 * XREFs of ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00BF9D0
 * Callers:
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00BF998 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?ReleaseVidPnSourceOwnership@DXGDODPRESENT@@QEAAXI@Z @ 0x1C015EACC (-ReleaseVidPnSourceOwnership@DXGDODPRESENT@@QEAAXI@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C015F060 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00BFBCC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::Flush(BLTQUEUE *this)
{
  __int64 v2; // rbp
  __int64 v3; // rbx

  if ( *((_QWORD *)this + 37) )
  {
    v2 = *((unsigned int *)this + 144);
    if ( KeReadStateEvent(*((PRKEVENT *)this + 31)) )
      *((_DWORD *)this + 166) |= 1u;
    *((LARGE_INTEGER *)this + 5 * v2 + 73) = KeQueryPerformanceCounter(0LL);
    *((_BYTE *)this + 261) = 1;
    BLTQUEUE::IssueCommand(this);
    *((LARGE_INTEGER *)this + 5 * v2 + 76) = KeQueryPerformanceCounter(0LL);
    v3 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 5 * v2 + 77) = v3 * KeQueryTimeIncrement();
    *((_DWORD *)this + 144) = ((_BYTE)v2 - 1) & 1;
  }
}
