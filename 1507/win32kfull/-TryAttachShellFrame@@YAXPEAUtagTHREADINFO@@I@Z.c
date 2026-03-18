/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E1B7C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     ?_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z @ 0x1C006BFD0 (-_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C006C090 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00C6028 (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D1534 (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // r14
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r9
  char v14; // al
  __int64 v15; // rdx
  struct _LARGE_STRING *v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v22[32]; // [rsp+38h] [rbp-20h] BYREF

  v2 = (_QWORD *)*((_QWORD *)a1 + 49);
  v4 = a2;
  if ( *((_DWORD *)v2 + 4) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v7 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 448) & 1) != 0
        || (v8 = *(_QWORD *)(ShellFrameThreadFromAssociation + 600)) != 0 && (*(_DWORD *)(v8 + 180) & 0x100000) != 0 )
      {
        LogMDAQueueOp(0xCEu, *(_QWORD *)(v7 + 600), 0LL, 0);
      }
      else
      {
        v9 = *(_DWORD *)(v6 + 1080);
        v10 = v9 & 0xFFE7FFFF | 0x100000;
        v11 = (v9 >> 20) & 1;
        *(_DWORD *)(v6 + 1080) = v10;
        DisassociateShellFrameAppThreads((struct tagTHREADINFO *)v6);
        while ( *v2 && IsMiPMouseMessage(*(_DWORD *)(*v2 + 24LL)) )
        {
          v14 = gdwPostMortemLogging;
          if ( (gdwPostMortemLogging & 1) != 0 )
          {
            _LogQMsgMiP(0xB0u, (const struct tagMSG *)(v12 + 16), 0);
            v14 = gdwPostMortemLogging;
          }
          if ( *v2 == v2[4] )
          {
            if ( (v14 & 1) != 0 )
              _LogQMsgMiP(0xB0u, (const struct tagMSG *)(*v2 + 16LL), 1u);
            v2[4] = 0LL;
            v14 = gdwPostMortemLogging;
          }
          if ( *v2 == v2[5] )
          {
            if ( (v14 & 1) != 0 )
              _LogQMsgMiP(0xB0u, (const struct tagMSG *)(*v2 + 16LL), 2u);
            v2[5] = 0LL;
          }
          DelQEntry((__int64)v2, (__int64 *)*v2, 1LL, v13);
        }
        if ( (struct tagTHREADINFO *)v2[3] == a1 )
          v2[3] = 0LL;
        v15 = v2[9];
        v21[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v21;
        v21[1] = v15;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        LockW32Thread(v7, (__int64)v22);
        LogMDAQueueOp(
          0xA2u,
          v4,
          *(unsigned __int16 *)(*((_QWORD *)a1 + 49) + 148LL) | (unsigned __int64)(*(unsigned __int16 *)(*((_QWORD *)a1 + 49) + 144LL) << 16),
          0xFFu);
        v16 = (struct _LARGE_STRING *)(int)zzzAttachThreadInput((__int64)a1, v7, 32769);
        v17 = *((_QWORD *)a1 + 49);
        v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(v17 + 424) = v18;
        v19 = ThreadUnlock1(v17, v18);
        HMAssignmentLock(*((_QWORD *)a1 + 49) + 72LL, v19);
        LogMDAQueueOp(
          0xA2u,
          v19,
          *(unsigned __int16 *)(*((_QWORD *)a1 + 49) + 148LL) | (unsigned __int64)(*(unsigned __int16 *)(*((_QWORD *)a1 + 49) + 144LL) << 16),
          0xFFFFFu);
        v20 = *(_QWORD *)(v7 + 1232);
        if ( v20 )
          PostMessage(v20, 0x348u, 2uLL, v16);
        PopAndFreeW32ThreadLock((__int64)v22);
        *((_DWORD *)a1 + 270) ^= (*((_DWORD *)a1 + 270) ^ (v11 << 20)) & 0x100000;
      }
    }
  }
}
