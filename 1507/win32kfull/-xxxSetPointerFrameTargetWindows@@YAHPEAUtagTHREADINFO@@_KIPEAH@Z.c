/*
 * XREFs of ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01E1450 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     ThreadLockExchange @ 0x1C0062A1C (ThreadLockExchange.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB140 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8900 (-GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F89C0 (-IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z @ 0x1C01F8A98 (-IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z.c)
 *     ?IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8B60 (-IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8BDC (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F9518 (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F959C (-RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F98B4 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01F9B64 (-xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUta.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01FA66C (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FA850 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01FAA90 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01FC4E4 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01FC898 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01FC974 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 *     PointerSpeedHitTest @ 0x1C022D338 (PointerSpeedHitTest.c)
 *     ValidatePointerOffset @ 0x1C022D5F8 (ValidatePointerOffset.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C022D8DC (xxxPerformTargetingWithinPwnd.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C022F654 (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0230184 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall xxxSetPointerFrameTargetWindows(struct tagTHREADINFO *a1, __int64 a2, unsigned int a3, int *a4)
{
  struct tagTHREADINFO *v4; // r13
  unsigned int v5; // r14d
  struct tagPOINTERINPUTFRAME *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  const struct tagPOINTERINFONODE *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rdx
  struct tagPOINTERINFONODE *v15; // rcx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  struct tagPOINT *v19; // r8
  __int64 v20; // rsi
  __int64 MessageWindow; // rax
  struct tagWND *v22; // rax
  PointerList *v23; // rcx
  const struct tagPOINT *v24; // r8
  struct tagQ *NodeQueue; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // r14d
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool v30; // zf
  struct tagWND *v31; // rsi
  struct tagWND *v32; // rax
  PointerList *v33; // rcx
  int v34; // eax
  int v35; // eax
  struct tagWND *v36; // rcx
  struct tagWND *v37; // rax
  PointerList *v38; // rcx
  int v39; // eax
  unsigned int v40; // r13d
  __int64 v41; // r8
  unsigned int v42; // r15d
  PointerFrameList *v43; // r10
  __int64 v44; // r14
  __int64 v45; // r12
  __int64 v46; // rcx
  __int64 v47; // r8
  struct tagPOINTERINPUTFRAME *v48; // rax
  struct tagPOINT *v49; // [rsp+30h] [rbp-91h]
  int v50; // [rsp+50h] [rbp-71h]
  unsigned int v51; // [rsp+58h] [rbp-69h]
  unsigned int v52; // [rsp+5Ch] [rbp-65h] BYREF
  struct tagWND *v53; // [rsp+60h] [rbp-61h] BYREF
  int v54; // [rsp+68h] [rbp-59h]
  unsigned int v55; // [rsp+6Ch] [rbp-55h]
  int v56; // [rsp+70h] [rbp-51h]
  struct tagQ *QueueForCurrentNode; // [rsp+78h] [rbp-49h]
  struct tagPOINTERINPUTFRAME *v58; // [rsp+80h] [rbp-41h]
  struct tagPOINT v59; // [rsp+88h] [rbp-39h] BYREF
  struct tagPOINTERINFONODE *v60; // [rsp+90h] [rbp-31h]
  unsigned __int16 v61[4]; // [rsp+98h] [rbp-29h] BYREF
  int v62; // [rsp+A0h] [rbp-21h] BYREF
  _QWORD v63[3]; // [rsp+A8h] [rbp-19h] BYREF
  unsigned __int16 v64[4]; // [rsp+C0h] [rbp-1h] BYREF
  _QWORD v65[10]; // [rsp+C8h] [rbp+7h] BYREF

  v59.x = 0;
  v4 = a1;
  v5 = a3;
  *a4 = 0;
  v59.y = 0;
  if ( a3 == 595 )
    return 1LL;
  if ( !a2 )
    return 0LL;
  v7 = FindAndReferenceFrameById(*(_DWORD *)(a2 + 28));
  v58 = v7;
  v9 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  v10 = 1;
  if ( (*((_DWORD *)v7 + 14) & 0x20) != 0 )
    goto LABEL_106;
  v11 = (*((_DWORD *)v4 + 270) >> 13) & 1;
  v60 = (struct tagPOINTERINFONODE *)(*((_QWORD *)v7 + 9) + 216LL * *(unsigned int *)(v8 + 32));
  v55 = v11;
  v56 = IsNodeMessageDelegated(v60, v5);
  QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v56, v12);
  PushW32ThreadLock(v9, v65, (__int64)DereferencePointerInputFrame);
  v13 = 0;
  v54 = 1;
  v51 = 0;
  v14 = gptiCurrent;
  v15 = *(struct tagPOINTERINFONODE **)(gptiCurrent + 376LL);
  v63[0] = v15;
  *(_QWORD *)(gptiCurrent + 376LL) = v63;
  v63[1] = 0LL;
  v16 = *(_QWORD *)(v9 + 72);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_100;
  while ( !v11 || (*((_DWORD *)v4 + 270) & 0x2000) != 0 )
  {
    if ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v16) )
      goto LABEL_97;
    if ( (unsigned int)IsTargetSetForRetrieval(v4, (const struct tagPOINTERINFONODE *)v16) )
    {
      xxxHandleMTNodeTargetWindow((struct tagPOINTERINFONODE *)v16);
      v17 = *(_DWORD *)(v16 + 4);
      if ( (v17 & 0x100) == 0 || (v17 & 0x400) != 0 || *(_DWORD *)(v16 + 56) != 2 )
        goto LABEL_97;
      v18 = HMValidateHandleNoSecure(*(_QWORD *)(v16 + 80), 1);
      v53 = (struct tagWND *)v18;
      v20 = v18;
      if ( !v18 || *(struct tagTHREADINFO **)(v18 + 16) != v4 )
        goto LABEL_96;
      if ( (*(_DWORD *)(v16 + 68) & 0x10000) == 0 )
      {
        PointerList::GetPointerOffset((PointerList *)*(unsigned __int16 *)(v16 + 60), (unsigned __int16)v64, v19);
        v15 = *(struct tagPOINTERINFONODE **)v64;
        *(_QWORD *)(v16 + 36) = *(_QWORD *)v64;
        goto LABEL_96;
      }
      *(_DWORD *)(v16 + 4) |= 0x400u;
      MessageWindow = GetMessageWindow(v18);
      if ( *((_QWORD *)v15 + 11) == MessageWindow )
        goto LABEL_96;
      ThreadLockExchange((__int64)v15, (__int64)v63);
      xxxPerformTargetingWithinPwnd(v20, v16 + 48, v61);
      QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, a3, v56, v60);
      if ( QueueForCurrentNode )
      {
        if ( (unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v16) )
        {
          v22 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v16 + 80), 1);
          v23 = *(PointerList **)(v16 + 16);
          v53 = v22;
          if ( (unsigned int)RecheckPointerCapture(v23, v11, &v53, (int *)&v52) )
            ThreadLockExchange((__int64)v53, (__int64)v63);
          if ( (unsigned int)ValidatePointerOffset(*(_QWORD *)(v16 + 88), v16 + 48, *(_QWORD *)v61, v61) )
          {
            PointerList::SetPointerOffset((PointerList *)*(unsigned __int16 *)(v16 + 60), (unsigned __int16)v61, v24);
            *(_QWORD *)(v16 + 36) = *(_QWORD *)v61;
          }
        }
        goto LABEL_96;
      }
      goto LABEL_99;
    }
    v15 = v60;
    if ( *(_DWORD *)(v16 + 8) != *((_DWORD *)v60 + 2)
      || (struct tagPOINTERINFONODE *)v16 != v60
      && (!v11 && !(unsigned int)IsAnyNodeMessageNonDelegated((const struct tagPOINTERINFONODE *)v16)
       || (NodeQueue = GetNodeQueue((const struct tagPOINTERINFONODE *)v16, &v62), v62)
       || NodeQueue && NodeQueue != QueueForCurrentNode) )
    {
      v54 = 0;
      goto LABEL_97;
    }
    if ( (*((_DWORD *)v4 + 270) & 0x2000) != 0 )
    {
      if ( (unsigned int)RecheckPointerCapture(*(PointerList **)(v16 + 16), v11, &v53, (int *)&v52) )
      {
        v28 = (__int64)v53;
        v27 = v52;
      }
      else
      {
        v26 = *(_QWORD *)(v16 + 24);
        v27 = 1;
        v52 = 1;
        if ( v26 )
        {
          v28 = HMValidateHandleNoSecure(v26, 1);
          v53 = (struct tagWND *)v28;
        }
        else
        {
          v28 = 0LL;
          v53 = 0LL;
        }
        if ( v28 )
          goto LABEL_43;
        v28 = PointerSpeedHitTest(
                *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
                (struct tagPOINTEREVENTINT *)(v16 + 48),
                0LL,
                0LL);
        v53 = (struct tagWND *)v28;
      }
      if ( !v28 )
      {
LABEL_46:
        v5 = a3;
        goto LABEL_47;
      }
LABEL_43:
      if ( *(_QWORD *)(v28 + 312) )
      {
        LODWORD(v49) = 0;
        PointerFrameList::SetPointerInfoNodeTarget(
          (PointerFrameList *)v9,
          (const struct tagPOINTERINPUTFRAME *)v51,
          v28,
          (struct tagWND *)v27,
          &v59,
          v49,
          0,
          1,
          1,
          v50);
        v54 = 0;
        if ( (unsigned int)IsPointerInfoNodePrimaryDown((const struct tagPOINTERINFONODE *)v16) )
          PostEventMessageEx(
            *(_QWORD *)(v28 + 16),
            *(_QWORD *)(*(_QWORD *)(v28 + 16) + 392LL),
            0x14u,
            (LARGE_INTEGER *)v28,
            0,
            0LL,
            *(LARGE_INTEGER *)(v16 + 16),
            0LL);
        goto LABEL_96;
      }
      goto LABEL_46;
    }
LABEL_47:
    v29 = *(_QWORD *)(v9 + 80);
    if ( (*(_DWORD *)(v29 + 40LL * *(unsigned int *)(v16 + 8) + 20) & 1) != 0 && (*((_DWORD *)v4 + 270) & 0x2000) == 0 )
      *(_DWORD *)(v29 + 40LL * *(unsigned int *)(v16 + 8) + 20) &= ~1u;
    v30 = *(_DWORD *)(v16 + 56) == 5;
    v52 = 1;
    if ( v30 )
    {
      if ( !(unsigned int)xxxDetermineTouchpadPointerTargetWindow(
                            v4,
                            (const struct tagPOINTERINPUTFRAME *)v9,
                            (const struct tagPOINTERINFONODE *)v16,
                            QueueForCurrentNode,
                            v51,
                            v11,
                            (int *)&v52,
                            &v59,
                            &v53) )
        goto LABEL_96;
      v31 = v53;
    }
    else
    {
      v31 = xxxDeterminePointerTargetWindow(
              v4,
              (const struct tagPOINTERINFONODE *)v16,
              QueueForCurrentNode,
              v11,
              (int *)&v52,
              &v59);
      v53 = v31;
    }
    QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v56, v60);
    if ( !QueueForCurrentNode )
      goto LABEL_99;
    if ( !(unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v16) )
      goto LABEL_96;
    ThreadLockExchange((__int64)v31, (__int64)v63);
    if ( !v31 )
      goto LABEL_75;
    if ( (*(_DWORD *)(v16 + 68) & 0x10000) != 0 && *(_DWORD *)(v16 + 56) != 5 && (*(_DWORD *)(v16 + 4) & 0x40) == 0 )
    {
      xxxPointerParentNotify(v31, (const struct tagPOINTERINFONODE *)v16);
      QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v56, v60);
      if ( !QueueForCurrentNode )
        goto LABEL_99;
      if ( !(unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v16) )
        goto LABEL_96;
      v32 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v31, 1);
      v33 = *(PointerList **)(v16 + 16);
      v53 = v32;
      v34 = RecheckPointerCapture(v33, v11, &v53, (int *)&v52);
      v31 = v53;
      if ( v34 )
        ThreadLockExchange((__int64)v53, (__int64)v63);
    }
    if ( !v31 )
      goto LABEL_75;
    v35 = *(_DWORD *)(v16 + 68);
    if ( (v35 & 0x10000) == 0 || (v35 & 0x2000) == 0 )
      goto LABEL_75;
    if ( (*(_DWORD *)(v16 + 4) & 0x40) != 0
      && (*((_QWORD *)v31 + 11) != GetMessageWindow((__int64)v31) || !GetCompositionInputWindowUIOwner(v36))
      && (*((_BYTE *)v31 + 291) & 4) == 0 )
    {
      goto LABEL_75;
    }
    *(_DWORD *)(216LL * v51 + *(_QWORD *)(v9 + 72) + 32) = v52;
    xxxPointerActivate(v31, (const struct tagPOINTERINFONODE *)v16);
    QueueForCurrentNode = GetQueueForCurrentNode(v4, v11, v5, v56, v60);
    if ( !QueueForCurrentNode )
    {
LABEL_99:
      *a4 = 1;
      v10 = 0;
      break;
    }
    if ( !(unsigned int)RevalidateFrameProcessing(v4, v11, (const struct tagPOINTERINFONODE *)v16) )
      goto LABEL_96;
    v37 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v31, 1);
    v38 = *(PointerList **)(v16 + 16);
    v53 = v37;
    v39 = RecheckPointerCapture(v38, v11, &v53, (int *)&v52);
    v31 = v53;
    if ( v39 )
      ThreadLockExchange((__int64)v53, (__int64)v63);
LABEL_75:
    v40 = v52;
    LODWORD(v49) = 0;
    PointerFrameList::SetPointerInfoNodeTarget(
      (PointerFrameList *)v9,
      (const struct tagPOINTERINPUTFRAME *)v51,
      (unsigned int)v31,
      (struct tagWND *)v52,
      &v59,
      v49,
      0,
      1,
      0,
      v50);
    if ( !v31 )
      goto LABEL_81;
    if ( (*(_DWORD *)(v16 + 68) & 0x10000) != 0 )
    {
      v41 = 1LL;
    }
    else
    {
      if ( v5 != 593 )
        goto LABEL_81;
      v41 = 2LL;
    }
    PointerList::SetPointerCapture(*(_QWORD *)(v16 + 16), v31, v41, v40, v11);
LABEL_81:
    if ( *(_DWORD *)(v16 + 56) != 5 || (*(_DWORD *)(v16 + 68) & 0x2000) == 0 )
      goto LABEL_95;
    v42 = 0;
    if ( !v51 )
      goto LABEL_94;
    v43 = v58;
    v44 = 0LL;
    v45 = 0LL;
    do
    {
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)(v45 + *((_QWORD *)v43 + 9))) )
      {
        LODWORD(v49) = 0;
        PointerFrameList::SetPointerInfoNodeTarget(
          v43,
          (const struct tagPOINTERINPUTFRAME *)v42,
          (unsigned int)v31,
          (struct tagWND *)v40,
          &v59,
          v49,
          0,
          1,
          0,
          v50);
        v43 = v58;
        if ( v31 )
        {
          v15 = (struct tagPOINTERINFONODE *)*((_QWORD *)v58 + 9);
          if ( (*(_DWORD *)((_BYTE *)v15 + v44 + 68) & 0x10000) != 0 )
          {
            v46 = *(_QWORD *)((char *)v15 + v44 + 16);
            v47 = 1LL;
          }
          else
          {
            if ( a3 != 593 )
              goto LABEL_92;
            v46 = *(_QWORD *)(v16 + 16);
            v47 = 2LL;
          }
          PointerList::SetPointerCapture(v46, v31, v47, v40, v55);
          v43 = v58;
        }
      }
LABEL_92:
      ++v42;
      v45 += 216LL;
      v44 += 216LL;
    }
    while ( v42 < v51 );
    v9 = (__int64)v58;
LABEL_94:
    v11 = v55;
LABEL_95:
    v4 = a1;
LABEL_96:
    v13 = v51;
LABEL_97:
    ++v13;
    v16 += 216LL;
    v51 = v13;
    if ( v13 < *(_DWORD *)(v9 + 24) )
    {
      v5 = a3;
      continue;
    }
    break;
  }
LABEL_100:
  ThreadUnlock1(v15, v14);
  PopW32ThreadLock(v65);
  if ( v10 && (*(_DWORD *)(v9 + 56) & 0x20) == 0 && v54 && !v11 )
  {
    v48 = FindAndReferenceFrameById(*(_DWORD *)(v9 + 16));
    if ( v48 )
    {
      *((_DWORD *)v48 + 14) |= 0x20u;
      UnreferenceFrameInt(v48);
    }
  }
LABEL_106:
  UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v9);
  return v10;
}
