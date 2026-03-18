/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C01C2FF0
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0263C28 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0030434 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  DC **v4; // rdi
  __int64 v6; // rcx
  DC *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax

  v4 = (DC **)((char *)this + 96);
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
  {
    v7 = (DC *)*((unsigned int *)this + 18);
    v8 = *(_QWORD *)(v6 + 48);
    if ( ((unsigned __int8)v7 & 0x20) != 0 )
    {
      *(_DWORD *)(v6 + 36) &= ~0x4000u;
      v7 = *v4;
      v6 = *(_QWORD *)(v8 + 2576);
      *((_QWORD *)*v4 + 64) = v6;
    }
    v9 = *((_QWORD *)this + 14);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 72);
      CurrentProcess = PsGetCurrentProcess(v6, v7, a3, a4);
      MmUnmapViewOfSection(CurrentProcess, v10);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v4);
    XDCOBJ::vUnlock((XDCOBJ *)v4);
    *v4 = 0LL;
  }
  return 1LL;
}
