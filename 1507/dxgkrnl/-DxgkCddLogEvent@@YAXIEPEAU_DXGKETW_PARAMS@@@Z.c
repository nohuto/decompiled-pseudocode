/*
 * XREFs of ?DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z @ 0x1C00A91A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     Template_qqqqqqqttQ3 @ 0x1C001C94C (Template_qqqqqqqttQ3.c)
 */

void __fastcall DxgkCddLogEvent(__int64 a1, __int64 a2, struct _DXGKETW_PARAMS *a3, __int64 a4)
{
  int v5; // edi
  int v6; // r9d
  const EVENT_DESCRIPTOR *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax

  v5 = a1;
  if ( (qword_1C00467F0 & 0x20) == 0 )
    return;
  if ( a3 )
  {
    if ( (_BYTE)a2 == 1 )
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
    else if ( (_BYTE)a2 == 2 )
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
      if ( (_BYTE)a2 )
      {
        v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v9 + 24) = 2311LL;
        WdLogEvent5_WdAssertion(v9);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_qqqqqqqttQ3(
          a1,
          &EventExtendedProfilerInfo,
          (__int64)a3,
          v5,
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
    if ( (_BYTE)a2 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
        return;
      v6 = a1;
      v7 = &EventProfilerEnter;
      goto LABEL_14;
    }
    if ( (_BYTE)a2 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
        return;
      v6 = a1;
      v7 = &EventProfilerExit;
LABEL_14:
      Template_q(a1, v7, (__int64)a3, v6);
      return;
    }
    if ( (_BYTE)a2 )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
      *(_QWORD *)(v8 + 24) = 2272LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    {
      v6 = v5;
      v7 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
      goto LABEL_14;
    }
  }
}
