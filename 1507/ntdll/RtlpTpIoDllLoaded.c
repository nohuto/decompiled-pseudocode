/*
 * XREFs of RtlpTpIoDllLoaded @ 0x18007ED38
 * Callers:
 *     RtlpTpIoDllNotification @ 0x18007ED20 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlDelete @ 0x1800616A0 (RtlDelete.c)
 *     TpDereferenceGlobalPool @ 0x18007D790 (TpDereferenceGlobalPool.c)
 */

void __fastcall RtlpTpIoDllLoaded(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // rdi
  PRTL_SPLAY_LINKS v3; // rdx
  PRTL_SPLAY_LINKS v4; // rsi
  unsigned __int64 Parent; // rcx
  __int64 v6; // rdx
  _RTL_SPLAY_LINKS *v7; // [rsp+20h] [rbp-18h]

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
    v7 = v2[4].Parent;
    TpDereferenceGlobalPool(v2[3].LeftChild, v6);
    RtlFreeAnsiString((PUNICODE_STRING)&v2[5].LeftChild);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v7;
  }
}
