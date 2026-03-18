/*
 * XREFs of zzzReattachThreads @ 0x1C008B6B4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1C008AE54 (zzzAttachThreadInput.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E7124 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AA50 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00812CC (xxxApplyGlobalInputSettings.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C008B1E0 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C008B368 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C008BA28 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C008BABC (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C008BBA4 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C008BC0C (zzzAttachToQueue.c)
 *     zzzSetFMouseMoved @ 0x1C008BF80 (zzzSetFMouseMoved.c)
 *     ?UnpackAffectedThreadList@@YAXXZ @ 0x1C008BF9C (-UnpackAffectedThreadList@@YAXXZ.c)
 *     SetNewForegroundQueue @ 0x1C008E570 (SetNewForegroundQueue.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C01007F8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C0201368 (_GetNextQueueWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, struct _LIST_ENTRY **a3)
{
  int v3; // ebp
  int v6; // r12d
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ *v22; // rdx
  __int64 v23; // r8
  __int64 *v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  struct tagQMSG *v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *NextQueueWindow; // rax
  char v36; // [rsp+98h] [rbp+20h] BYREF

  v3 = a1 & 2;
  v6 = 1;
  v7 = a1 & 1;
  v8 = *(_QWORD *)(gptiCurrent + 384LL);
  v9 = *(_QWORD *)(v8 + 72);
  if ( v9 )
    v10 = *(struct tagTHREADINFO **)(v9 + 16);
  else
    v10 = *(struct tagTHREADINFO **)(v8 + 56);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v36);
  if ( v7 )
    goto LABEL_57;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_7;
  }
  if ( !v3 && !a3 )
  {
LABEL_57:
    UnpackAffectedThreadList();
    if ( v7 )
    {
      v11 = gpqForeground;
      goto LABEL_10;
    }
  }
LABEL_7:
  zzzRecalcThreadAttachment();
  v11 = gpqForeground;
  v12 = gpqForeground;
  if ( !gpqForeground )
    v12 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_DWORD *)(v12 + 336) != 1 )
  {
    ++*(_DWORD *)(v12 + 340);
    goto LABEL_11;
  }
LABEL_10:
  v12 = 0LL;
LABEL_11:
  v13 = 0LL;
  if ( *(_QWORD *)v11 && (v14 = *(_QWORD *)(*(_QWORD *)v11 + 80LL)) != 0 )
  {
    v15 = *(_QWORD *)(v14 + 16);
    v13 = *(_QWORD *)(v15 + 576);
    if ( !v13 && !InAffectedThreadList((const struct tagTHREADINFO *)v15) )
      v13 = *(_QWORD *)(v33 + 384);
  }
  else
  {
    v6 = 0;
  }
  v16 = 0LL;
  if ( gpqForegroundPrev )
  {
    v17 = *(_QWORD *)(gpqForegroundPrev + 88LL);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 16);
      v16 = *(_QWORD *)(v18 + 576);
      if ( !v16 && !InAffectedThreadList((const struct tagTHREADINFO *)v18) )
        v16 = *(_QWORD *)(v34 + 384);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      v22 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 72);
      if ( v22 == *((struct tagQ **)RecalcPtiFromListEntry + 48) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 72) = 0LL;
      }
      else if ( v22 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 72) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v22);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v12 )
  {
    v29 = *(struct tagQMSG **)v12;
    --*(_DWORD *)(v12 + 340);
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_DWORD *)(v12 + 16) = 0;
    RedistributeInput(v29, (struct tagQ *)v12, v10);
    v30 = *(_DWORD *)(v12 + 336);
    if ( v30 )
    {
      v31 = *(_QWORD *)(v12 + 48);
      if ( v31 && v12 != *(_QWORD *)(v31 + 384) )
      {
        *(_DWORD *)(v12 + 336) = v30 + 1;
        zzzDestroyQueue(v12);
      }
      v32 = *(_QWORD *)(v12 + 56);
      if ( !v32 || v12 == *(_QWORD *)(v32 + 384) )
        goto LABEL_24;
      ++*(_DWORD *)(v12 + 336);
    }
    else
    {
      *(_DWORD *)(v12 + 336) = 1;
    }
    zzzDestroyQueue(v12);
  }
LABEL_24:
  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v13);
    v23 = gpqForeground;
    gpqForegroundPrev = v16;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 72LL) )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
      {
        xxxApplyGlobalInputSettings(1);
        v23 = gpqForeground;
      }
      v24 = *(__int64 **)(*(_QWORD *)v23 + 72LL);
      v25 = *(_QWORD *)(v24[2] + 392);
      if ( v25 )
        v26 = *(_QWORD *)(v25 + 40);
      else
        LODWORD(v26) = 0;
      v27 = 33;
      if ( gdwDeferWinEvent )
        v27 = 35;
      xxxWindowEvent(0x80000002, v24, v26, 0, v27);
    }
    UnpackAffectedThreadList();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v36);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    if ( !gpqForeground && v6 )
    {
      NextQueueWindow = (__int64 *)GetNextQueueWindow(
                                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL)
                                               + 96LL),
                                     0LL,
                                     0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          NextQueueWindow[2],
          *(_QWORD *)(NextQueueWindow[2] + 384),
          6u,
          0LL,
          0,
          0LL,
          *NextQueueWindow,
          0LL);
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ((void (__fastcall *)(_QWORD, _QWORD))zzzSetFMouseMoved)((LARGE_INTEGER)PerformanceCounter.QuadPart, 0LL);
  }
  else
  {
    UnpackAffectedThreadList();
    v36 = 1;
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v36);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v36);
  }
}
