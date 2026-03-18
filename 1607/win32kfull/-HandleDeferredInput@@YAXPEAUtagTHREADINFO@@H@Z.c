/*
 * XREFs of ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0008554
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SetInputServiceState @ 0x1C01234D0 (_SetInputServiceState.c)
 * Callees:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 */

void __fastcall HandleDeferredInput(struct tagTHREADINFO *a1, int a2)
{
  __int64 **v2; // rdi
  __int64 *i; // rdx
  __int64 *j; // rbx
  int v7; // eax

  v2 = (__int64 **)*((_QWORD *)a1 + 48);
  for ( i = *v2; i; i = (__int64 *)*i )
  {
    if ( (*((_DWORD *)i + 25) & 0x8000) != 0 && (struct tagTHREADINFO *)i[13] == a1 )
    {
      *(_DWORD *)(i[13] + 1096) &= ~0x1000000u;
      *((_DWORD *)i + 25) = *((_DWORD *)i + 25) & 0xFFFE7FFF | 0x10000;
      ++*((_DWORD *)v2 + 4);
      if ( a2 )
      {
        if ( i == v2[6] )
          v2[6] = 0LL;
        DelQEntry(v2, i, 1LL);
      }
      else
      {
        WakeSomeone(v2, a1, *((unsigned int *)i + 6), i);
      }
      for ( j = *v2; j; j = (__int64 *)*j )
      {
        v7 = *((_DWORD *)j + 25);
        if ( (v7 & 0x20000) != 0 && ((struct tagTHREADINFO *)j[13] == a1 || *((_DWORD *)j + 24) == 4) )
        {
          *((_DWORD *)j + 25) = v7 & 0xFFFDFFFF;
          ++*((_DWORD *)v2 + 4);
          WakeSomeone(v2, a1, *((unsigned int *)j + 6), j);
        }
      }
      return;
    }
  }
}
