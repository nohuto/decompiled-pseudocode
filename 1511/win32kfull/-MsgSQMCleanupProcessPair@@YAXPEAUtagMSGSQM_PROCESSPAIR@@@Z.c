/*
 * XREFs of ?MsgSQMCleanupProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01ECAF8
 * Callers:
 *     ?MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01ECCB0 (-MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMCleanupProcessPair(struct tagMSGSQM_PROCESSPAIR *a1)
{
  __int64 v1; // rdx
  struct tagMSGSQM_PROCESSPAIR **v2; // rax
  __int64 v3; // r8
  struct tagMSGSQM_PROCESSPAIR **v4; // rax

  if ( a1 && !*((_QWORD *)a1 + 6) )
  {
    v1 = *(_QWORD *)a1;
    v2 = (struct tagMSGSQM_PROCESSPAIR **)*((_QWORD *)a1 + 1);
    if ( *(struct tagMSGSQM_PROCESSPAIR **)(*(_QWORD *)a1 + 8LL) != a1 || *v2 != a1 )
      __fastfail(3u);
    *v2 = (struct tagMSGSQM_PROCESSPAIR *)v1;
    *(_QWORD *)(v1 + 8) = v2;
    v3 = *((_QWORD *)a1 + 2);
    v4 = (struct tagMSGSQM_PROCESSPAIR **)*((_QWORD *)a1 + 3);
    if ( *(struct tagMSGSQM_PROCESSPAIR **)(v3 + 8) != (struct tagMSGSQM_PROCESSPAIR *)((char *)a1 + 16)
      || *v4 != (struct tagMSGSQM_PROCESSPAIR *)((char *)a1 + 16) )
    {
      __fastfail(3u);
    }
    *v4 = (struct tagMSGSQM_PROCESSPAIR *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    Win32FreePool(a1);
  }
}
