/*
 * XREFs of RtlpTpIoDllLoaded @ 0x18008D098
 * Callers:
 *     RtlpTpIoDllNotification @ 0x18008D080 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlDelete @ 0x18006D950 (RtlDelete.c)
 *     TpDereferenceGlobalPool @ 0x180082298 (TpDereferenceGlobalPool.c)
 */

signed __int64 __fastcall RtlpTpIoDllLoaded(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int64 *v6; // rdx
  __int64 *v7; // rsi
  unsigned __int64 v8; // rcx
  signed __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // [rsp+20h] [rbp-18h]

  v5 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoTreeLock, a2, a3, a4);
  v6 = (__int64 *)RtlpTpIoTree;
  while ( v6 )
  {
    v7 = v6 - 12;
    v8 = *(v6 - 12);
    if ( v8 < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( v8 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v6 = RtlDelete(v6);
      RtlpTpIoTree = (__int64)v6;
      v7[12] = v5;
      v5 = (unsigned __int64)v7;
    }
    else if ( v8 < *(_QWORD *)(a1 + 24) )
    {
LABEL_7:
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v6 = (__int64 *)v6[1];
    }
  }
  result = RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v5 )
  {
    v13 = *(_QWORD *)(v5 + 96);
    TpDereferenceGlobalPool(*(_QWORD *)(v5 + 80), v10, v11, v12);
    RtlFreeAnsiString((PUNICODE_STRING)(v5 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    v5 = v13;
  }
  return result;
}
