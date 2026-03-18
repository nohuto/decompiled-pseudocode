/*
 * XREFs of ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01E74D8
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01E9BB8 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     ?CrossedTPButtonWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01E7228 (-CrossedTPButtonWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z.c)
 *     ?TraceLoggingPTPWarpBack@@YAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C021ECE8 (-TraceLoggingPTPWarpBack@@YAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 */

void __fastcall DoTPButtonWarpBack(struct tagTPSTATE *a1, int a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct tagTPSTATE *v4; // rdx
  union _LARGE_INTEGER v5; // rbx
  unsigned __int64 v6; // rsi

  if ( a2 == 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = (struct tagTPSTATE *)((char *)a1 + 1632);
    while ( a1 != v4 )
    {
      if ( (*((_DWORD *)a1 + 66) & 1) != 0 )
      {
        v5 = gliQpcFreq;
        v6 = PerformanceCounter.QuadPart - *((_QWORD *)a1 + 11);
        if ( v6 < gliQpcFreq.QuadPart * (unsigned int)dword_1C0328174 / 1000
          && !CrossedTPButtonWarpBackThreshold(a1, *(struct tagPOINT *)((char *)a1 + 8)) )
        {
          if ( v5.QuadPart )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TraceLoggingPTPWarpBack)(
              13LL,
              gptCursorAsync,
              *((_QWORD *)a1 + 3),
              1000 * v6 / v5.QuadPart);
          zzzInternalSetCursorPos(*((_DWORD *)a1 + 6), *((_DWORD *)a1 + 7), 2);
        }
        return;
      }
      a1 = (struct tagTPSTATE *)((char *)a1 + 272);
    }
  }
}
