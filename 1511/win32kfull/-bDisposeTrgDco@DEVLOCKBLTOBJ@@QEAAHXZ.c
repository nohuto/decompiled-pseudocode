/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C01C307C
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0263C28 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0030434 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  DC **v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rax

  v1 = (DC **)((char *)this + 80);
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( (*((_DWORD *)this + 18) & 0x10) != 0 )
    {
      *(_DWORD *)(v2 + 36) &= ~0x4000u;
      *((_QWORD *)*v1 + 64) = *(_QWORD *)(v3 + 2576);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    XDCOBJ::vUnlock((XDCOBJ *)v1);
    *v1 = 0LL;
  }
  return 1LL;
}
