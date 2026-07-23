/*
 * XREFs of RtlpTpIoLookup @ 0x18008DBE0
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x18008DA90 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlSplay @ 0x18006D740 (RtlSplay.c)
 *     TpBindFileToDirect @ 0x1800779E4 (TpBindFileToDirect.c)
 *     RtlpTpIoAlloc @ 0x18008DD2C (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(__int64 *a1, unsigned __int64 a2, void *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  NTSTATUS v9; // esi
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v6 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v7 = v6 - 96;
      v13 = v6 - 96;
      v8 = *(_QWORD *)(v6 - 96);
      if ( a2 == v8 )
        break;
      if ( a2 >= v8 )
      {
        v10 = *(_QWORD *)(v6 + 16);
        if ( !v10 )
        {
          v9 = RtlpTpIoAlloc(&v13, a2, a3);
          v7 = v13;
          if ( !v13 )
            goto LABEL_16;
          v11 = (__int64 *)(v13 + 96);
          *(_QWORD *)(v6 + 16) = v13 + 96;
          goto LABEL_14;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v6 + 8);
        if ( !v10 )
        {
          v9 = RtlpTpIoAlloc(&v13, a2, a3);
          v7 = v13;
          if ( !v13 )
            goto LABEL_16;
          v11 = (__int64 *)(v13 + 96);
          *(_QWORD *)(v6 + 8) = v13 + 96;
LABEL_14:
          *v11 = v6;
          goto LABEL_16;
        }
      }
      v6 = v10;
    }
    v9 = TpBindFileToDirect(a3, v7 + 8, *(_QWORD *)(v7 + 80));
    if ( v9 >= 0 )
      ++*(_DWORD *)(v7 + 88);
  }
  else
  {
    v9 = RtlpTpIoAlloc(&v13, a2, a3);
    v7 = v13;
  }
LABEL_16:
  if ( v7 && RtlpTpIoTree != v7 + 96 )
    RtlpTpIoTree = (__int64)RtlSplay((PRTL_SPLAY_LINKS)(v7 + 96));
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v7;
  return (unsigned int)v9;
}
