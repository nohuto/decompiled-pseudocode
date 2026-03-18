/*
 * XREFs of ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F9F44
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01FBBC8 (xxxGeneratePointerInputMessages.c)
 *     xxxSetManipulationInputTarget @ 0x1C0230EE8 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0041278 (IsForegroundShellFrameQueueAccessible.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0132224 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB140 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01F1C8C (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F74B8 (-CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z @ 0x1C01F772C (-GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F77F4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8B3C (-IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F8E10 (-NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F943C (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F95F0 (-ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FAB54 (-xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     CalcManipulationInputInfoSize @ 0x1C01FB798 (CalcManipulationInputInfoSize.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC1E4 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01FC564 (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     xxxClientCallManipulationThread @ 0x1C0213E2C (xxxClientCallManipulationThread.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C022FB64 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C023AB70 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 */

__int64 __fastcall xxxGeneratePointerInputMessagesCore(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const struct tagPOINTERINPUTFRAME *a4)
{
  __int16 v5; // r14
  unsigned int v8; // ebx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  const struct tagPOINTERINFONODE *v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rbx
  int v24; // ebp
  int v25; // r12d
  unsigned int v26; // edi
  unsigned __int64 v27; // rdx
  __int64 PrevMsgId; // rax
  int v29; // eax
  unsigned int v30; // ebx
  __int64 i; // rdi
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // edi
  __int64 j; // rsi
  __int64 v36; // rbx
  __int64 v37; // rbp
  struct tagINPUTPOINTERNODE *NodeById; // rax
  struct tagHID_PAGEONLY_REQUEST **v39; // rax
  struct tagHID_PAGEONLY_REQUEST *k; // rcx
  unsigned int v41; // r12d
  unsigned int v42; // ebx
  unsigned int v43; // eax
  int v44; // edi
  unsigned int v45; // edi
  __int64 v46; // rbx
  unsigned int v47; // ebx
  __int64 m; // rdi
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // r12
  const struct tagPOINTERINFONODE *v52; // rcx
  int v53; // r9d
  unsigned int v54; // r10d
  __int16 v55; // r8
  int v56; // esi
  unsigned int v57; // ebx
  int v58; // edi
  unsigned __int16 v59; // r9
  unsigned int v61; // [rsp+40h] [rbp-68h]
  int v62; // [rsp+44h] [rbp-64h]
  int v63; // [rsp+48h] [rbp-60h]
  unsigned __int64 v64; // [rsp+50h] [rbp-58h]
  _QWORD v65[10]; // [rsp+58h] [rbp-50h] BYREF
  int v68; // [rsp+C8h] [rbp+20h]

  HIBYTE(v5) = 0;
  v64 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( gptiCurrent == gptiDit && gptiManipulationThread )
  {
    if ( !a3 )
    {
      v8 = CountMTNodesReadyForRouting(a4);
      if ( v8 )
      {
        EtwTraceDwmManipulationFrameStart(*(unsigned int *)(v9 + 16), *(unsigned int *)(v9 + 24));
        PushW32ThreadLock((__int64)a4, v65, (__int64)DereferencePointerInputFrame);
        v10 = CalcManipulationInputInfoSize(v8);
        xxxClientCallManipulationThread(v11, a4, v10);
        PopW32ThreadLock(v65);
      }
      goto LABEL_13;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_13;
  }
  v12 = *((_DWORD *)a4 + 6);
  v13 = 0;
  v14 = (const struct tagPOINTERINFONODE *)*((_QWORD *)a4 + 9);
  if ( v12 )
  {
    v15 = v12;
    do
    {
      if ( (unsigned int)ShouldGenerateMessagesForNode(a4, v14) )
        ++v13;
      v14 = (const struct tagPOINTERINFONODE *)((char *)v14 + 216);
      --v15;
    }
    while ( v15 );
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a4 + 4), v13);
LABEL_13:
  v16 = *((_DWORD *)a4 + 14);
  if ( (v16 & 2) == 0 )
  {
    if ( (v16 & 0x10) == 0 )
      goto LABEL_28;
    if ( a3 )
      goto LABEL_28;
    PushW32ThreadLock((__int64)a4, v65, (__int64)DereferencePointerInputFrame);
    xxxProcessPointerPrimaryDown(a4);
    PopW32ThreadLock(v65);
    if ( !a1 )
      goto LABEL_28;
    if ( !gpqForeground )
      goto LABEL_28;
    v17 = *(_QWORD *)(gptiCurrent + 384LL);
    v18 = *(_QWORD *)(gpqForeground + 372LL);
    v19 = *(_QWORD *)(v17 + 832);
    if ( !gbEnforceUIPI )
      goto LABEL_28;
    if ( (unsigned int)v19 > (unsigned int)v18 )
      goto LABEL_28;
    if ( (_DWORD)v19 == (_DWORD)v18 )
    {
      v20 = HIDWORD(v19);
      v21 = HIDWORD(v18);
      if ( (_DWORD)v20 == (_DWORD)v21 || (_DWORD)v20 == -1 || (_DWORD)v21 == -1 )
        goto LABEL_28;
    }
    if ( *(int *)(v17 + 12) < 0 || IsForegroundShellFrameQueueAccessible(gptiCurrent) )
    {
LABEL_28:
      if ( (*((_DWORD *)a4 + 14) & 4) == 0 || a3 )
      {
        EtwTraceBeginPointerFrameMessageGeneration(*((unsigned int *)a4 + 4), *((unsigned int *)a4 + 6));
        v22 = 0;
        v23 = *((_QWORD *)a4 + 9);
        v24 = 0;
        v63 = 0;
        v25 = 0;
        v61 = 0;
        v26 = 0;
        v62 = 0;
        v68 = 0;
        if ( *((_DWORD *)a4 + 6) )
        {
          do
          {
            if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)v23) )
            {
              PrevMsgId = PointerList::GetPrevMsgId(*(PointerList **)(v23 + 16), v27);
              ProcessAndUnreferencePreviousInput((const struct tagPOINTERINFONODE *)v23, PrevMsgId, v64, a1, a2);
              if ( (*(_DWORD *)v23 & 8) != 0 )
              {
                ++v22;
              }
              else if ( (*(_DWORD *)v23 & 0x40) != 0 )
              {
                ++v25;
              }
              v29 = *(_DWORD *)(v23 + 68);
              if ( (v29 & 1) != 0 )
                ++v24;
              if ( (v29 & 2) == 0 )
                ++v63;
              if ( (v29 & 0x10000) != 0 )
              {
                ++v61;
              }
              else if ( (v29 & 0x40000) != 0 )
              {
                ++v68;
              }
              else
              {
                ++v62;
              }
            }
            v23 += 216LL;
            ++v26;
          }
          while ( v26 < *((_DWORD *)a4 + 6) );
          if ( v22 || v25 || v24 )
          {
            v30 = 0;
            for ( i = *((_QWORD *)a4 + 9); v30 < *((_DWORD *)a4 + 6); ++v30 )
            {
              if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)i) )
              {
                if ( (v32 = *((_QWORD *)a4 + 9) + 216LL * v30, (*(_DWORD *)(v32 + 68) & 1) != 0)
                  || (v33 = *(_DWORD *)v32, (*(_DWORD *)v32 & 4) == 0) && (v33 & 8) != 0
                  || (v33 & 0x40) != 0 )
                {
                  GeneratePointerMessage(
                    (const struct tagPOINTERINFONODE *)v32,
                    *(_QWORD *)(i + 16),
                    0x249u,
                    v64,
                    a1,
                    a2,
                    0LL);
                }
              }
              i += 216LL;
            }
            if ( v25 )
            {
              v34 = 0;
              for ( j = *((_QWORD *)a4 + 9); v34 < *((_DWORD *)a4 + 6); ++v34 )
              {
                if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)j) )
                {
                  v36 = *((_QWORD *)a4 + 9) + 216LL * v34;
                  if ( (*(_DWORD *)v36 & 0x40) != 0 )
                  {
                    GeneratePointerMessage(
                      (const struct tagPOINTERINFONODE *)(*((_QWORD *)a4 + 9) + 216LL * v34),
                      *(_QWORD *)(j + 16),
                      0x251u,
                      v64,
                      a1,
                      a2,
                      0LL);
                    v37 = *(_QWORD *)(v36 + 80);
                    NodeById = FindNodeById(*(_WORD *)(v36 + 60), 0, 0);
                    if ( NodeById )
                    {
                      v39 = (struct tagHID_PAGEONLY_REQUEST **)((char *)NodeById + 136);
                      if ( *v39 != (struct tagHID_PAGEONLY_REQUEST *)v39 )
                      {
                        for ( k = *v39;
                              k != (struct tagHID_PAGEONLY_REQUEST *)v39;
                              k = *(struct tagHID_PAGEONLY_REQUEST **)k )
                        {
                          if ( *((_QWORD *)k + 2) == v37 )
                          {
                            FreeHidPageOnlyRequest(k);
                            break;
                          }
                        }
                      }
                    }
                  }
                }
                j += 216LL;
              }
            }
          }
        }
        v41 = a1;
        if ( IsTouchpadDevice(*((_QWORD *)a4 + 5)) )
        {
          v42 = 0;
          v43 = v61;
          if ( (*((_DWORD *)a4 + 14) & 0x10) != 0 && v61 > 1 )
          {
            v42 = 0x2000;
            GeneratePointerInputMessages(a4, v64, a1, a2, 0x2000u, 0, a3);
            v43 = v61;
          }
          v44 = v68;
          if ( !v62 && v43 && v68 )
          {
            GeneratePointerInputMessages(a4, v64, a1, a2, 0x10000u, v42, a3);
            v42 |= 0x10000u;
          }
          GeneratePointerInputMessages(a4, v64, a1, a2, 0, v42, a3);
        }
        else
        {
          GeneratePointerInputMessages(a4, v64, a1, a2, 0, 0, a3);
          v44 = v68;
        }
        if ( v44 )
        {
          v45 = 0;
          v46 = *((_QWORD *)a4 + 9);
          if ( *((_DWORD *)a4 + 6) )
          {
            do
            {
              if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)v46)
                && (*(_DWORD *)(v46 + 68) & 0x40000) != 0 )
              {
                ProcessLostCaptureList(
                  *(_WORD *)(v46 + 60),
                  1,
                  a4,
                  v45,
                  (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
              }
              v46 += 216LL;
              ++v45;
            }
            while ( v45 < *((_DWORD *)a4 + 6) );
            v41 = a1;
          }
        }
        if ( v63 )
        {
          v47 = 0;
          for ( m = *((_QWORD *)a4 + 9); v47 < *((_DWORD *)a4 + 6); ++v47 )
          {
            if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)m) )
            {
              v49 = *(_QWORD *)(m + 16);
              v50 = *((_QWORD *)a4 + 9) + 216LL * v47;
              if ( (*(_DWORD *)(v50 + 68) & 2) == 0 )
              {
                GeneratePointerMessage((const struct tagPOINTERINFONODE *)v50, v49, 0x24Au, v64, v41, a2, 0LL);
                PointerList::UnreferenceMsgData(v49, 1LL);
              }
            }
            m += 216LL;
          }
        }
        EtwTraceEndPointerFrameMessageGeneration(*((unsigned int *)a4 + 4), *((unsigned int *)a4 + 6));
      }
    }
    else
    {
      EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
    }
  }
  if ( *(_DWORD *)(*((_QWORD *)a4 + 11) + 24LL) != 8 && ((*((_DWORD *)a4 + 14) & 8) != 0 || word_1C0322C20) )
  {
    v51 = *((_QWORD *)a4 + 9);
    if ( *((_DWORD *)a4 + 6) )
    {
      while ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v51)
           || !(unsigned int)IsPointerInfoNodePrimary(v52) && v55 != *(_WORD *)(v51 + 60) )
      {
        v51 += 216LL;
        if ( v53 + 1 >= v54 )
          goto LABEL_101;
      }
    }
    else
    {
LABEL_101:
      v51 = 0LL;
    }
    if ( v51 && (unsigned int)NodeMatchesMTGeneration((const struct tagPOINTERINFONODE *)v51) )
    {
      LOBYTE(v5) = a1 != 0;
      v56 = (*(_DWORD *)v51 >> 12) & 4;
      v57 = (*(_DWORD *)v51 & 0x40u) >> 2;
      v58 = (*(_DWORD *)v51 >> 12) & 8;
      PushW32ThreadLock((__int64)a4, v65, (__int64)DereferencePointerInputFrame);
      PointerPromotion::xxxProcessPointerInputAsMouse(
        (PointerPromotion *)(v51 + 56),
        (const struct tagPOINTER_INFO *)*(unsigned __int16 *)(v51 + 48),
        v58 | v57 | v56 | (a2 != 0 ? 2 : 0) | v5,
        v59);
      PopW32ThreadLock(v65);
    }
  }
  return 1LL;
}
