/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0115CC4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C00FB698 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C008C6CC (IsPointerInputMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D98E0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0115D6C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01E0B08 (DelegateReleasePointerMessage.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v4; // rbp
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v12; // r9
  __int64 v13; // rax

  v4 = *(_QWORD *)a3;
  if ( (*((_DWORD *)a3 + 23) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3);
    if ( a2 == 1 )
    {
      v7 = *((_DWORD *)a3 + 23);
      if ( (v7 & 0x20) != 0 )
      {
        v8 = *((_QWORD *)a3 + 2);
        *((_DWORD *)a3 + 23) = v7 & 0xFFFFFF9F | 0x40;
        v9 = HMValidateHandleNoSecure(v8, 1);
        if ( v9 )
        {
          v10 = *((_DWORD *)a3 + 23);
          if ( (v10 & 0x200) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 23) = v10 & 0xFFFFFDFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v9 + 16), a3);
          goto LABEL_8;
        }
LABEL_12:
        if ( !(unsigned int)IsPointerInputMessage(*((_DWORD *)a3 + 6))
          || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry(*((_QWORD *)a1 + 49), (__int64 *)a3, 1LL, v12);
        }
        v13 = *((_QWORD *)a1 + 49);
        if ( *(struct tagQMSG **)(v13 + 40) == a3 )
          *(_QWORD *)(v13 + 40) = 0LL;
      }
    }
    else
    {
      if ( a2 == 2 )
        goto LABEL_12;
      *((_DWORD *)a3 + 23) |= 0x10u;
    }
LABEL_8:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  return (struct tagQMSG *)v4;
}
