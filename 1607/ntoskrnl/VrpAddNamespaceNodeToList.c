/*
 * XREFs of VrpAddNamespaceNodeToList @ 0x1406143E4
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14061318C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140613440 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ULongLongMult @ 0x1401B7468 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     VrpFindExactNamespaceNode @ 0x140614D50 (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpAddNamespaceNodeToList(ULONGLONG *a1, __int64 a2)
{
  __int64 result; // rax
  ULONGLONG v4; // r14
  ULONGLONG v5; // r15
  unsigned __int64 v6; // r9
  ULONGLONG v7; // rcx
  __int64 v8; // r15
  ULONGLONG v9; // r15
  void *v10; // r13
  PVOID v11; // rax
  void *v12; // rsi
  size_t v13; // r12
  PVOID PoolWithTag; // rax
  _QWORD *v15; // rdx
  ULONGLONG v16; // rcx
  __int64 v17; // r14
  ULONGLONG v18; // r14
  void *v19; // r13
  PVOID v20; // rax
  void *v21; // rsi
  size_t v22; // r12
  PVOID v23; // rax
  _QWORD *v24; // rsi
  void *v25; // r9
  ULONGLONG NumberOfBytes; // [rsp+70h] [rbp+50h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp+58h] BYREF

  if ( VrpFindExactNamespaceNode(a1, a2, &NumberOfBytes) )
    return 3221225525LL;
  v4 = a1[6];
  v5 = NumberOfBytes;
  v6 = a1[7];
  if ( NumberOfBytes >= v4 )
  {
    if ( v4 < v6 )
      goto LABEL_23;
    v7 = v4 + 1;
    if ( v4 + 1 > v6 )
    {
      v8 = a1[8] - 1;
      if ( v8 + v7 < v7 )
        return 2147483659LL;
      v9 = (v8 + v7) & ~v8;
      if ( ULongLongMult(a1[7], a1[5], &pullResult) < 0 || ULongLongMult(v9, a1[5], &NumberOfBytes) < 0 )
      {
        result = 2147483659LL;
        goto LABEL_22;
      }
      v10 = (void *)a1[9];
      if ( v10 )
      {
        v13 = NumberOfBytes;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
          memset(PoolWithTag, 0, v13);
        if ( !v12 )
          goto LABEL_21;
        if ( pullResult < v13 )
          v13 = pullResult;
        memmove(v12, v10, v13);
        ExFreePoolWithTag(v10, 0x72615452u);
      }
      else
      {
        v11 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
        v12 = v11;
        if ( v11 )
          memset(v11, 0, NumberOfBytes);
      }
      if ( v12 )
      {
        a1[9] = (ULONGLONG)v12;
        result = 0LL;
        a1[7] = v9;
        goto LABEL_22;
      }
LABEL_21:
      result = 2147942414LL;
LABEL_22:
      if ( (_DWORD)result )
        return result;
LABEL_23:
      if ( ULongLongMult(a1[5], v4, &NumberOfBytes) >= 0 )
      {
        v15 = (_QWORD *)(a1[9] + NumberOfBytes);
        if ( (unsigned __int64)v15 >= a1[9] )
        {
          *v15 = a2;
LABEL_52:
          ++a1[6];
          return 0LL;
        }
      }
      return 2147483659LL;
    }
    return 2147942487LL;
  }
  if ( v4 >= v6 )
  {
    v16 = v4 + 1;
    if ( v4 + 1 <= v6 )
      return 2147942487LL;
    v17 = a1[8] - 1;
    if ( v17 + v16 < v16 )
      return 2147483659LL;
    v18 = (v17 + v16) & ~v17;
    if ( ULongLongMult(a1[7], a1[5], &pullResult) < 0 || ULongLongMult(v18, a1[5], &NumberOfBytes) < 0 )
    {
      result = 2147483659LL;
      goto LABEL_45;
    }
    v19 = (void *)a1[9];
    if ( v19 )
    {
      v22 = NumberOfBytes;
      v23 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v21 = v23;
      if ( v23 )
        memset(v23, 0, v22);
      if ( !v21 )
        goto LABEL_44;
      if ( pullResult < v22 )
        v22 = pullResult;
      memmove(v21, v19, v22);
      ExFreePoolWithTag(v19, 0x72615452u);
    }
    else
    {
      v20 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v21 = v20;
      if ( v20 )
        memset(v20, 0, NumberOfBytes);
    }
    if ( v21 )
    {
      a1[9] = (ULONGLONG)v21;
      result = 0LL;
      a1[7] = v18;
      goto LABEL_45;
    }
LABEL_44:
    result = 2147942414LL;
LABEL_45:
    if ( (_DWORD)result )
      return result;
  }
  if ( ULongLongMult(a1[5], v5, &NumberOfBytes) >= 0 )
  {
    v24 = (_QWORD *)(a1[9] + NumberOfBytes);
    if ( (unsigned __int64)v24 >= a1[9]
      && ULongLongMult(a1[5], v5 + 1, &NumberOfBytes) >= 0
      && a1[9] + NumberOfBytes >= a1[9]
      && ULongLongMult(a1[6] - v5, a1[5], &NumberOfBytes) >= 0 )
    {
      memmove(v25, v24, NumberOfBytes);
      *v24 = a2;
      goto LABEL_52;
    }
  }
  return 2147483659LL;
}
