/*
 * XREFs of PipMergeDependencyEdgeList @ 0x14062B42C
 * Callers:
 *     PipMergeDependencyNodes @ 0x14062B56C (PipMergeDependencyNodes.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401CCF24 (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401CD0E0 (PipFreeDependencyEdge.c)
 *     PipMoveListEntries @ 0x1401CD208 (PipMoveListEntries.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PipDereferenceDependencyNode @ 0x14056840C (PipDereferenceDependencyNode.c)
 *     PipAddRequestToEdge @ 0x14062AE28 (PipAddRequestToEdge.c)
 *     PipNotifyDependenciesChanged @ 0x14062B5D0 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipMergeDependencyEdgeList(__int64 a1, __int64 a2, int a3)
{
  int v3; // r15d
  __int64 v4; // r13
  _QWORD **v6; // rsi
  __int64 *v7; // r14
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  UNICODE_STRING *v18; // r15
  PCUNICODE_STRING *v19; // rdx
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  v3 = a3;
  v4 = a2;
  if ( a3 )
  {
    v6 = (_QWORD **)(a2 + 32);
    v7 = (__int64 *)(a1 + 32);
  }
  else
  {
    v6 = (_QWORD **)(a2 + 16);
    v7 = (__int64 *)(a1 + 16);
  }
  PiPnpRtlBeginOperation((__int64 **)&P);
  v8 = *v6;
  while ( v8 != v6 )
  {
    v9 = PiListEntryToDependencyEdge((__int64)v8, v3);
    v10 = *v7;
    v11 = v9;
    v8 = (_QWORD *)*v8;
    if ( (__int64 *)*v7 == v7 )
    {
LABEL_12:
      if ( v3 )
      {
        v17 = *(_QWORD *)(v11 + 40);
        v16 = a1;
        *(_QWORD *)(v11 + 32) = a1;
      }
      else
      {
        v16 = *(_QWORD *)(v11 + 32);
        v17 = a1;
        *(_QWORD *)(v11 + 40) = a1;
      }
      PipNotifyDependenciesChanged(v17, v16);
      ++*(_DWORD *)(a1 + 88);
      PipDereferenceDependencyNode(v4);
    }
    else
    {
      while ( 1 )
      {
        v12 = PiListEntryToDependencyEdge(v10, v3);
        v10 = *v13;
        v14 = v12;
        if ( v3 ? *(_QWORD *)(v11 + 40) == *(_QWORD *)(v12 + 40) : *(_QWORD *)(v11 + 32) == *(_QWORD *)(v12 + 32) )
          break;
        if ( (__int64 *)v10 == v7 )
        {
          v4 = a2;
          goto LABEL_12;
        }
      }
      v18 = *(UNICODE_STRING **)(v11 + 56);
      while ( v18 != (UNICODE_STRING *)(v11 + 56) )
      {
        v19 = (PCUNICODE_STRING *)v18;
        v18 = *(UNICODE_STRING **)&v18->Length;
        PipAddRequestToEdge(v14, v19 + 2);
      }
      PipFreeDependencyEdge((char *)v11, v14);
      v3 = a3;
      v4 = a2;
    }
  }
  PipMoveListEntries(v7, (__int64)v6);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
}
