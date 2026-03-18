/*
 * XREFs of VidSchDdiNotifyInterrupt @ 0x1C000CB00
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000CBB0 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000CE90 (VidSchiLogInterrupt.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 */

__int64 __fastcall VidSchDdiNotifyInterrupt(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  _QWORD *v9; // rax

  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 4015LL);
  result = DpiGetSchedulerCallbackState(a1);
  if ( (result & 2) != 0 )
  {
    result = DpiGetDxgAdapter(a1);
    v8 = result;
    if ( result )
    {
      result = *(_QWORD *)(result + 1992);
      v6 = *(_QWORD *)(result + 408);
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      VidSchiLogInterrupt(v6, a2, v7);
      if ( ((*a2 - 3) & 0xFFFFFFFB) == 0 && !*(_QWORD *)(v8 + 1984) )
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v9[3] = 281LL;
        v9[4] = 7LL;
        v9[5] = v8;
        v9[6] = 0LL;
        v9[7] = 0LL;
        WdLogEvent5_WdCriticalError(v9);
        JUMPOUT(0x1C001A001LL);
      }
      result = VidSchDdiNotifyInterruptWorker(*(_QWORD *)(v8 + 1992), a2, 1LL);
    }
  }
  if ( (qword_1C002F070 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    return Template_q(v6, &EventProfilerExit, v7, 4015LL);
  return result;
}
