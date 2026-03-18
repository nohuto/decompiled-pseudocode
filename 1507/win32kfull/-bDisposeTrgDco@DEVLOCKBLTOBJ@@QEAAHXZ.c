/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C001882C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0265430 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0018920 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rbx
  __int64 v2; // r8
  __int64 v4; // rax

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 48);
    if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
    {
      *(_DWORD *)(v2 + 36) &= ~0x4000u;
      *(_QWORD *)(*(_QWORD *)v1 + 512LL) = *(_QWORD *)(v4 + 2576);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    XDCOBJ::vUnlock(v1);
    *(_QWORD *)v1 = 0LL;
  }
  return 1LL;
}
