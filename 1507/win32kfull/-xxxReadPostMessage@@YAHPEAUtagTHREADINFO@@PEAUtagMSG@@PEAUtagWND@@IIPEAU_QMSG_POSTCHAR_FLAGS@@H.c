/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C006B9D0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00465E4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     FindQMsg @ 0x1C006BDA0 (FindQMsg.c)
 *     IsPointerInputMessage @ 0x1C008C6CC (IsPointerInputMessage.c)
 *     StoreMessage @ 0x1C00F901C (StoreMessage.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C00F9078 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreePointerMessageParams @ 0x1C01E0B64 (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01EBBAC (xxxDDETrackGetMessageHook.c)
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
  int v9; // eax
  struct tagMLIST *v10; // rsi
  __int64 QMsg; // rax
  __int64 v12; // rbx
  unsigned int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // r9
  struct _QMSG_POSTCHAR_FLAGS *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  int v23; // eax
  unsigned int v24; // r11d
  unsigned int v25; // r11d

  v9 = *((_DWORD *)a1 + 112);
  if ( (v9 & 0x40000000) != 0 && !*((_DWORD *)a1 + 188) )
  {
    if ( a7 )
      *((_DWORD *)a1 + 112) = v9 & 0xBFFFFFFF;
    StoreMessage((_DWORD)a2, 0, 18, *((_DWORD *)a1 + 128));
    EtwTraceRetrievePseudoMessage(a1, a2, v24);
    return 1LL;
  }
  v10 = (struct tagTHREADINFO *)((char *)a1 + 736);
  QMsg = FindQMsg(a1, (char *)a1 + 736);
  v12 = QMsg;
  if ( QMsg )
  {
    if ( (*((_DWORD *)a1 + 270) & 0x2000) != 0 || (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) > 1 )
      v13 = a7;
    else
      v13 = 1;
    EtwTraceRetrievePostMessage(QMsg, v13);
    *((_DWORD *)a1 + 125) = *(_DWORD *)(v12 + 48);
    if ( *(_QWORD *)((char *)a1 + 684) != *(_QWORD *)(v12 + 52) )
      *((_DWORD *)a1 + 112) |= 0x100000u;
    *(_QWORD *)((char *)a1 + 684) = *(_QWORD *)(v12 + 52);
    *(_QWORD *)((char *)a1 + 692) = *(_QWORD *)(v12 + 80);
    *((_QWORD *)a1 + 63) = v12;
    *(_QWORD *)(*((_QWORD *)a1 + 49) + 352LL) = *(_QWORD *)(v12 + 72);
    *(_QWORD *)((char *)a1 + 1084) = *(_QWORD *)(v12 + 112);
    *(_OWORD *)a2 = *(_OWORD *)(v12 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v12 + 32);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(v12 + 48);
    v16 = a6;
    if ( a6 )
    {
      *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v12 + 92) >> 13)) & 1;
      *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v12 + 92) >> 13)) & 2;
    }
    if ( v13 )
    {
      v17 = (_QWORD *)*((_QWORD *)a1 + 55);
      if ( (*(_DWORD *)(v12 + 92) & 1) != 0 )
        *v17 |= 0x1000uLL;
      else
        *v17 &= ~0x1000uLL;
      if ( *(_DWORD *)(*(_QWORD *)v10 + 24LL) == 786 )
        CheckRemoveHotkeyBit(a1, v10);
      if ( (*((_DWORD *)a1 + 112) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
        return 0LL;
      v18 = *(_QWORD **)(v12 + 8);
      if ( v18 )
        *v18 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 )
        *(_QWORD *)(*(_QWORD *)v12 + 8LL) = *(_QWORD *)(v12 + 8);
      if ( *(_QWORD *)v10 == v12 )
        *(_QWORD *)v10 = *(_QWORD *)v12;
      if ( *((_QWORD *)v10 + 1) == v12 )
        *((_QWORD *)v10 + 1) = *(_QWORD *)(v12 + 8);
      --*((_DWORD *)v10 + 4);
      if ( (*(_DWORD *)(v12 + 92) & 8) != 0
        && !*(_DWORD *)(v12 + 88)
        && (unsigned int)IsPointerInputMessage(*(unsigned int *)(v12 + 24), v16, v14, v15) )
      {
        FreePointerMessageParams(v12);
      }
      Win32FreeToPagedLookasideList(QEntryLookaside, v12);
    }
    else
    {
      *((_QWORD *)a1 + 63) = 1LL;
    }
    v19 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)(v19 + 2147482655) <= 7 )
    {
      *((_DWORD *)a2 + 2) = v19 & 0x7FFFFFFF;
      xxxDDETrackGetMessageHook(a2);
      if ( !v13 && v12 == FindQMsg(a1, v10) )
      {
        *(_OWORD *)(v12 + 16) = *(_OWORD *)a2;
        *(_OWORD *)(v12 + 32) = *((_OWORD *)a2 + 1);
        *(_OWORD *)(v12 + 48) = *((_OWORD *)a2 + 2);
      }
    }
LABEL_28:
    v20 = 1;
    if ( !*((_DWORD *)v10 + 4) && (*((_DWORD *)a1 + 112) & 0x40000000) == 0 )
    {
      *(_WORD *)(*((_QWORD *)a1 + 51) + 6LL) &= 0xFEF7u;
      *(_WORD *)(*((_QWORD *)a1 + 51) + 4LL) &= ~0x100u;
    }
    if ( v13 )
    {
      if ( !v12 )
        return 0;
      v21 = *((_DWORD *)a2 + 2);
      if ( v21 <= 0x109 && v21 >= 0x100 && v21 != 258 )
        *((_DWORD *)a1 + 296) &= ~1u;
    }
    if ( v12 )
      return v20;
    return 0;
  }
  v23 = *((_DWORD *)a1 + 112);
  if ( (v23 & 0x40000000) == 0 || *((_DWORD *)a1 + 188) )
  {
    v13 = a7;
    goto LABEL_28;
  }
  if ( a7 )
    *((_DWORD *)a1 + 112) = v23 & 0xBFFFFFFF;
  StoreMessage((_DWORD)a2, 0, 18, *((_DWORD *)a1 + 128));
  EtwTraceRetrievePseudoMessage(a1, a2, v25);
  return 1LL;
}
