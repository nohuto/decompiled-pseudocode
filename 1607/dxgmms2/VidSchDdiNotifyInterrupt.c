/*
 * XREFs of VidSchDdiNotifyInterrupt @ 0x1C000B7E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B8C0 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000BB40 (VidSchiLogInterrupt.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 */

__int64 __fastcall VidSchDdiNotifyInterrupt(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  _QWORD *v13; // rax

  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 4015LL);
  result = DpiGetSchedulerCallbackState(a1);
  if ( (result & 2) != 0 )
  {
    result = DpiGetDxgAdapter(a1);
    v8 = result;
    if ( result )
    {
      result = *(_QWORD *)(result + 2136);
      v6 = *(_QWORD *)(result + 384);
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      VidSchiLogInterrupt(v6, a2, v7);
      if ( *a2 <= 0xA )
      {
        v12 = 1160;
        if ( _bittest(&v12, *a2) )
        {
          if ( !*(_QWORD *)(v8 + 2128) )
          {
            v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(1160LL, v9, v10, v11);
            v13[3] = 281LL;
            v13[4] = 7LL;
            v13[5] = v8;
            v13[6] = 0LL;
            v13[7] = 0LL;
            WdLogEvent5_WdCriticalError(v13);
            JUMPOUT(0x1C000B8B8LL);
          }
        }
      }
      result = VidSchDdiNotifyInterruptWorker(*(_QWORD *)(v8 + 2136), a2, 1LL);
    }
  }
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    return Template_q(v6, &EventProfilerExit, v7, 4015LL);
  return result;
}
