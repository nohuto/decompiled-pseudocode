/*
 * XREFs of ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0019700
 * Callers:
 *     DxgkCompleteFStateTransitionCB @ 0x1C001D2F0 (DxgkCompleteFStateTransitionCB.c)
 * Callees:
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C001EE30 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     Template_xq @ 0x1C0027B38 (Template_xq.c)
 */

void __fastcall DXGADAPTER::CompleteFStateTransitionCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx

  if ( *((_QWORD *)this + 254) )
  {
    v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1020);
    v5 = *((_QWORD *)this + 253) + 520LL * v4;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      Template_xq(
        this,
        &Dxgk_CompleteFStateTransitionCB,
        a3,
        this,
        (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1020));
    *(_BYTE *)(v5 + 359) = 0;
    PoFxCompleteIdleState(*((_QWORD *)this + 254), v4);
    v6 = *(_QWORD *)(v5 + 512);
    if ( v6 )
    {
      if ( !*(_DWORD *)(v5 + 344) )
        DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v6 + 136));
    }
  }
}
