/*
 * XREFs of ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C014D208
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0140238 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     Template_ppqqpqq @ 0x1C00103DC (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C00104A0 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0010554 (Template_ppqqpx.c)
 *     Template_pp @ 0x1C001E834 (Template_pp.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::ReportAdapterObjectState(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v7; // [rsp+50h] [rbp+7h]
  __int128 v8; // [rsp+90h] [rbp+47h]

  if ( bTracingEnabled )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v7 = *((_OWORD *)a2 + 8);
    v8 = *((_OWORD *)a2 + 12);
    v5 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v7 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_ppqqpt(DWORD2(v8), &EventReportSynchronizationMutex, a3, v4, a2, 4, DWORD1(v7), DWORD2(v8), DWORD2(v7));
    }
    else
    {
      v5 = (unsigned int)(v7 - 2);
      if ( (_DWORD)v7 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqpqq(
            DWORD2(v8),
            &EventReportSemaphore,
            a3,
            v4,
            a2,
            4,
            DWORD1(v7),
            DWORD2(v8),
            DWORD2(v7),
            HIDWORD(v7));
      }
      else
      {
        v5 = (unsigned int)(v7 - 3);
        if ( (_DWORD)v7 == 3 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_ppqqpx(DWORD2(v8), &EventReportFence, a3, v4, a2, 4, DWORD1(v7), DWORD2(v8), *((_QWORD *)&v7 + 1));
        }
        else
        {
          v5 = (unsigned int)(v7 - 4);
          if ( (_DWORD)v7 == 4 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_ppqqpx(
                DWORD2(v8),
                &EventReportCPUNotification,
                a3,
                v4,
                a2,
                4,
                DWORD1(v7),
                DWORD2(v8),
                *((_QWORD *)&v7 + 1));
          }
          else if ( (_DWORD)v7 == 5 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_ppqqpx(
                DWORD2(v8),
                &EventReportMonitoredFence,
                a3,
                v4,
                a2,
                4,
                DWORD1(v7),
                DWORD2(v8),
                *((_QWORD *)&v7 + 1));
          }
          else
          {
            v6 = WdLogNewEntry5_WdAssertion(v5, a2, a3, v4);
            *(_QWORD *)(v6 + 24) = 864LL;
            WdLogEvent5_WdAssertion(v6);
          }
        }
      }
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pp(v5, &EventReportSyncObject, a3, a2, *((unsigned int *)a2 + 18));
    }
  }
}
