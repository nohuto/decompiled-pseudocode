/*
 * XREFs of DeferMessagesOnQueue @ 0x1C01CAE88
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     IsHiddenByInputService @ 0x1C0058034 (IsHiddenByInputService.c)
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01CAD44 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

struct tagQMSG *__fastcall DeferMessagesOnQueue(struct tagMLIST *a1, struct tagQMSG *a2)
{
  int v2; // r10d
  struct tagMLIST *v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  struct tagQMSG *v9; // r9

  v2 = 0;
  v3 = a1;
  if ( a2 )
  {
    do
    {
      v4 = *((_QWORD *)a2 + 13);
      if ( !v4 || (*(_DWORD *)(v4 + 440) & 0x10000) == 0 )
        break;
      v5 = (_QWORD *)*((_QWORD *)a2 + 1);
      v6 = *(_QWORD *)a2;
      if ( v5 )
        *v5 = v6;
      else
        *(_QWORD *)v3 = v6;
      v7 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)a2 )
        *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v7;
      else
        *((_QWORD *)v3 + 1) = v7;
      *((_QWORD *)a2 + 1) = 0LL;
      *(_QWORD *)a2 = 0LL;
      DeferMessage(v3, a2);
      if ( !IsHiddenByInputService(v8) )
        ++v2;
      a2 = v9;
    }
    while ( v9 );
  }
  *((_DWORD *)v3 + 4) -= v2;
  return a2;
}
