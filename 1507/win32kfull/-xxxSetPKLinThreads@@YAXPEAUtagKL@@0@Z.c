/*
 * XREFs of ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C013AE4C
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0139D2C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     xxxChangeForegroundKeyboardTable @ 0x1C00472A4 (xxxChangeForegroundKeyboardTable.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C013B05C (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E3250 (xxxImmActivateAndUnloadThreadsLayout.c)
 */

void __fastcall xxxSetPKLinThreads(struct tagKL *a1, struct tagKL *a2)
{
  __int64 ThreadsWithPKL; // rsi
  struct tagTHREADINFO **v5; // r14
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF
  struct tagTHREADINFO **v7; // [rsp+60h] [rbp+8h] BYREF

  ThreadsWithPKL = GetThreadsWithPKL(&v7, (struct _TL *)v6, a2);
  if ( a1 && gptiForeground && *(struct tagKL **)(gptiForeground + 400LL) == a2 )
    xxxChangeForegroundKeyboardTable(a2, a1);
  if ( (_DWORD)ThreadsWithPKL )
  {
    if ( a2 )
    {
      xxxImmActivateAndUnloadThreadsLayout((_DWORD)v7, ThreadsWithPKL, 0, (_DWORD)a1, *((_DWORD *)a2 + 10));
    }
    else
    {
      v5 = v7;
      do
      {
        HMAssignmentLock((char *)*v5++ + 400, a1);
        --ThreadsWithPKL;
      }
      while ( ThreadsWithPKL );
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v6);
  }
  if ( a2 )
  {
    if ( *((struct tagKL **)a2 + 2) != a1 )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
      *((_QWORD *)a1 + 3) = a2;
      *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = a1;
      *((_QWORD *)a2 + 2) = a1;
    }
  }
}
