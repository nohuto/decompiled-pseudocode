/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0115D6C
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00E61D0 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0115CC4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1C0040280 (GetAppCompatFlags2QuadWord.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C008C6CC (IsPointerInputMessage.c)
 *     IsPointerInputClientMessage @ 0x1C008C6F4 (IsPointerInputClientMessage.c)
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 *     DelegateCoalescePointerMessage @ 0x1C01FB800 (DelegateCoalescePointerMessage.c)
 *     GetPointerMsgFrameId @ 0x1C01FB97C (GetPointerMsgFrameId.c)
 */

void __fastcall ReassignInputMessage(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        struct tagQMSG *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  __int64 *v9; // r9
  __int64 *v10; // r8
  unsigned int v11; // r10d
  _QWORD *v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r11d
  unsigned int PointerMsgFrameId; // eax
  unsigned int v17; // edx
  int v18; // ecx
  __int64 v19; // rdx

  v4 = *((_QWORD *)a2 + 49);
  DelQEntry(*((_QWORD *)a1 + 49), (__int64 *)a3, 0LL, a4);
  v8 = *((_QWORD *)a1 + 49);
  if ( *(struct tagQMSG **)(v8 + 40) == a3 )
    *(_QWORD *)(v8 + 40) = 0LL;
  *((_DWORD *)a3 + 23) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 12) = a2;
  v9 = *(__int64 **)v4;
  v10 = *(__int64 **)v4;
  if ( !*(_QWORD *)v4 )
    goto LABEL_4;
  v11 = *((_DWORD *)a3 + 12);
  do
  {
    if ( *((_DWORD *)v10 + 12) > v11 )
      break;
    if ( IsPointerInputClientMessage(*((_DWORD *)v10 + 6))
      && IsPointerInputClientMessage(*((_DWORD *)a3 + 6))
      && v13 != v15
      && v14 != v15 )
    {
      GetPointerMsgFrameId(v10[5]);
      PointerMsgFrameId = GetPointerMsgFrameId(*((_QWORD *)a3 + 5));
      if ( v17 > PointerMsgFrameId )
        break;
    }
    v10 = (__int64 *)*v10;
  }
  while ( v10 );
  if ( !v10 )
  {
    if ( v9 )
    {
      **(_QWORD **)(v4 + 8) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v4 + 8);
      goto LABEL_5;
    }
LABEL_4:
    *(_QWORD *)v4 = a3;
LABEL_5:
    *(_QWORD *)(v4 + 8) = a3;
    goto LABEL_6;
  }
  v12 = (_QWORD *)v10[1];
  if ( v12 )
    *v12 = a3;
  else
    *(_QWORD *)v4 = a3;
  *(_QWORD *)a3 = v10;
  *((_QWORD *)a3 + 1) = v10[1];
  v10[1] = (__int64)a3;
LABEL_6:
  ++*(_DWORD *)(v4 + 16);
  if ( !(unsigned int)IsPointerInputMessage(*((_DWORD *)a3 + 6))
    || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v18 = *((_DWORD *)a3 + 23);
      if ( (v18 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 49) + 96LL) )
        {
          v19 = *((_QWORD *)a3 + 1);
          if ( v19 )
          {
            if ( *(_DWORD *)(v19 + 24) == 512
              && *(_QWORD *)(v19 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v4 + 40) != v19
              && (v18 & 0x100) == 0 )
            {
              DelQEntry(v4, (__int64 *)v19, 1LL, 512LL);
            }
          }
        }
      }
    }
    WakeSomeone((_QWORD *)v4, (__int64)a2, *((_DWORD *)a3 + 6), (__int64)a3);
  }
}
