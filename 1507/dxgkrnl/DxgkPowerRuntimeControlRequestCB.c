/*
 * XREFs of DxgkPowerRuntimeControlRequestCB @ 0x1C001D1B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pj @ 0x1C001B654 (Template_pj.c)
 */

__int64 __fastcall DxgkPowerRuntimeControlRequestCB(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rbx
  __int64 v12; // rax

  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 2504LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_pj(a1, &Dxgk_PowerRuntimeControlRequestCB, a3, v10, a2);
  if ( v10 )
  {
    a1 = *(_QWORD *)(v10 + 2016);
    if ( a1 )
      return PoFxPowerControl(a1, a2, a3, a4, a5, a6, a7);
  }
  v12 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v12 + 24) = 402LL;
  WdLogEvent5_WdError(v12);
  return 3221225473LL;
}
