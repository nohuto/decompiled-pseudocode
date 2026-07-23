/*
 * XREFs of RtlpTpIoDllLoaded @ 0x180090038
 * Callers:
 *     RtlpTpIoDllNotification @ 0x180090020 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlDelete @ 0x1800637C0 (RtlDelete.c)
 *     TpDereferenceGlobalPool @ 0x180086728 (TpDereferenceGlobalPool.c)
 */

void __fastcall RtlpTpIoDllLoaded(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // rdi
  PRTL_SPLAY_LINKS v3; // rdx
  PRTL_SPLAY_LINKS v4; // rsi
  unsigned __int64 Parent; // rcx
  _RTL_SPLAY_LINKS *v6; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v3 = (PRTL_SPLAY_LINKS)RtlpTpIoTree;
  while ( v3 )
  {
    v4 = v3 - 4;
    Parent = (unsigned __int64)v3[-4].Parent;
    if ( Parent < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( Parent < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v3 = RtlDelete(v3);
      RtlpTpIoTree = (__int64)v3;
      v4[4].Parent = v2;
      v2 = v4;
    }
    else if ( Parent < *(_QWORD *)(a1 + 24) )
    {
LABEL_7:
      v3 = v3->RightChild;
    }
    else
    {
      v3 = v3->LeftChild;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v2 )
  {
    v6 = v2[4].Parent;
    TpDereferenceGlobalPool(v2[3].LeftChild);
    RtlFreeAnsiString((PUNICODE_STRING)&v2[5].LeftChild);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v6;
  }
}
