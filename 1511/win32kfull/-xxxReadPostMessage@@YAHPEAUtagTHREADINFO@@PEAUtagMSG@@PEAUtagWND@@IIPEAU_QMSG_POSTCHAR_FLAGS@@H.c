/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C005AF00
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 * Callees:
 *     FindQMsg @ 0x1C005B2D0 (FindQMsg.c)
 *     IsPointerInputMessage @ 0x1C00652F8 (IsPointerInputMessage.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00815B4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     StoreMessage @ 0x1C00FF530 (StoreMessage.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C010277C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreePointerMessageParams @ 0x1C01E1174 (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01EC0CC (xxxDDETrackGetMessageHook.c)
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
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v20; // eax
  unsigned int v21; // r11d
  unsigned int v22; // r11d

  v9 = *((_DWORD *)a1 + 110);
  if ( (v9 & 0x40000000) != 0 && !*((_DWORD *)a1 + 186) )
  {
    if ( a7 )
      *((_DWORD *)a1 + 110) = v9 & 0xBFFFFFFF;
    StoreMessage((_DWORD)a2, 0, 18, *((_DWORD *)a1 + 126));
    EtwTraceRetrievePseudoMessage(a1, a2, v21);
    return 1LL;
  }
  v10 = (struct tagTHREADINFO *)((char *)a1 + 728);
  QMsg = FindQMsg(a1, (char *)a1 + 728);
  v12 = QMsg;
  if ( QMsg )
  {
    if ( (*((_DWORD *)a1 + 268) & 0x2000) != 0 || (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) > 1 )
      v13 = a7;
    else
      v13 = 1;
    EtwTraceRetrievePostMessage(QMsg, v13);
    *((_DWORD *)a1 + 123) = *(_DWORD *)(v12 + 48);
    if ( *(_QWORD *)((char *)a1 + 676) != *(_QWORD *)(v12 + 52) )
      *((_DWORD *)a1 + 110) |= 0x100000u;
    *(_QWORD *)((char *)a1 + 676) = *(_QWORD *)(v12 + 52);
    *(_QWORD *)((char *)a1 + 684) = *(_QWORD *)(v12 + 80);
    *((_QWORD *)a1 + 62) = v12;
    *(_QWORD *)(*((_QWORD *)a1 + 48) + 352LL) = *(_QWORD *)(v12 + 72);
    *(_QWORD *)((char *)a1 + 1076) = *(_QWORD *)(v12 + 112);
    *(_OWORD *)a2 = *(_OWORD *)(v12 + 16);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v12 + 32);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(v12 + 48);
    if ( a6 )
    {
      *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v12 + 92) >> 13)) & 1;
      *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v12 + 92) >> 13)) & 2;
    }
    if ( v13 )
    {
      v14 = (_QWORD *)*((_QWORD *)a1 + 54);
      if ( (*(_DWORD *)(v12 + 92) & 1) != 0 )
        *v14 |= 0x1000uLL;
      else
        *v14 &= ~0x1000uLL;
      if ( *(_DWORD *)(*(_QWORD *)v10 + 24LL) == 786 )
        CheckRemoveHotkeyBit(a1, v10);
      if ( (*((_DWORD *)a1 + 110) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
        return 0LL;
      v15 = *(_QWORD **)(v12 + 8);
      if ( v15 )
        *v15 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 )
        *(_QWORD *)(*(_QWORD *)v12 + 8LL) = *(_QWORD *)(v12 + 8);
      if ( *(_QWORD *)v10 == v12 )
        *(_QWORD *)v10 = *(_QWORD *)v12;
      if ( *((_QWORD *)v10 + 1) == v12 )
        *((_QWORD *)v10 + 1) = *(_QWORD *)(v12 + 8);
      --*((_DWORD *)v10 + 4);
      if ( (*(_DWORD *)(v12 + 92) & 8) != 0
        && !*(_DWORD *)(v12 + 88)
        && (unsigned int)IsPointerInputMessage(*(unsigned int *)(v12 + 24)) )
      {
        FreePointerMessageParams(v12);
      }
      Win32FreeToPagedLookasideList(QEntryLookaside, v12);
    }
    else
    {
      *((_QWORD *)a1 + 62) = 1LL;
    }
    v16 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)(v16 + 2147482655) <= 7 )
    {
      *((_DWORD *)a2 + 2) = v16 & 0x7FFFFFFF;
      xxxDDETrackGetMessageHook(a2);
      if ( !v13 && v12 == FindQMsg(a1, v10) )
      {
        *(_OWORD *)(v12 + 16) = *(_OWORD *)a2;
        *(_OWORD *)(v12 + 32) = *((_OWORD *)a2 + 1);
        *(_OWORD *)(v12 + 48) = *((_OWORD *)a2 + 2);
      }
    }
LABEL_28:
    v17 = 1;
    if ( !*((_DWORD *)v10 + 4) && (*((_DWORD *)a1 + 110) & 0x40000000) == 0 )
    {
      *(_WORD *)(*((_QWORD *)a1 + 50) + 6LL) &= 0xFEF7u;
      *(_WORD *)(*((_QWORD *)a1 + 50) + 4LL) &= ~0x100u;
    }
    if ( v13 )
    {
      if ( !v12 )
        return 0;
      v18 = *((_DWORD *)a2 + 2);
      if ( v18 <= 0x109 && v18 >= 0x100 && v18 != 258 )
        *((_DWORD *)a1 + 294) &= ~1u;
    }
    if ( v12 )
      return v17;
    return 0;
  }
  v20 = *((_DWORD *)a1 + 110);
  if ( (v20 & 0x40000000) == 0 || *((_DWORD *)a1 + 186) )
  {
    v13 = a7;
    goto LABEL_28;
  }
  if ( a7 )
    *((_DWORD *)a1 + 110) = v20 & 0xBFFFFFFF;
  StoreMessage((_DWORD)a2, 0, 18, *((_DWORD *)a1 + 126));
  EtwTraceRetrievePseudoMessage(a1, a2, v22);
  return 1LL;
}
