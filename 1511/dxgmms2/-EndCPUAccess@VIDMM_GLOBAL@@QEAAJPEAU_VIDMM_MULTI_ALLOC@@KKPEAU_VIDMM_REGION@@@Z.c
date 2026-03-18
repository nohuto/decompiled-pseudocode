/*
 * XREFs of ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00501E0
 * Callers:
 *     VidMmEndCPUAccess @ 0x1C00144B0 (VidMmEndCPUAccess.c)
 * Callees:
 *     Template_ppq @ 0x1C001D070 (Template_ppq.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EndCPUAccess(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( (a4 & 0xFFFFFFFE) != 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = 7055LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225712LL;
  }
  v6 = **a2;
  if ( !*(_DWORD *)(v6 + 336) )
  {
    v7 = WdLogNewEntry5_WdWarning(v6);
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(v6 + 84) & 0x20) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, a2, a3, 0LL);
    *(_QWORD *)(v8 + 24) = 7071LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 336));
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_ppq(v6, &EventUnlock, a3);
  }
  return 0LL;
}
