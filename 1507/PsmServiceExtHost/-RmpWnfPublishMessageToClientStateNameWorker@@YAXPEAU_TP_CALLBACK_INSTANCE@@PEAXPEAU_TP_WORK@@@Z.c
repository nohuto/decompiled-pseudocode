/*
 * XREFs of ?RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B470
 * Callers:
 *     <none>
 * Callees:
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 */

void __fastcall RmpWnfPublishMessageToClientStateNameWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  char *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  char v7; // bl
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2 + 24;
LABEL_2:
  RtlAcquireSRWLockExclusive(v4);
  v5 = *(_QWORD **)a2;
  if ( *(char **)a2 != a2 )
  {
    v6 = *v5;
    if ( (char *)v5[1] != a2 || *(_QWORD **)(v6 + 8) != v5 )
      __fastfail(3u);
    *(_QWORD *)a2 = v6;
    *(_QWORD *)(v6 + 8) = a2;
    RtlReleaseSRWLockExclusive(v4);
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)RtlWaitForWnfMetaNotification(v5[2], 8LL, 15000LL, 1000LL, &v8) != 258 )
      {
        RtlPublishWnfStateData(v5[2], 0LL, (char *)v5 + 28, *((unsigned int *)v5 + 6), 0LL);
        RmpFreeHeap(v5);
        goto LABEL_2;
      }
      RtlAcquireSRWLockExclusive(v4);
      if ( a2[33] )
        break;
      RtlReleaseSRWLockExclusive(v4);
    }
    RmpFreeHeap(v5);
  }
  v7 = a2[33];
  a2[32] = 0;
  RtlReleaseSRWLockExclusive(v4);
  if ( v7 )
    RmpFreeHeap(a2);
}
