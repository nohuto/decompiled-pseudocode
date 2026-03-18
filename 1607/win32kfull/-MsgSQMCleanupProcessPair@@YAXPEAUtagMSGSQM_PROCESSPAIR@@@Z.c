/*
 * XREFs of ?MsgSQMCleanupProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01E36B0
 * Callers:
 *     ?MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01E3868 (-MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMCleanupProcessPair(struct tagMSGSQM_PROCESSPAIR *a1)
{
  __int64 v1; // rdx
  struct tagMSGSQM_PROCESSPAIR **v2; // rax
  char *v3; // rdx
  __int64 v4; // r8
  char **v5; // rax

  if ( a1 && !*((_QWORD *)a1 + 6) )
  {
    v1 = *(_QWORD *)a1;
    v2 = (struct tagMSGSQM_PROCESSPAIR **)*((_QWORD *)a1 + 1);
    if ( *(struct tagMSGSQM_PROCESSPAIR **)(*(_QWORD *)a1 + 8LL) != a1 || *v2 != a1 )
      __fastfail(3u);
    *v2 = (struct tagMSGSQM_PROCESSPAIR *)v1;
    *(_QWORD *)(v1 + 8) = v2;
    v3 = (char *)a1 + 16;
    v4 = *((_QWORD *)a1 + 2);
    v5 = (char **)*((_QWORD *)a1 + 3);
    if ( *(struct tagMSGSQM_PROCESSPAIR **)(v4 + 8) != (struct tagMSGSQM_PROCESSPAIR *)((char *)a1 + 16) || *v5 != v3 )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    Win32FreePool(a1, v3, v4);
  }
}
