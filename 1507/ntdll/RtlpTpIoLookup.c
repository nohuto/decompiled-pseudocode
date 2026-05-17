/*
 * XREFs of RtlpTpIoLookup @ 0x18007E680
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x18007E530 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlSplay @ 0x180061490 (RtlSplay.c)
 *     TpBindFileToDirect @ 0x18007D710 (TpBindFileToDirect.c)
 *     RtlpTpIoAlloc @ 0x18007E7CC (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(__int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  char *v9; // rax
  int v10; // esi
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock, a2, a3, a4);
  v7 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v8 = v7 - 96;
      v14 = v7 - 96;
      v9 = *(char **)(v7 - 96);
      if ( a2 == v9 )
        break;
      if ( a2 >= v9 )
      {
        v11 = *(_QWORD *)(v7 + 16);
        if ( !v11 )
        {
          v10 = RtlpTpIoAlloc(&v14, a2, a3);
          v8 = v14;
          if ( !v14 )
            goto LABEL_16;
          v12 = (__int64 *)(v14 + 96);
          *(_QWORD *)(v7 + 16) = v14 + 96;
          goto LABEL_14;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8);
        if ( !v11 )
        {
          v10 = RtlpTpIoAlloc(&v14, a2, a3);
          v8 = v14;
          if ( !v14 )
            goto LABEL_16;
          v12 = (__int64 *)(v14 + 96);
          *(_QWORD *)(v7 + 8) = v14 + 96;
LABEL_14:
          *v12 = v7;
          goto LABEL_16;
        }
      }
      v7 = v11;
    }
    v10 = TpBindFileToDirect(a3, v8 + 8, *(_PEB_LDR_DATA **)(v8 + 80));
    if ( v10 >= 0 )
      ++*(_DWORD *)(v8 + 88);
  }
  else
  {
    v10 = RtlpTpIoAlloc(&v14, a2, a3);
    v8 = v14;
  }
LABEL_16:
  if ( v8 && RtlpTpIoTree != v8 + 96 )
    RtlpTpIoTree = RtlSplay(v8 + 96);
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v8;
  return (unsigned int)v10;
}
