/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C013F484
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C0065340 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C013F3DC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     WakeSomeone @ 0x1C0051C7C (WakeSomeone.c)
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C00652F8 (IsPointerInputMessage.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00C9EF0 (GetAppCompatFlags2QuadWord.c)
 *     IsPointerInputClientMessage @ 0x1C013F5B8 (IsPointerInputClientMessage.c)
 *     DelegateCoalescePointerMessage @ 0x1C01FBC90 (DelegateCoalescePointerMessage.c)
 *     GetPointerMsgFrameId @ 0x1C01FBDFC (GetPointerMsgFrameId.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v3; // rsi
  __int64 v7; // rax
  __int64 *v8; // r9
  __int64 *v9; // r8
  unsigned int v10; // r10d
  _QWORD *v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r11d
  unsigned int PointerMsgFrameId; // eax
  unsigned int v16; // edx
  int v17; // ecx
  __int64 v18; // rdx

  v3 = *((_QWORD *)a2 + 48);
  DelQEntry(*((_QWORD *)a1 + 48), (__int64 *)a3, 0);
  v7 = *((_QWORD *)a1 + 48);
  if ( *(struct tagQMSG **)(v7 + 40) == a3 )
    *(_QWORD *)(v7 + 40) = 0LL;
  *((_DWORD *)a3 + 23) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 12) = a2;
  v8 = *(__int64 **)v3;
  v9 = *(__int64 **)v3;
  if ( !*(_QWORD *)v3 )
    goto LABEL_4;
  v10 = *((_DWORD *)a3 + 12);
  do
  {
    if ( *((_DWORD *)v9 + 12) > v10 )
      break;
    if ( (unsigned int)IsPointerInputClientMessage(*((unsigned int *)v9 + 6)) )
    {
      if ( (unsigned int)IsPointerInputClientMessage(*((unsigned int *)a3 + 6)) )
      {
        if ( v12 != v14 && v13 != v14 )
        {
          GetPointerMsgFrameId(v9[5]);
          PointerMsgFrameId = GetPointerMsgFrameId(*((_QWORD *)a3 + 5));
          if ( v16 > PointerMsgFrameId )
            break;
        }
      }
    }
    v9 = (__int64 *)*v9;
  }
  while ( v9 );
  if ( !v9 )
  {
    if ( v8 )
    {
      **(_QWORD **)(v3 + 8) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v3 + 8);
      goto LABEL_5;
    }
LABEL_4:
    *(_QWORD *)v3 = a3;
LABEL_5:
    *(_QWORD *)(v3 + 8) = a3;
    goto LABEL_6;
  }
  v11 = (_QWORD *)v9[1];
  if ( v11 )
    *v11 = a3;
  else
    *(_QWORD *)v3 = a3;
  *(_QWORD *)a3 = v9;
  *((_QWORD *)a3 + 1) = v9[1];
  v9[1] = (__int64)a3;
LABEL_6:
  ++*(_DWORD *)(v3 + 16);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v17 = *((_DWORD *)a3 + 23);
      if ( (v17 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 48) + 96LL) )
        {
          v18 = *((_QWORD *)a3 + 1);
          if ( v18 )
          {
            if ( *(_DWORD *)(v18 + 24) == 512
              && *(_QWORD *)(v18 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v3 + 40) != v18
              && (v17 & 0x100) == 0 )
            {
              DelQEntry(v3, (__int64 *)v18, 1);
            }
          }
        }
      }
    }
    WakeSomeone((_QWORD *)v3, (__int64)a2, *((_DWORD *)a3 + 6), (__int64)a3);
  }
}
