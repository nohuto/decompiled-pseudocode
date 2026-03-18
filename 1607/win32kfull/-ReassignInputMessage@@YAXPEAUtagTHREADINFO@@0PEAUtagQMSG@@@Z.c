/*
 * XREFs of ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C014717C
 * Callers:
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C010BA70 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01470D4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C0058128 (IsPointerInputMessage.c)
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C010FCE0 (GetAppCompatFlags2QuadWord.c)
 *     IsPointerInputClientMessage @ 0x1C014728C (IsPointerInputClientMessage.c)
 *     DelegateCoalescePointerMessage @ 0x1C01F2FF8 (DelegateCoalescePointerMessage.c)
 *     GetPointerMsgFrameId @ 0x1C01F3174 (GetPointerMsgFrameId.c)
 */

void __fastcall ReassignInputMessage(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2, struct tagQMSG *a3)
{
  __int64 v3; // rsi
  __int64 v7; // rax
  __int64 *v8; // r9
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r10d
  int v14; // edx
  int v15; // ecx
  int v16; // r11d
  unsigned int PointerMsgFrameId; // eax
  unsigned int v18; // edx
  _QWORD *v19; // rax
  int v20; // ecx
  __int64 v21; // rdx

  v3 = *((_QWORD *)a2 + 48);
  DelQEntry(*((_QWORD **)a1 + 48), (__int64)a3);
  v7 = *((_QWORD *)a1 + 48);
  if ( *(struct tagQMSG **)(v7 + 48) == a3 )
    *(_QWORD *)(v7 + 48) = 0LL;
  *((_DWORD *)a3 + 25) &= ~0x10u;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  v8 = *(__int64 **)v3;
  v9 = *(__int64 **)v3;
  if ( !*(_QWORD *)v3 )
    goto LABEL_4;
  v13 = *((_DWORD *)a3 + 12);
  do
  {
    if ( *((_DWORD *)v9 + 12) > v13 )
      break;
    if ( (unsigned int)IsPointerInputClientMessage(*((unsigned int *)v9 + 6)) )
    {
      if ( (unsigned int)IsPointerInputClientMessage(*((unsigned int *)a3 + 6)) )
      {
        if ( v14 != v16 && v15 != v16 )
        {
          GetPointerMsgFrameId(v9[5]);
          PointerMsgFrameId = GetPointerMsgFrameId(*((_QWORD *)a3 + 5));
          if ( v18 > PointerMsgFrameId )
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
  v19 = (_QWORD *)v9[1];
  if ( v19 )
    *v19 = a3;
  else
    *(_QWORD *)v3 = a3;
  *(_QWORD *)a3 = v9;
  *((_QWORD *)a3 + 1) = v9[1];
  v9[1] = (__int64)a3;
LABEL_6:
  ++*(_DWORD *)(v3 + 16);
  if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    if ( (GetAppCompatFlags2QuadWord((__int64)a2, v10, v11, v12) & 0x2000000000000LL) != 0 && *((_DWORD *)a3 + 6) == 512 )
    {
      v20 = *((_DWORD *)a3 + 25);
      if ( (v20 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 48) + 104LL) )
        {
          v21 = *((_QWORD *)a3 + 1);
          if ( v21 )
          {
            if ( *(_DWORD *)(v21 + 24) == 512
              && *(_QWORD *)(v21 + 16) == *((_QWORD *)a3 + 2)
              && *(_QWORD *)(v3 + 48) != v21
              && (v20 & 0x100) == 0 )
            {
              DelQEntry((_QWORD *)v3, v21);
            }
          }
        }
      }
    }
    WakeSomeone(v3, (__int64)a2, *((unsigned int *)a3 + 6), (__int64)a3);
  }
}
