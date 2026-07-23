/*
 * XREFs of PipAddRequestToEdge @ 0x14062AE28
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1401CCF30 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipCreateNewDependencyEdge @ 0x1401CCFC8 (PipCreateNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14062B42C (PipMergeDependencyEdgeList.c)
 * Callees:
 *     PipMergeDependencyTypes @ 0x1401CD1D0 (PipMergeDependencyTypes.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlDuplicateUnicodeString @ 0x1403F6E40 (RtlDuplicateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     PipFreeBindingRequestEntry @ 0x14062B3B4 (PipFreeBindingRequestEntry.c)
 */

_DWORD *__fastcall PipAddRequestToEdge(__int64 a1, PCUNICODE_STRING *a2)
{
  _QWORD *v2; // r14
  _DWORD *v3; // rbx
  _QWORD *v4; // r15
  _DWORD *v5; // rdi
  _QWORD *v8; // rbp
  int v9; // ecx
  _DWORD *PoolWithTag; // rax
  int v11; // eax
  UNICODE_STRING *v12; // rax
  _QWORD *v13; // rax

  v2 = (_QWORD *)(a1 + 56);
  v3 = 0LL;
  v4 = *(_QWORD **)(a1 + 56);
  v5 = 0LL;
  if ( v4 == (_QWORD *)(a1 + 56) )
  {
LABEL_13:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x53706E50u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return v3;
    PoolWithTag[8] = *((_DWORD *)a2 + 4);
    v11 = *(_DWORD *)a2;
    v3[4] = *(_DWORD *)a2;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v12 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x53706E50u);
        *((_QWORD *)v3 + 3) = v12;
        if ( RtlDuplicateUnicodeString(0, a2[1], v12) < 0 )
        {
          PipFreeBindingRequestEntry(v3);
          return 0LL;
        }
      }
    }
    else
    {
      *((_QWORD *)v3 + 3) = a2[1];
    }
    v13 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v13 != v2 )
      __fastfail(3u);
    *(_QWORD *)v3 = v2;
    *((_QWORD *)v3 + 1) = v13;
    *v13 = v3;
    v2[1] = v3;
  }
  else
  {
    while ( !v5 )
    {
      v8 = v4;
      v4 = (_QWORD *)*v4;
      v9 = *((_DWORD *)v8 + 4);
      if ( v9 == *(_DWORD *)a2 )
      {
        if ( v9 )
        {
          if ( v9 == 1 && RtlEqualUnicodeString((PCUNICODE_STRING)v8[3], a2[1], 0) )
            v5 = v8;
        }
        else if ( (PCUNICODE_STRING)v8[3] == a2[1] )
        {
          v5 = v8;
        }
      }
      if ( v4 == v2 )
      {
        if ( !v5 )
          goto LABEL_13;
        break;
      }
    }
    v5[8] |= *((_DWORD *)a2 + 4);
  }
  if ( v5 )
    v3 = v5;
  if ( v3 )
    PipMergeDependencyTypes(a1, *((_DWORD *)a2 + 4));
  return v3;
}
