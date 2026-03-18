/*
 * XREFs of ?_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z @ 0x1C006BFD0
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0043194 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E1B7C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     ?IsPointerMessage@@YAHI@Z @ 0x1C0001360 (-IsPointerMessage@@YAHI@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C006C090 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     ?LogQMsgMiPWorker@@YAHPEAUtagQMSG_HISTORY@@IPEBUtagMSG@@KH@Z @ 0x1C00E4368 (-LogQMsgMiPWorker@@YAHPEAUtagQMSG_HISTORY@@IPEBUtagMSG@@KH@Z.c)
 */

void __fastcall _LogQMsgMiP(unsigned int a1, const struct tagMSG *a2, unsigned int a3)
{
  struct tagQMSG_HISTORY *v3; // r10
  int v7; // r9d
  _DWORD *v8; // rax
  int v9; // ebp
  int v10; // ecx
  int v11; // eax
  _DWORD *i; // rcx

  v3 = gpQmsgHistory;
  if ( gpQmsgHistory
    && gpQmsgHistory2
    && (a1 >= 2 || (unsigned int)IsMiPMouseMessage(*((_DWORD *)a2 + 2)) || IsPointerMessage(v7)) )
  {
    v8 = &unk_1C02E1D00;
    v9 = 0;
    v10 = 0;
    while ( a1 != *v8 )
    {
      ++v10;
      ++v8;
      if ( v10 )
      {
        v11 = LogQMsgMiPWorker(v3, a1, a2, a3, -1);
        for ( i = &unk_1C02E1D08; a1 != *i; ++i )
        {
          if ( (unsigned int)++v9 >= 2 )
            return;
        }
        LogQMsgMiPWorker(gpQmsgHistory2, a1, a2, a3, v11);
        return;
      }
    }
  }
}
