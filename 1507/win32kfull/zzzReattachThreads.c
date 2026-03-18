/*
 * XREFs of zzzReattachThreads @ 0x1C004392C
 * Callers:
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E6CB4 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0043194 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C0043750 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00438D8 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0043D04 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C0043D98 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C0043E80 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 *     ?UnpackAffectedThreadList@@YAXXZ @ 0x1C0044250 (-UnpackAffectedThreadList@@YAXXZ.c)
 *     zzzSetFMouseMoved @ 0x1C00442B0 (zzzSetFMouseMoved.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0046CF8 (xxxApplyGlobalInputSettings.c)
 *     SetNewForegroundQueue @ 0x1C0047320 (SetNewForegroundQueue.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0095484 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     _GetNextQueueWindow @ 0x1C0200FC8 (_GetNextQueueWindow.c)
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
  struct tagQMSG *v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *NextQueueWindow; // rax
  char v36; // [rsp+98h] [rbp+20h] BYREF

  v3 = a1 & 2;
  v6 = 1;
  v7 = a1 & 1;
  v8 = *(_QWORD *)(gptiCurrent + 392LL);
  v9 = *(_QWORD *)(v8 + 72);
  if ( v9 )
    v10 = *(struct tagTHREADINFO **)(v9 + 16);
  else
    v10 = *(struct tagTHREADINFO **)(v8 + 56);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v36);
  if ( v7 )
    goto LABEL_63;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_7;
  }
  if ( !v3 && !a3 )
  {
LABEL_63:
    UnpackAffectedThreadList();
    if ( v7 )
    {
      v11 = gpqForeground;
LABEL_43:
      v12 = 0LL;
      goto LABEL_11;
    }
  }
LABEL_7:
  zzzRecalcThreadAttachment();
  v11 = gpqForeground;
  v12 = gpqForeground;
  if ( !gpqForeground )
    v12 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( *(_DWORD *)(v12 + 336) == 1 )
    goto LABEL_43;
  ++*(_DWORD *)(v12 + 340);
LABEL_11:
  v13 = 0LL;
  if ( *(_QWORD *)v11 && (v14 = *(_QWORD *)(*(_QWORD *)v11 + 80LL)) != 0 )
  {
    v15 = *(_QWORD *)(v14 + 16);
    v13 = *(_QWORD *)(v15 + 584);
    if ( !v13 && !InAffectedThreadList((const struct tagTHREADINFO *)v15) )
      v13 = *(_QWORD *)(v33 + 392);
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
      v16 = *(_QWORD *)(v18 + 584);
      if ( !v16 && !InAffectedThreadList((const struct tagTHREADINFO *)v18) )
        v16 = *(_QWORD *)(v34 + 392);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      v22 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 73);
      if ( v22 == *((struct tagQ **)RecalcPtiFromListEntry + 49) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 73) = 0LL;
      }
      else if ( v22 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 73) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v22);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v12 )
  {
    v23 = *(struct tagQMSG **)v12;
    --*(_DWORD *)(v12 + 340);
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_DWORD *)(v12 + 16) = 0;
    RedistributeInput(v23, (struct tagQ *)v12, v10);
    v24 = *(_DWORD *)(v12 + 336);
    if ( !v24 )
    {
      *(_DWORD *)(v12 + 336) = 1;
LABEL_26:
      zzzDestroyQueue(v12);
      goto LABEL_27;
    }
    v31 = *(_QWORD *)(v12 + 48);
    if ( v31 && v12 != *(_QWORD *)(v31 + 392) )
    {
      *(_DWORD *)(v12 + 336) = v24 + 1;
      zzzDestroyQueue(v12);
    }
    v32 = *(_QWORD *)(v12 + 56);
    if ( v32 && v12 != *(_QWORD *)(v32 + 392) )
    {
      ++*(_DWORD *)(v12 + 336);
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( *(_QWORD *)(gptiCurrent + 416LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v13);
    v25 = gpqForeground;
    gpqForegroundPrev = v16;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 72LL) )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
      {
        xxxApplyGlobalInputSettings(1LL);
        v25 = gpqForeground;
      }
      v26 = *(_QWORD *)(*(_QWORD *)v25 + 72LL);
      v27 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 400LL);
      if ( v27 )
        v28 = *(_QWORD *)(v27 + 40);
      else
        LODWORD(v28) = 0;
      v29 = 33;
      if ( gdwDeferWinEvent )
        v29 = 35;
      xxxWindowEvent(-2147483646, v26, v28, 0, v29);
    }
    UnpackAffectedThreadList();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v36);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    if ( !gpqForeground && v6 )
    {
      NextQueueWindow = (__int64 *)GetNextQueueWindow(
                                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 16LL)
                                               + 96LL),
                                     0LL,
                                     0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          NextQueueWindow[2],
          *(_QWORD *)(NextQueueWindow[2] + 392),
          6,
          0,
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
