/*
 * XREFs of ?DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z @ 0x1C00BCCC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     Template_qqqqqqqttQ3 @ 0x1C001CC60 (Template_qqqqqqqttQ3.c)
 */

void __fastcall DxgkCddLogEvent(__int64 a1, char a2, struct _DXGKETW_PARAMS *a3)
{
  int v4; // edi
  int v5; // r9d
  const EVENT_DESCRIPTOR *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = a1;
  if ( (qword_1C00467F0 & 0x20) == 0 )
    return;
  if ( a3 )
  {
    if ( a2 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_qqqqqqqttQ3(
          a1,
          &EventExtendedProfilerEnter,
          (__int64)a3,
          a1,
          *(_DWORD *)a3,
          *((_DWORD *)a3 + 1),
          *((_DWORD *)a3 + 2),
          *((_DWORD *)a3 + 3),
          *((_DWORD *)a3 + 4),
          *((_DWORD *)a3 + 5),
          *((_DWORD *)a3 + 6),
          *((_DWORD *)a3 + 7),
          (__int64)a3 + 32);
    }
    else if ( a2 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_qqqqqqqttQ3(
          a1,
          &EventExtendedProfilerExit,
          (__int64)a3,
          a1,
          *(_DWORD *)a3,
          *((_DWORD *)a3 + 1),
          *((_DWORD *)a3 + 2),
          *((_DWORD *)a3 + 3),
          *((_DWORD *)a3 + 4),
          *((_DWORD *)a3 + 5),
          *((_DWORD *)a3 + 6),
          *((_DWORD *)a3 + 7),
          (__int64)a3 + 32);
    }
    else
    {
      if ( a2 )
      {
        v8 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v8 + 24) = 2311LL;
        WdLogEvent5_WdAssertion(v8);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_qqqqqqqttQ3(
          a1,
          &EventExtendedProfilerInfo,
          (__int64)a3,
          v4,
          *(_DWORD *)a3,
          *((_DWORD *)a3 + 1),
          *((_DWORD *)a3 + 2),
          *((_DWORD *)a3 + 3),
          *((_DWORD *)a3 + 4),
          *((_DWORD *)a3 + 5),
          *((_DWORD *)a3 + 6),
          *((_DWORD *)a3 + 7),
          (__int64)a3 + 32);
    }
  }
  else
  {
    if ( a2 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
        return;
      v5 = a1;
      v6 = &EventProfilerEnter;
      goto LABEL_14;
    }
    if ( a2 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
        return;
      v5 = a1;
      v6 = &EventProfilerExit;
LABEL_14:
      Template_q(a1, v6, (__int64)a3, v5);
      return;
    }
    if ( a2 )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v7 + 24) = 2272LL;
      WdLogEvent5_WdAssertion(v7);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    {
      v5 = v4;
      v6 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
      goto LABEL_14;
    }
  }
}
