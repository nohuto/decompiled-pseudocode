/*
 * XREFs of ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01D7CD8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C00777C4 (ThreadLockExchange.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C01C0E28 (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01C1994 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01EFF9C (-GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F005C (-IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z @ 0x1C01F00E8 (-IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z.c)
 *     ?IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F0230 (-IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F02A4 (-IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F0BD0 (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F0C80 (-RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F0F5C (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01F120C (-xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUta.c)
 *     ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01F1D50 (-xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F2168 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01F3C24 (-GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01F3FB8 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 *     ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01F4094 (-SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z.c)
 *     PointerSpeedHitTest @ 0x1C02233A0 (PointerSpeedHitTest.c)
 *     ValidatePointerOffset @ 0x1C0223668 (ValidatePointerOffset.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C0223A7C (xxxPerformTargetingWithinPwnd.c)
 */

__int64 __fastcall xxxSetPointerFrameTargetWindows(struct tagTHREADINFO *a1, __int64 a2, unsigned int a3, int *a4)
{
  struct tagTHREADINFO *v4; // r13
  unsigned int v5; // r14d
  struct tagPOINTERINPUTFRAME *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // r12
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  const struct tagPOINTERINFONODE *v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rdx
  struct tagPOINTERINFONODE *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rax
  struct tagPOINT *v26; // r8
  struct tagWND *v27; // rsi
  __int64 MessageWindow; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  struct tagWND *v31; // rax
  PointerList *v32; // rcx
  const struct tagPOINT *v33; // r8
  struct tagQ *NodeQueue; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rcx
  unsigned int v39; // r14d
  __int64 v40; // rsi
  __int64 v41; // rdx
  bool v42; // zf
  struct tagWND *v43; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  struct tagWND *v46; // rax
  PointerList *v47; // rcx
  int v48; // eax
  int v49; // eax
  struct tagWND *v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  struct tagWND *v53; // rax
  PointerList *v54; // rcx
  int v55; // eax
  unsigned int v56; // r13d
  __int64 v57; // r8
  unsigned int v58; // r15d
  PointerFrameList *v59; // r10
  __int64 v60; // r14
  __int64 v61; // r12
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  struct tagPOINTERINPUTFRAME *v67; // rax
  struct tagPOINT *v68; // [rsp+30h] [rbp-91h]
  unsigned int v69; // [rsp+58h] [rbp-69h]
  unsigned int v70; // [rsp+5Ch] [rbp-65h] BYREF
  struct tagWND *v71; // [rsp+60h] [rbp-61h] BYREF
  int v72; // [rsp+68h] [rbp-59h]
  int v73; // [rsp+6Ch] [rbp-55h]
  unsigned int v74; // [rsp+70h] [rbp-51h]
  struct tagQ *QueueForCurrentNode; // [rsp+78h] [rbp-49h]
  struct tagPOINT v76; // [rsp+80h] [rbp-41h] BYREF
  struct tagPOINTERINPUTFRAME *v77; // [rsp+88h] [rbp-39h]
  struct tagPOINTERINFONODE *v78; // [rsp+90h] [rbp-31h]
  unsigned __int16 v79[4]; // [rsp+98h] [rbp-29h] BYREF
  int v80; // [rsp+A0h] [rbp-21h] BYREF
  _QWORD v81[3]; // [rsp+A8h] [rbp-19h] BYREF
  unsigned __int16 v82[4]; // [rsp+C0h] [rbp-1h] BYREF
  _QWORD v83[10]; // [rsp+C8h] [rbp+7h] BYREF

  v76.x = 0;
  v4 = a1;
  v5 = a3;
  *a4 = 0;
  v76.y = 0;
  if ( a3 == 595 )
    return 1LL;
  if ( !a2 )
    return 0LL;
  v7 = FindAndReferenceFrameById(*(_DWORD *)(a2 + 28));
  v77 = v7;
  v11 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  v12 = 1;
  if ( (*((_DWORD *)v7 + 18) & 0x20) != 0 )
    goto LABEL_106;
  v13 = (*((_DWORD *)v4 + 274) >> 13) & 1;
  v78 = (struct tagPOINTERINFONODE *)(*((_QWORD *)v7 + 11) + 216LL * *(unsigned int *)(v10 + 32));
  v74 = v13;
  v73 = IsNodeMessageDelegated(v78, v5);
  QueueForCurrentNode = GetQueueForCurrentNode(v4, v13, v5, v73, v14);
  PushW32ThreadLock(v11, v83, (__int64)DereferencePointerInputFrame, v15);
  v16 = 0;
  v72 = 1;
  v69 = 0;
  v17 = gptiCurrent;
  v18 = *(struct tagPOINTERINFONODE **)(gptiCurrent + 368LL);
  v81[0] = v18;
  *(_QWORD *)(gptiCurrent + 368LL) = v81;
  v81[1] = 0LL;
  v19 = *(_QWORD *)(v11 + 88);
  if ( !*(_DWORD *)(v11 + 40) )
    goto LABEL_100;
  while ( !v13 || (*((_DWORD *)v4 + 274) & 0x2000) != 0 )
  {
    if ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v19) )
      goto LABEL_97;
    if ( (unsigned int)IsTargetSetForRetrieval(v4, (const struct tagPOINTERINFONODE *)v19) )
    {
      xxxHandleMTNodeTargetWindow((struct tagPOINTERINFONODE *)v19, v17, v20, v21);
      v24 = *(_DWORD *)(v19 + 4);
      if ( (v24 & 0x200) == 0 || (v24 & 0x800) != 0 || *(_DWORD *)(v19 + 56) != 2 )
        goto LABEL_97;
      LOBYTE(v17) = 1;
      v25 = HMValidateHandleNoSecure(*(_QWORD *)(v19 + 80), v17, v22, v23);
      v71 = (struct tagWND *)v25;
      v27 = (struct tagWND *)v25;
      if ( !v25 || *(struct tagTHREADINFO **)(v25 + 16) != v4 )
        goto LABEL_96;
      if ( (*(_DWORD *)(v19 + 68) & 0x10000) == 0 )
      {
        PointerList::GetPointerOffset((PointerList *)*(unsigned __int16 *)(v19 + 60), (unsigned __int16)v82, v26);
        v18 = *(struct tagPOINTERINFONODE **)v82;
        *(_QWORD *)(v19 + 36) = *(_QWORD *)v82;
        goto LABEL_96;
      }
      *(_DWORD *)(v19 + 4) |= 0x800u;
      MessageWindow = GetMessageWindow(v25);
      if ( *((_QWORD *)v18 + 11) == MessageWindow )
        goto LABEL_96;
      ThreadLockExchange((__int64)v18, (__int64)v81);
      xxxPerformTargetingWithinPwnd(v27, (struct tagPOINTEREVENTINT *)(v19 + 48));
      QueueForCurrentNode = GetQueueForCurrentNode(v4, v13, a3, v73, v78);
      if ( QueueForCurrentNode )
      {
        if ( (unsigned int)RevalidateFrameProcessing(v4, v13, (const struct tagPOINTERINFONODE *)v19) )
        {
          LOBYTE(v17) = 1;
          v31 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v19 + 80), v17, v29, v30);
          v32 = *(PointerList **)(v19 + 16);
          v71 = v31;
          if ( (unsigned int)RecheckPointerCapture(v32, v13, &v71, (int *)&v70) )
            ThreadLockExchange((__int64)v71, (__int64)v81);
          if ( (unsigned int)ValidatePointerOffset(*(_QWORD *)(v19 + 88), v19 + 48, *(_QWORD *)v79, v79) )
          {
            PointerList::SetPointerOffset((PointerList *)*(unsigned __int16 *)(v19 + 60), (unsigned __int16)v79, v33);
            *(_QWORD *)(v19 + 36) = *(_QWORD *)v79;
          }
        }
        goto LABEL_96;
      }
      goto LABEL_99;
    }
    v18 = v78;
    if ( *(_DWORD *)(v19 + 8) != *((_DWORD *)v78 + 2)
      || (struct tagPOINTERINFONODE *)v19 != v78
      && (!v13 && !(unsigned int)IsAnyNodeMessageNonDelegated((const struct tagPOINTERINFONODE *)v19)
       || (NodeQueue = GetNodeQueue((const struct tagPOINTERINFONODE *)v19, &v80), v80)
       || NodeQueue && NodeQueue != QueueForCurrentNode) )
    {
      v72 = 0;
      goto LABEL_97;
    }
    if ( (*((_DWORD *)v4 + 274) & 0x2000) != 0 )
    {
      if ( (unsigned int)RecheckPointerCapture(*(PointerList **)(v19 + 16), v13, &v71, (int *)&v70) )
      {
        v40 = (__int64)v71;
        v39 = v70;
      }
      else
      {
        v38 = *(_QWORD *)(v19 + 24);
        v39 = 1;
        v70 = 1;
        if ( v38 )
        {
          LOBYTE(v35) = 1;
          v40 = HMValidateHandleNoSecure(v38, v35, v36, v37);
          v71 = (struct tagWND *)v40;
        }
        else
        {
          v40 = 0LL;
          v71 = 0LL;
        }
        if ( v40 )
          goto LABEL_43;
        v40 = PointerSpeedHitTest(
                *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
                (struct tagPOINTEREVENTINT *)(v19 + 48),
                0LL,
                0LL);
        v71 = (struct tagWND *)v40;
      }
      if ( !v40 )
      {
LABEL_46:
        v5 = a3;
        goto LABEL_47;
      }
LABEL_43:
      if ( *(_QWORD *)(v40 + 312) )
      {
        LODWORD(v68) = 0;
        PointerFrameList::SetPointerInfoNodeTarget(
          (PointerFrameList *)v11,
          (const struct tagPOINTERINPUTFRAME *)v69,
          (struct tagWND *)v40,
          (struct tagWND *)v39,
          &v76,
          v68,
          0,
          1,
          1);
        v72 = 0;
        if ( (unsigned int)IsPointerInfoNodePrimaryDown((const struct tagPOINTERINFONODE *)v19) )
          PostEventMessageEx(
            *(_QWORD *)(v40 + 16),
            *(_QWORD *)(*(_QWORD *)(v40 + 16) + 384LL),
            0x14u,
            v40,
            0,
            0LL,
            *(_QWORD *)(v19 + 16),
            0LL);
        goto LABEL_96;
      }
      goto LABEL_46;
    }
LABEL_47:
    v41 = *(_QWORD *)(v11 + 96);
    if ( (*(_DWORD *)(v41 + 40LL * *(unsigned int *)(v19 + 8) + 20) & 1) != 0 && (*((_DWORD *)v4 + 274) & 0x2000) == 0 )
      *(_DWORD *)(v41 + 40LL * *(unsigned int *)(v19 + 8) + 20) &= ~1u;
    v42 = *(_DWORD *)(v19 + 56) == 5;
    v70 = 1;
    if ( v42 )
    {
      if ( !(unsigned int)xxxDetermineTouchpadPointerTargetWindow(
                            v4,
                            (const struct tagPOINTERINPUTFRAME *)v11,
                            (const struct tagPOINTERINFONODE *)v19,
                            QueueForCurrentNode,
                            v69,
                            v13,
                            (int *)&v70,
                            &v76,
                            &v71) )
        goto LABEL_96;
      v43 = v71;
    }
    else
    {
      v43 = xxxDeterminePointerTargetWindow(
              v4,
              (const struct tagPOINTERINFONODE *)v19,
              QueueForCurrentNode,
              v13,
              (int *)&v70,
              &v76);
      v71 = v43;
    }
    QueueForCurrentNode = GetQueueForCurrentNode(v4, v13, v5, v73, v78);
    if ( !QueueForCurrentNode )
      goto LABEL_99;
    if ( !(unsigned int)RevalidateFrameProcessing(v4, v13, (const struct tagPOINTERINFONODE *)v19) )
      goto LABEL_96;
    ThreadLockExchange((__int64)v43, (__int64)v81);
    if ( !v43 )
      goto LABEL_75;
    if ( (*(_DWORD *)(v19 + 68) & 0x10000) != 0 && *(_DWORD *)(v19 + 56) != 5 && (*(_DWORD *)(v19 + 4) & 0x80u) == 0 )
    {
      xxxPointerParentNotify(v43, (const struct tagPOINTERINFONODE *)v19);
      QueueForCurrentNode = GetQueueForCurrentNode(v4, v13, v5, v73, v78);
      if ( !QueueForCurrentNode )
        goto LABEL_99;
      if ( !(unsigned int)RevalidateFrameProcessing(v4, v13, (const struct tagPOINTERINFONODE *)v19) )
        goto LABEL_96;
      LOBYTE(v17) = 1;
      v46 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v43, v17, v44, v45);
      v47 = *(PointerList **)(v19 + 16);
      v71 = v46;
      v48 = RecheckPointerCapture(v47, v13, &v71, (int *)&v70);
      v43 = v71;
      if ( v48 )
        ThreadLockExchange((__int64)v71, (__int64)v81);
    }
    if ( !v43 )
      goto LABEL_75;
    v49 = *(_DWORD *)(v19 + 68);
    if ( (v49 & 0x10000) == 0 || (v49 & 0x2000) == 0 )
      goto LABEL_75;
    if ( (*(_DWORD *)(v19 + 4) & 0x80u) != 0
      && (*((_QWORD *)v43 + 11) != GetMessageWindow((__int64)v43) || !GetCompositionInputWindowUIOwner(v50))
      && (*((_BYTE *)v43 + 291) & 4) == 0 )
    {
      goto LABEL_75;
    }
    *(_DWORD *)(216LL * v69 + *(_QWORD *)(v11 + 88) + 32) = v70;
    xxxPointerActivate(v43, (const struct tagPOINTERINFONODE *)v19);
    QueueForCurrentNode = GetQueueForCurrentNode(v4, v13, v5, v73, v78);
    if ( !QueueForCurrentNode )
    {
LABEL_99:
      *a4 = 1;
      v12 = 0;
      break;
    }
    if ( !(unsigned int)RevalidateFrameProcessing(v4, v13, (const struct tagPOINTERINFONODE *)v19) )
      goto LABEL_96;
    LOBYTE(v17) = 1;
    v53 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v43, v17, v51, v52);
    v54 = *(PointerList **)(v19 + 16);
    v71 = v53;
    v55 = RecheckPointerCapture(v54, v13, &v71, (int *)&v70);
    v43 = v71;
    if ( v55 )
      ThreadLockExchange((__int64)v71, (__int64)v81);
LABEL_75:
    v56 = v70;
    LODWORD(v68) = 0;
    PointerFrameList::SetPointerInfoNodeTarget(
      (PointerFrameList *)v11,
      (const struct tagPOINTERINPUTFRAME *)v69,
      v43,
      (struct tagWND *)v70,
      &v76,
      v68,
      0,
      1,
      0);
    if ( !v43 )
      goto LABEL_81;
    if ( (*(_DWORD *)(v19 + 68) & 0x10000) != 0 )
    {
      v57 = 1LL;
    }
    else
    {
      if ( v5 != 593 )
        goto LABEL_81;
      v57 = 2LL;
    }
    PointerList::SetPointerCapture(*(_QWORD *)(v19 + 16), v43, v57, v56, v13);
LABEL_81:
    if ( *(_DWORD *)(v19 + 56) != 5 || (*(_DWORD *)(v19 + 68) & 0x2000) == 0 )
      goto LABEL_95;
    v58 = 0;
    if ( !v69 )
      goto LABEL_94;
    v59 = v77;
    v60 = 0LL;
    v61 = 0LL;
    do
    {
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)(v61 + *((_QWORD *)v59 + 11))) )
      {
        LODWORD(v68) = 0;
        PointerFrameList::SetPointerInfoNodeTarget(
          v59,
          (const struct tagPOINTERINPUTFRAME *)v58,
          v43,
          (struct tagWND *)v56,
          &v76,
          v68,
          0,
          1,
          0);
        v59 = v77;
        if ( v43 )
        {
          v18 = (struct tagPOINTERINFONODE *)*((_QWORD *)v77 + 11);
          if ( (*(_DWORD *)((_BYTE *)v18 + v60 + 68) & 0x10000) != 0 )
          {
            v62 = *(_QWORD *)((char *)v18 + v60 + 16);
            v63 = 1LL;
          }
          else
          {
            if ( a3 != 593 )
              goto LABEL_92;
            v62 = *(_QWORD *)(v19 + 16);
            v63 = 2LL;
          }
          PointerList::SetPointerCapture(v62, v43, v63, v56, v74);
          v59 = v77;
        }
      }
LABEL_92:
      ++v58;
      v61 += 216LL;
      v60 += 216LL;
    }
    while ( v58 < v69 );
    v11 = (__int64)v77;
LABEL_94:
    v13 = v74;
LABEL_95:
    v4 = a1;
LABEL_96:
    v16 = v69;
LABEL_97:
    ++v16;
    v19 += 216LL;
    v69 = v16;
    if ( v16 < *(_DWORD *)(v11 + 40) )
    {
      v5 = a3;
      continue;
    }
    break;
  }
LABEL_100:
  ThreadUnlock1(v18, v17);
  PopW32ThreadLock(v83, v64, v65, v66);
  if ( v12 && (*(_DWORD *)(v11 + 72) & 0x20) == 0 && v72 && !v13 )
  {
    v67 = FindAndReferenceFrameById(*(_DWORD *)(v11 + 32));
    if ( v67 )
    {
      *((_DWORD *)v67 + 18) |= 0x20u;
      UnreferenceFrameInt(v67, v8, v9);
    }
  }
LABEL_106:
  UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v11, v8, v9);
  return v12;
}
