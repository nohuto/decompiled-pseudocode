/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0043194
 * Callers:
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 * Callees:
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z @ 0x1C006BFD0 (-_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D98E0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C01D1558 (FreeQEntry.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  struct tagTHREADINFO *v3; // rbx
  __int64 *v5; // r8
  __int64 v7; // rbp
  struct tagQMSG *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // r14
  struct tagQMSG *v12; // rbx
  struct tagQMSG *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  struct tagQMSG *v21; // rbx
  _QWORD *v22; // rcx

  v3 = a3;
  v5 = (__int64 *)*((_QWORD *)a2 + 9);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( v5 )
    v10 = *v5;
  else
    v10 = *((_QWORD *)a2 + 7);
  LogMDAQueueOp(168LL, v3, v10, 286331153LL);
  while ( a1 )
  {
    if ( (*(_DWORD *)(gptiCurrent + 1080LL) & 0x40000) != 0 )
    {
      LogMDAQueueOp(
        168LL,
        *((unsigned __int16 *)a1 + 16) | (unsigned __int64)(*((unsigned __int16 *)a1 + 12) << 16),
        *((_QWORD *)a1 + 12),
        255LL);
      v15 = *((_DWORD *)a1 + 6);
      if ( *((_QWORD *)a1 + 12) == gptiCurrent )
      {
        if ( v15 >= 0x100 && v15 <= 0x102 && v3 )
        {
          v19 = *((unsigned __int16 *)a1 + 16) | (unsigned __int64)((unsigned __int16)v15 << 16);
          *((_QWORD *)a1 + 12) = v3;
          LogMDAQueueOp(168LL, v19, v3, 1LL);
        }
      }
      else if ( v15 == 513 || v15 == 516 )
      {
        LOBYTE(v14) = 1;
        v20 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), v14);
        if ( v20 )
        {
          if ( *(_QWORD *)(v20 + 16) == gptiCurrent )
          {
            if ( (gdwPostMortemLogging & 1) != 0 )
              _LogQMsgMiP(0xA8u, (struct tagQMSG *)((char *)a1 + 16), 0);
            *((_QWORD *)a1 + 12) = gptiCurrent;
          }
        }
      }
    }
    v11 = v7;
    v7 = *((_QWORD *)a1 + 12);
    if ( *((_DWORD *)a1 + 22) == 4 )
      v7 = 0LL;
    if ( v7 )
    {
      if ( !v8 || v11 != v7 )
      {
        v9 = *(_QWORD *)(v7 + 392);
        v8 = *(struct tagQMSG **)(v9 + 8);
        if ( !v8 || *((_DWORD *)a1 + 12) - *((_DWORD *)v8 + 12) < 0 )
          v8 = *(struct tagQMSG **)(v7 + 392);
      }
      if ( *(_QWORD *)v8 )
      {
        do
        {
          v22 = *(_QWORD **)v8;
          if ( *((_DWORD *)a1 + 12) - *(_DWORD *)(*(_QWORD *)v8 + 48LL) < 0 )
            break;
          v8 = *(struct tagQMSG **)v8;
        }
        while ( *v22 );
      }
      v12 = a1;
      a1 = *(struct tagQMSG **)a1;
      *(_QWORD *)v12 = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 )
      {
        *((_QWORD *)v12 + 1) = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = v12;
      }
      else
      {
        *((_QWORD *)v12 + 1) = *(_QWORD *)(v9 + 8);
        *(_QWORD *)(v9 + 8) = v12;
      }
      *(_QWORD *)v8 = v12;
      v8 = v12;
      ++*(_DWORD *)(v9 + 16);
      if ( *((_DWORD *)v12 + 22) && (*(_WORD *)(*(_QWORD *)(v7 + 408) + 6LL) & 0x2000) == 0 )
        SetWakeBit(v7, 8256LL);
      v13 = (struct tagQMSG *)*((_QWORD *)a2 + 5);
      if ( v12 == v13 )
      {
        v16 = *(_QWORD *)(v7 + 392);
        if ( a2 != (struct tagQ *)v16 )
        {
          if ( !*(_QWORD *)(v16 + 40) )
            *(_QWORD *)(v16 + 40) = v13;
          *((_QWORD *)a2 + 5) = 0LL;
          v17 = *(_QWORD *)(v7 + 392);
          if ( !*(_QWORD *)(v17 + 24) )
          {
            v18 = *((_QWORD *)a2 + 3);
            if ( v18 )
            {
              if ( *(_QWORD *)(v18 + 392) == v17 )
              {
                *(_QWORD *)(v17 + 24) = v18;
                *((_QWORD *)a2 + 3) = 0LL;
              }
            }
          }
        }
      }
      if ( !a1 )
        return;
      *((_QWORD *)a1 + 1) = 0LL;
    }
    else
    {
      if ( *(_QWORD *)a1 )
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = 0LL;
      v21 = a1;
      a1 = *(struct tagQMSG **)a1;
      CleanEventMessage(v21);
      FreeQEntry(v21);
      v7 = v11;
    }
    v3 = a3;
  }
}
