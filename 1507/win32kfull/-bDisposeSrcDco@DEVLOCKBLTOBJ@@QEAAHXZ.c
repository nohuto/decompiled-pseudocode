/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00187BC
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0265430 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0018920 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // rbx
  __int64 CurrentProcess; // rax

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 168);
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      *(_QWORD *)(*(_QWORD *)v1 + 512LL) = *(_QWORD *)(v4 + 2576);
    }
    v5 = *((_QWORD *)this + 27);
    if ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 72);
      CurrentProcess = PsGetCurrentProcess();
      MmUnmapViewOfSection(CurrentProcess, v7);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    XDCOBJ::vUnlock(v1);
    *(_QWORD *)v1 = 0LL;
  }
  return 1LL;
}
