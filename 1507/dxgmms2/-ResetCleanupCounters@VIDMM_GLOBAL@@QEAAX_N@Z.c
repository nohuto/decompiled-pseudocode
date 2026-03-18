/*
 * XREFs of ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004B2A8
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResetCleanupCounters(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rax

  if ( a2 || *((_QWORD *)this + 576) - *((_QWORD *)this + 886) > qword_1C00272D8 )
  {
    *((_QWORD *)this + 884) = 0LL;
    v2 = *((_QWORD *)this + 576);
    *((_DWORD *)this + 1770) = 0;
    *((_QWORD *)this + 886) = v2;
  }
}
