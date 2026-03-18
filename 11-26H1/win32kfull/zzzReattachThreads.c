/*
 * XREFs of zzzReattachThreads @ 0x140277664
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x140059894 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x140059A70 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x14005AAE8 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x14005AB28 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x14005ACF8 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x14008BAC4 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x140096DC8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x140153364 (zzzInputFocusReceivedWindowEvent.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1401C8AC8 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     UnpackAffectedThreadList @ 0x140219200 (UnpackAffectedThreadList.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140237ED4 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x140271878 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x14029D3F8 (-SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 */

void __fastcall zzzReattachThreads(__int64 a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  char v5; // si
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagTHREADINFO *v11; // r12
  __int64 UserSessionState; // rax
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *RecalcPtiFromListEntry; // rax
  tagQ *Flink; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct tagQMSG *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct tagWND *NextQueueWindow; // rax
  _BYTE v60[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v61; // [rsp+48h] [rbp-40h]
  struct tagTHREADINFO *v62; // [rsp+98h] [rbp+10h]

  v5 = a1;
  v62 = PtiCurrent(a1);
  v7 = v5 & 2;
  v8 = 0LL;
  v9 = *((_QWORD *)v62 + 58);
  v10 = *(_QWORD *)(v9 + 120);
  if ( v10 )
    v11 = *(struct tagTHREADINFO **)(v10 + 16);
  else
    v11 = *(struct tagTHREADINFO **)(v9 + 104);
  UserSessionState = W32GetUserSessionState(v6, v9);
  v13 = 1;
  v60[0] = 0;
  v61 = 0LL;
  ++*(_DWORD *)(UserSessionState + 70592);
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v60, v14);
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
  }
  else if ( !v7 && !a3 )
  {
    UnpackAffectedThreadList(v16, v15);
  }
  zzzRecalcThreadAttachment();
  v19 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18928);
  if ( !v19 )
    v19 = *((_QWORD *)v62 + 58);
  if ( tagQ::IsSingleThreadAttached((tagQ *)v19) )
    v19 = 0LL;
  else
    ++*(_DWORD *)(v19 + 440);
  v22 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v21, v20) + 18928)
    && (v24 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 18928), *(_QWORD *)(v24 + 128)) )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v24, v23) + 18928) + 128LL) + 16LL);
    v22 = *(_QWORD *)(v26 + 688);
    if ( !v22 )
    {
      v27 = W32GetUserSessionState(v26, v25);
      if ( !InAffectedThreadList(
              *(const struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(v27 + 18928) + 128LL) + 16LL),
              v28) )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 18928) + 128LL) + 16LL);
        v22 = *(_QWORD *)(v26 + 464);
      }
    }
    v24 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 18928);
    if ( *(_QWORD *)(v24 + 120) )
    {
      v24 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 18928);
      if ( *(_QWORD *)(v24 + 120) )
      {
        v24 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 18928);
        v8 = **(_QWORD **)(v24 + 120);
      }
    }
  }
  else
  {
    v13 = 0;
  }
  v29 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v24, v23) + 18936) )
  {
    v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 18936);
    if ( *(_QWORD *)(v33 + 136) )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 18936) + 136LL) + 16LL);
      v29 = *(_QWORD *)(v35 + 688);
      if ( !v29 )
      {
        v36 = W32GetUserSessionState(v35, v34);
        if ( !InAffectedThreadList(
                *(const struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(v36 + 18936) + 136LL) + 16LL),
                v37) )
          v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v39, v38) + 18936) + 136LL) + 16LL)
                          + 464LL);
      }
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      Flink = (tagQ *)RecalcPtiFromListEntry[43].Flink;
      if ( Flink == (tagQ *)RecalcPtiFromListEntry[29].Flink )
      {
        tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)RecalcPtiFromListEntry, 0LL);
      }
      else if ( Flink )
      {
        tagQ::zzzAttachToQueue(Flink, (struct tagTHREADINFO *)RecalcPtiFromListEntry, (struct tagQ *)v19);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v19 )
  {
    if ( !*(_DWORD *)(v19 + 440) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12152LL);
    v46 = *(struct tagQMSG **)(v19 + 24);
    --*(_DWORD *)(v19 + 440);
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_QWORD *)(v19 + 32) = 0LL;
    *(_QWORD *)(v19 + 56) = 0LL;
    *(_DWORD *)(v19 + 40) = 0;
    RedistributeInput(v46, (struct tagQ *)v19, v11);
    if ( !tagQ::IsAnyThreadAttached((tagQ *)v19) )
    {
      v44 = 0LL;
LABEL_47:
      zzzDestroyQueue(v45, v44);
      goto LABEL_48;
    }
    v47 = *(_QWORD *)(v19 + 96);
    if ( v47 && v19 != *(_QWORD *)(v47 + 464) )
      zzzDestroyQueue(v45, v47);
    v44 = *(_QWORD *)(v19 + 104);
    if ( v44 && v19 != *(_QWORD *)(v44 + 464) )
    {
      v45 = v19;
      goto LABEL_47;
    }
  }
LABEL_48:
  v49 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 19176);
  if ( *((_QWORD *)v62 + 61) == v49 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v49, v48) + 18928) != v22 )
    {
      if ( v22 )
        SetNewForegroundQueue(v22, 0LL);
      else
        ResetForegroundQueue(0LL, v50);
      *(_QWORD *)(W32GetUserSessionState(v53, v52) + 18936) = v29;
      if ( *(_QWORD *)(W32GetUserSessionState(v55, v54) + 18928) )
      {
        v51 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 18928);
        if ( *(_QWORD *)(v51 + 120) )
        {
          v51 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 18928);
          if ( *(_QWORD *)(v51 + 120) )
          {
            v51 = *(_QWORD *)(W32GetUserSessionState(v51, v50) + 18928);
            v56 = **(_QWORD **)(v51 + 120);
          }
          else
          {
            v56 = 0LL;
          }
          if ( v8 != v56 )
            zzzInputFocusReceivedWindowEvent(4LL, v50);
        }
      }
    }
    UnpackAffectedThreadList(v51, v50);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v60);
    zzzEndDeferWinEventNotify();
    if ( !*(_QWORD *)(W32GetUserSessionState(v58, v57) + 18928) && v13 )
    {
      NextQueueWindow = _GetNextQueueWindow(
                          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v62 + 61) + 8LL) + 24LL) + 112LL),
                          0,
                          0);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *((struct tagTHREADINFO **)NextQueueWindow + 2),
          *(struct tagQ **)(*((_QWORD *)NextQueueWindow + 2) + 464LL),
          6u,
          0LL,
          0,
          0LL,
          *(_QWORD *)NextQueueWindow,
          0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList(v49, v48);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v60);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v60);
  }
}
