/*
 * XREFs of ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8
 * Callers:
 *     xxxSetManipulationInputTarget @ 0x1C01C25B4 (xxxSetManipulationInputTarget.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0009F60 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01C12EC (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01E80CC (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01EEB4C (-CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z @ 0x1C01EEDC0 (-GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01EEE90 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F020C (-IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F04C8 (-NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F0AEC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F0CD4 (-ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F23E0 (-xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     CalcManipulationInputInfoSize @ 0x1C01F2F90 (CalcManipulationInputInfoSize.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F3918 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01F3CA4 (-GetPrevMsgId@PointerList@@YA_K_K@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     xxxClientCallManipulationThread @ 0x1C020C898 (xxxClientCallManipulationThread.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C023285C (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // ebx
  const struct tagPOINTERINFONODE *v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // esi
  int *v32; // rbx
  int v33; // ebp
  int v34; // r12d
  unsigned int v35; // edi
  __int64 PrevMsgId; // rax
  int v37; // eax
  int v38; // eax
  unsigned int v39; // edi
  __int64 i; // rbx
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // esi
  __int64 j; // rdi
  __int64 v45; // rbx
  __int64 v46; // rbp
  struct tagINPUTPOINTERNODE *NodeById; // rax
  struct tagHID_PAGEONLY_REQUEST **v48; // rax
  struct tagHID_PAGEONLY_REQUEST *k; // rcx
  unsigned int v50; // r12d
  unsigned int v51; // ebx
  unsigned int v52; // eax
  int v53; // edi
  unsigned int v54; // edi
  __int64 v55; // rbx
  unsigned int v56; // ebx
  __int64 m; // rdi
  __int64 v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // r12
  const struct tagPOINTERINFONODE *v61; // rcx
  int v62; // r8d
  unsigned int v63; // r10d
  __int16 v64; // r9
  __int64 v65; // r9
  int v66; // esi
  unsigned int v67; // ebx
  int v68; // edi
  unsigned __int16 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int v74; // [rsp+40h] [rbp-68h]
  int v75; // [rsp+44h] [rbp-64h]
  int v76; // [rsp+48h] [rbp-60h]
  unsigned __int64 v77; // [rsp+50h] [rbp-58h]
  _QWORD v78[10]; // [rsp+58h] [rbp-50h] BYREF
  int v81; // [rsp+C8h] [rbp+20h]

  HIBYTE(v5) = 0;
  v77 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( gptiCurrent == gptiDit && gptiManipulationThread )
  {
    if ( !a3 )
    {
      v8 = CountMTNodesReadyForRouting(a4);
      if ( v8 )
      {
        EtwTraceDwmManipulationFrameStart(*((unsigned int *)a4 + 8), *((unsigned int *)a4 + 10));
        PushW32ThreadLock((__int64)a4, v78, (__int64)DereferencePointerInputFrameAndMessageData, v9);
        v10 = CalcManipulationInputInfoSize(v8);
        xxxClientCallManipulationThread(v11, a4, v10);
        PopW32ThreadLock(v78, v12, v13, v14);
      }
      goto LABEL_13;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_13;
  }
  v15 = *((_DWORD *)a4 + 10);
  v16 = 0;
  v17 = (const struct tagPOINTERINFONODE *)*((_QWORD *)a4 + 11);
  if ( v15 )
  {
    v18 = v15;
    do
    {
      if ( (unsigned int)ShouldGenerateMessagesForNode(a4, v17) )
        ++v16;
      v17 = (const struct tagPOINTERINFONODE *)((char *)v17 + 216);
      --v18;
    }
    while ( v18 );
  }
  EtwTraceDwmManipulationFrameRouted(*((unsigned int *)a4 + 8), v16);
LABEL_13:
  v19 = *((_DWORD *)a4 + 18);
  if ( (v19 & 2) == 0 )
  {
    if ( (v19 & 0x10) == 0 )
      goto LABEL_28;
    if ( a3 )
      goto LABEL_28;
    PushW32ThreadLock((__int64)a4, v78, (__int64)DereferencePointerInputFrameAndMessageData, (__int64)a4);
    xxxProcessPointerPrimaryDown(a4);
    PopW32ThreadLock(v78, v20, v21, v22);
    if ( !a1 )
      goto LABEL_28;
    if ( !gpqForeground )
      goto LABEL_28;
    v23 = *(_QWORD *)(gptiCurrent + 376LL);
    v24 = *(_QWORD *)(gpqForeground + 380LL);
    v25 = *(_QWORD *)(v23 + 824);
    if ( !gbEnforceUIPI )
      goto LABEL_28;
    if ( (unsigned int)v25 > (unsigned int)v24 )
      goto LABEL_28;
    if ( (_DWORD)v25 == (_DWORD)v24 )
    {
      v26 = HIDWORD(v25);
      v27 = HIDWORD(v24);
      if ( (_DWORD)v26 == (_DWORD)v27 || (_DWORD)v26 == -1 || (_DWORD)v27 == -1 )
        goto LABEL_28;
    }
    if ( *(int *)(v23 + 12) < 0 || IsForegroundShellFrameQueueAccessible(gptiCurrent) )
    {
LABEL_28:
      if ( (*((_DWORD *)a4 + 18) & 4) == 0 || a3 )
      {
        EtwTraceBeginPointerFrameMessageGeneration(*((unsigned int *)a4 + 8), *((unsigned int *)a4 + 10));
        v31 = 0;
        v32 = (int *)*((_QWORD *)a4 + 11);
        v33 = 0;
        v76 = 0;
        v34 = 0;
        v74 = 0;
        v35 = 0;
        v75 = 0;
        v81 = 0;
        if ( *((_DWORD *)a4 + 10) )
        {
          do
          {
            if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)v32) )
            {
              PrevMsgId = PointerList::GetPrevMsgId(*((PointerList **)v32 + 2), v28);
              ProcessAndUnreferencePreviousInput((const struct tagPOINTERINFONODE *)v32, PrevMsgId, v77, a1, a2);
              v37 = *v32;
              if ( (*v32 & 0x1000) == 0 )
              {
                if ( (v37 & 8) != 0 )
                {
                  ++v31;
                }
                else if ( (v37 & 0x40) != 0 )
                {
                  ++v34;
                }
                v38 = v32[17];
                if ( (v38 & 1) != 0 )
                  ++v33;
                if ( (v38 & 2) == 0 )
                  ++v76;
                if ( (v38 & 0x10000) != 0 )
                {
                  ++v74;
                }
                else if ( (v38 & 0x40000) != 0 )
                {
                  ++v81;
                }
                else
                {
                  ++v75;
                }
              }
            }
            v32 += 54;
            ++v35;
          }
          while ( v35 < *((_DWORD *)a4 + 10) );
          if ( v31 || v34 || v33 )
          {
            v39 = 0;
            for ( i = *((_QWORD *)a4 + 11); v39 < *((_DWORD *)a4 + 10); ++v39 )
            {
              if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)i)
                && (*(_DWORD *)i & 0x1000) == 0 )
              {
                if ( (v28 = *(_QWORD *)(i + 16),
                      v41 = *((_QWORD *)a4 + 11) + 216LL * v39,
                      (*(_DWORD *)(v41 + 68) & 1) != 0)
                  || (v42 = *(_DWORD *)v41, (*(_DWORD *)v41 & 4) == 0) && (v42 & 8) != 0
                  || (v42 & 0x40) != 0 )
                {
                  GeneratePointerMessage(
                    (const struct tagPOINTERINFONODE *)v41,
                    v28,
                    585LL,
                    (unsigned int)v77,
                    a1,
                    a2,
                    0LL);
                }
              }
              i += 216LL;
            }
            if ( v34 )
            {
              v43 = 0;
              for ( j = *((_QWORD *)a4 + 11); v43 < *((_DWORD *)a4 + 10); ++v43 )
              {
                if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)j) )
                {
                  if ( (*(_DWORD *)j & 0x1000) == 0 )
                  {
                    v45 = *((_QWORD *)a4 + 11) + 216LL * v43;
                    if ( (*(_DWORD *)v45 & 0x40) != 0 )
                    {
                      GeneratePointerMessage(
                        (const struct tagPOINTERINFONODE *)(*((_QWORD *)a4 + 11) + 216LL * v43),
                        *(_QWORD *)(j + 16),
                        593LL,
                        (unsigned int)v77,
                        a1,
                        a2,
                        0LL);
                      v46 = *(_QWORD *)(v45 + 80);
                      NodeById = FindNodeById(*(_WORD *)(v45 + 60), 0, 0);
                      if ( NodeById )
                      {
                        v48 = (struct tagHID_PAGEONLY_REQUEST **)((char *)NodeById + 136);
                        if ( *v48 != (struct tagHID_PAGEONLY_REQUEST *)v48 )
                        {
                          for ( k = *v48;
                                k != (struct tagHID_PAGEONLY_REQUEST *)v48;
                                k = *(struct tagHID_PAGEONLY_REQUEST **)k )
                          {
                            if ( *((_QWORD *)k + 2) == v46 )
                            {
                              FreeHidPageOnlyRequest(k, v28, v29);
                              break;
                            }
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
        v50 = a1;
        if ( IsTouchpadDevice(*((_QWORD *)a4 + 7), v28, v29, v30) )
        {
          v51 = 0;
          v52 = v74;
          if ( (*((_DWORD *)a4 + 18) & 0x10) != 0 && v74 > 1 )
          {
            v51 = 0x2000;
            GeneratePointerInputMessages(a4, v77, a1, a2, 0x2000u, 0, a3);
            v52 = v74;
          }
          v53 = v81;
          if ( !v75 && v52 && v81 )
          {
            GeneratePointerInputMessages(a4, v77, a1, a2, 0x10000u, v51, a3);
            v51 |= 0x10000u;
          }
          GeneratePointerInputMessages(a4, v77, a1, a2, 0, v51, a3);
        }
        else
        {
          GeneratePointerInputMessages(a4, v77, a1, a2, 0, 0, a3);
          v53 = v81;
        }
        if ( v53 )
        {
          v54 = 0;
          v55 = *((_QWORD *)a4 + 11);
          if ( *((_DWORD *)a4 + 10) )
          {
            do
            {
              if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)v55)
                && (*(_DWORD *)v55 & 0x1000) == 0
                && (*(_DWORD *)(v55 + 68) & 0x40000) != 0 )
              {
                ProcessLostCaptureList(
                  *(_WORD *)(v55 + 60),
                  1,
                  a4,
                  v54,
                  (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
              }
              v55 += 216LL;
              ++v54;
            }
            while ( v54 < *((_DWORD *)a4 + 10) );
            v50 = a1;
          }
        }
        if ( v76 )
        {
          v56 = 0;
          for ( m = *((_QWORD *)a4 + 11); v56 < *((_DWORD *)a4 + 10); ++v56 )
          {
            if ( (unsigned int)ShouldGenerateMessagesForNode(a4, (const struct tagPOINTERINFONODE *)m) )
            {
              v58 = *(_QWORD *)(m + 16);
              v59 = *((_QWORD *)a4 + 11) + 216LL * v56;
              if ( (*(_DWORD *)(v59 + 68) & 2) == 0 )
              {
                if ( (*(_DWORD *)v59 & 0x1000) == 0 )
                  GeneratePointerMessage(
                    (const struct tagPOINTERINFONODE *)v59,
                    v58,
                    586LL,
                    (unsigned int)v77,
                    v50,
                    a2,
                    0LL);
                PointerList::UnreferenceMsgData(v58, 1LL);
              }
            }
            m += 216LL;
          }
        }
        EtwTraceEndPointerFrameMessageGeneration(*((unsigned int *)a4 + 8), *((unsigned int *)a4 + 10));
      }
    }
    else
    {
      EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
    }
  }
  if ( *(_DWORD *)(*((_QWORD *)a4 + 13) + 24LL) != 7 && ((*((_DWORD *)a4 + 18) & 8) != 0 || word_1C0328BB0) )
  {
    v60 = *((_QWORD *)a4 + 11);
    if ( *((_DWORD *)a4 + 10) )
    {
      while ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v60)
           || (*(_DWORD *)v60 & 0x1000) != 0
           || !(unsigned int)IsPointerInfoNodePrimary(v61) && v64 != *(_WORD *)(v60 + 60) )
      {
        v60 += 216LL;
        if ( v62 + 1 >= v63 )
          goto LABEL_108;
      }
    }
    else
    {
LABEL_108:
      v60 = 0LL;
    }
    if ( v60 && (unsigned int)NodeMatchesMTGeneration((const struct tagPOINTERINFONODE *)v60) )
    {
      LOBYTE(v5) = a1 != 0;
      v66 = (*(_DWORD *)v60 >> 13) & 4;
      v67 = (*(_DWORD *)v60 & 0x40u) >> 2;
      v68 = (*(_DWORD *)v60 >> 13) & 8;
      PushW32ThreadLock((__int64)a4, v78, (__int64)DereferencePointerInputFrameAndMessageData, v65);
      PointerPromotion::xxxProcessPointerInputAsMouse(
        (PointerPromotion *)(v60 + 56),
        (const struct tagPOINTER_INFO *)*(unsigned __int16 *)(v60 + 48),
        v68 | v67 | v66 | (a2 != 0 ? 2 : 0) | v5,
        v69);
      PopW32ThreadLock(v78, v70, v71, v72);
    }
  }
  return 1LL;
}
