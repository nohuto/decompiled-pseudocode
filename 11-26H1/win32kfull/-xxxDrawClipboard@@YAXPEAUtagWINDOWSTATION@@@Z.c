/*
 * XREFs of ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401AF5E0
 * Callers:
 *     xxxSetClipboardViewer @ 0x1401AF468 (xxxSetClipboardViewer.c)
 *     xxxCloseClipboard @ 0x1401B02A0 (xxxCloseClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14029419C (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401AF6D0 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall xxxDrawClipboard(struct tagWINDOWSTATION *a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r8
  __int64 i; // rdi
  __int64 v6; // rcx
  ULONG_PTR *v7; // rax
  ULONG_PTR v8; // xmm0_8
  int v9; // eax
  int v10; // eax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+48h] [rbp-10h]

  *((_DWORD *)a1 + 8) &= ~0x40u;
  if ( !*((_QWORD *)a1 + 7) && *((_QWORD *)a1 + 9) )
  {
    v2 = PtiCurrent((__int64)a1);
    v3 = *((_QWORD *)a1 + 9);
    *((_QWORD *)a1 + 7) = v2;
    Win32HM_LockIntoThread<0>((__int64)v2, v3, &BugCheckParameter3);
    v4 = (_QWORD *)*((_QWORD *)a1 + 10);
    if ( v4 )
      v4 = (_QWORD *)*v4;
    xxxSendNotifyMessage(*((struct tagWND **)a1 + 9), 0x308u, (unsigned __int64)v4, 0LL, 1);
    *((_QWORD *)a1 + 7) = 0LL;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&BugCheckParameter3);
  }
  for ( i = *((_QWORD *)a1 + 15); i; i = *(_QWORD *)(i + 240) )
  {
    v13 = 0LL;
    v14 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(i + 16) + 456LL);
    v7 = (ULONG_PTR *)(v6 + 864);
    if ( !v6 )
      v7 = (ULONG_PTR *)&v13;
    v8 = *v7;
    v9 = *((_DWORD *)v7 + 2);
    BugCheckParameter3 = v8;
    v12 = v9;
    v10 = CountNumClipFormatForIL(&BugCheckParameter3, a1);
    PostMessage(i, 797, v10, 0);
  }
}
