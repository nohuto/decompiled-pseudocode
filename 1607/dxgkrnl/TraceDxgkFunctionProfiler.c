/*
 * XREFs of TraceDxgkFunctionProfiler @ 0x1C0011B70
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

void __fastcall TraceDxgkFunctionProfiler(__int64 a1, char a2, __int64 a3)
{
  int v3; // ebx
  int v4; // r9d
  const EVENT_DESCRIPTOR *v5; // rdx
  __int64 v6; // rax

  v3 = a1;
  if ( a2 == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return;
    v4 = a1;
    v5 = (const EVENT_DESCRIPTOR *)&EventProfilerEnter;
    goto LABEL_11;
  }
  if ( a2 == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return;
    v4 = a1;
    v5 = (const EVENT_DESCRIPTOR *)&EventProfilerExit;
    goto LABEL_11;
  }
  if ( a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 2272LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
  {
    v4 = v3;
    v5 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
LABEL_11:
    Template_q(a1, v5, a3, v4);
  }
}
