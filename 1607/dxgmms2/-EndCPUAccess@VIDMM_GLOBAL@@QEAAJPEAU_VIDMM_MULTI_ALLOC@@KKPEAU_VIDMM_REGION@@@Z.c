/*
 * XREFs of ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C0057994
 * Callers:
 *     VidMmEndCPUAccess @ 0x1C0011BA0 (VidMmEndCPUAccess.c)
 * Callees:
 *     Template_ppq @ 0x1C001E3E4 (Template_ppq.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EndCPUAccess(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  int v14; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v5 = (unsigned int)a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = v5;
  }
  if ( (v5 & 0xFFFFFFFE) != 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 7262LL;
    WdLogEvent5_WdAssertion(v10);
    return 3221225712LL;
  }
  v8 = **a2;
  if ( !*(_DWORD *)(v8 + 344) )
  {
    v11 = WdLogNewEntry5_WdWarning(v8);
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(v8 + 84) & 0x20) != 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8, a2);
    *(_QWORD *)(v12 + 24) = 7278LL;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 344));
  if ( bTracingEnabled )
  {
    v13 = a2[1];
    if ( v13 )
      v4 = v13[3];
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v14 = v5;
      Template_ppq(v8, &EventUnlock, a3, v4, a2, v14);
    }
  }
  return 0LL;
}
