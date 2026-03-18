/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0151C14
 * Callers:
 *     xxxCloseClipboard @ 0x1C00F8DF0 (xxxCloseClipboard.c)
 *     xxxSetClipboardViewer @ 0x1C0151B64 (xxxSetClipboardViewer.c)
 *     xxxDisownClipboard @ 0x1C01E684C (xxxDisownClipboard.c)
 * Callees:
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     CountNumClipFormatForIL @ 0x1C0149F10 (CountNumClipFormatForIL.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // r8
  _QWORD *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // eax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_DWORD *)a1 + 8) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v2 = *((_QWORD *)a1 + 9);
    if ( v2 )
    {
      *((_QWORD *)a1 + 7) = gptiCurrent;
      v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v10;
      v10[1] = v2;
      ++*(_DWORD *)(v2 + 8);
      v3 = (_QWORD *)*((_QWORD *)a1 + 10);
      if ( v3 )
        v3 = (_QWORD *)*v3;
      xxxSendNotifyMessage(*((struct tagWND **)a1 + 9), 0x308u, (__int64)v3, 0LL, 1);
      ThreadUnlock1(v5, v4);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
  for ( i = *((_QWORD *)a1 + 15); i; i = *(_QWORD *)(i + 280) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(i + 16) + 376LL);
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 824);
    else
      v8 = 0LL;
    v9 = CountNumClipFormatForIL(v8, (__int64)a1);
    PostMessage(i, 797LL, v9, 0LL);
  }
}
