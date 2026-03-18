/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00831C0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0058128 (IsPointerInputMessage.c)
 *     FindQMsg @ 0x1C00835A0 (FindQMsg.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00A8094 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     StoreMessage @ 0x1C01227DC (StoreMessage.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C0125E1C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreePointerMessageParams @ 0x1C01D74CC (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        __int64 a4,
        unsigned int a5,
        struct _QMSG_POSTCHAR_FLAGS *a6,
        unsigned int a7)
{
  unsigned int v7; // r12d
  int v11; // eax
  struct tagMLIST *v12; // rsi
  __int64 QMsg; // rax
  __int64 v14; // rbx
  unsigned int v15; // r15d
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  int v23; // eax

  v7 = a4;
  v11 = *((_DWORD *)a1 + 110);
  if ( (v11 & 0x40000000) != 0 && !*((_DWORD *)a1 + 186) )
  {
    if ( a7 )
      *((_DWORD *)a1 + 110) = v11 & 0xBFFFFFFF;
    StoreMessage((_DWORD)a2, 0, 18, *((_DWORD *)a1 + 126));
    EtwTraceRetrievePseudoMessage(a1, a2, a7);
    return 1LL;
  }
  v12 = (struct tagTHREADINFO *)((char *)a1 + 728);
  QMsg = FindQMsg(a1, (char *)a1 + 728, a3, a4, a5, 0);
  v14 = QMsg;
  if ( QMsg )
  {
    if ( (*((_DWORD *)a1 + 274) & 0x2000) != 0 || (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) > 1 )
      v15 = a7;
    else
      v15 = 1;
    EtwTraceRetrievePostMessage(QMsg, v15);
    *((_DWORD *)a1 + 123) = *(_DWORD *)(v14 + 48);
    if ( *(_QWORD *)((char *)a1 + 676) != *(_QWORD *)(v14 + 52) )
      *((_DWORD *)a1 + 110) |= 0x100000u;
    *(_QWORD *)((char *)a1 + 676) = *(_QWORD *)(v14 + 52);
    *(_QWORD *)((char *)a1 + 684) = *(_QWORD *)(v14 + 80);
    *((_QWORD *)a1 + 62) = v14;
    *(_QWORD *)(*((_QWORD *)a1 + 48) + 360LL) = *(_QWORD *)(v14 + 72);
    *(_QWORD *)((char *)a1 + 1100) = *(_QWORD *)(v14 + 120);
    *(_OWORD *)a2 = *(_OWORD *)(v14 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v14 + 32);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(v14 + 48);
    if ( a6 )
    {
      *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v14 + 100) >> 13)) & 1;
      *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v14 + 100) >> 13)) & 2;
    }
    if ( v15 )
    {
      v16 = (_QWORD *)*((_QWORD *)a1 + 54);
      if ( (*(_DWORD *)(v14 + 100) & 1) != 0 )
        *v16 |= 0x1000uLL;
      else
        *v16 &= ~0x1000uLL;
      if ( *(_DWORD *)(*(_QWORD *)v12 + 24LL) == 786 )
        CheckRemoveHotkeyBit(a1, v12);
      if ( (*((_DWORD *)a1 + 110) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
        return 0LL;
      v17 = *(_QWORD **)(v14 + 8);
      if ( v17 )
        *v17 = *(_QWORD *)v14;
      if ( *(_QWORD *)v14 )
        *(_QWORD *)(*(_QWORD *)v14 + 8LL) = *(_QWORD *)(v14 + 8);
      if ( *(_QWORD *)v12 == v14 )
        *(_QWORD *)v12 = *(_QWORD *)v14;
      if ( *((_QWORD *)v12 + 1) == v14 )
        *((_QWORD *)v12 + 1) = *(_QWORD *)(v14 + 8);
      v18 = *(_DWORD *)(v14 + 100);
      if ( (v18 & 0x8000) == 0 && (v18 & 0x20000) == 0 )
        --*((_DWORD *)v12 + 4);
      if ( (*(_DWORD *)(v14 + 100) & 8) != 0 && !*(_DWORD *)(v14 + 96) && IsPointerInputMessage(*(_DWORD *)(v14 + 24)) )
        FreePointerMessageParams(v14);
      Win32FreeToPagedLookasideList(QEntryLookaside, v14);
    }
    else
    {
      *((_QWORD *)a1 + 62) = 1LL;
    }
    v19 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)(v19 + 2147482655) <= 7 )
    {
      *((_DWORD *)a2 + 2) = v19 & 0x7FFFFFFF;
      xxxDDETrackGetMessageHook(a2);
      if ( !v15 && v14 == FindQMsg(a1, v12, a3, v7, a5, 0) )
      {
        *(_OWORD *)(v14 + 16) = *(_OWORD *)a2;
        *(_OWORD *)(v14 + 32) = *((_OWORD *)a2 + 1);
        *(_OWORD *)(v14 + 48) = *((_OWORD *)a2 + 2);
      }
    }
LABEL_31:
    v20 = 1;
    if ( !*((_DWORD *)v12 + 4) && (*((_DWORD *)a1 + 110) & 0x40000000) == 0 )
    {
      *(_WORD *)(*((_QWORD *)a1 + 50) + 6LL) &= 0xFEF7u;
      *(_WORD *)(*((_QWORD *)a1 + 50) + 4LL) &= ~0x100u;
    }
    if ( v15 )
    {
      if ( !v14 )
        return 0;
      v21 = *((_DWORD *)a2 + 2);
      if ( v21 <= 0x109 && v21 >= 0x100 && v21 != 258 )
        *((_DWORD *)a1 + 300) &= ~1u;
    }
    if ( v14 )
      return v20;
    return 0;
  }
  v23 = *((_DWORD *)a1 + 110);
  if ( (v23 & 0x40000000) == 0 || *((_DWORD *)a1 + 186) )
  {
    v15 = a7;
    goto LABEL_31;
  }
  if ( a7 )
    *((_DWORD *)a1 + 110) = v23 & 0xBFFFFFFF;
  StoreMessage((_DWORD)a2, 0, 18, *((_DWORD *)a1 + 126));
  EtwTraceRetrievePseudoMessage(a1, a2, a7);
  return 1LL;
}
