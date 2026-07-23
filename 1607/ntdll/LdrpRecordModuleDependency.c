/*
 * XREFs of LdrpRecordModuleDependency @ 0x18007390C
 * Callers:
 *     LdrpBuildForwarderLink @ 0x180073878 (LdrpBuildForwarderLink.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     LdrpDependencyExist @ 0x1800739FC (LdrpDependencyExist.c)
 */

_DWORD *__fastcall LdrpRecordModuleDependency(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  _DWORD *v7; // r8
  int v8; // ecx
  _DWORD *Heap; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  int v14; // eax
  int v15; // eax

  v4 = *(_QWORD *)(a1 + 152);
  v6 = *(_QWORD *)(a2 + 152);
  if ( (unsigned __int8)LdrpDependencyExist(v4, v6) )
  {
    v8 = *(_DWORD *)(v6 + 24);
    if ( (unsigned int)(v8 - 2) <= 0xFFFFFFFC )
      *(_DWORD *)(v6 + 24) = v8 - 1;
    return v7;
  }
  if ( v7 )
  {
LABEL_8:
    v11 = *(_QWORD **)(v4 + 40);
    if ( v11 )
    {
      *(_QWORD *)v7 = *v11;
      *v11 = v7;
    }
    else
    {
      *(_QWORD *)v7 = v7;
    }
    *(_QWORD *)(v4 + 40) = v7;
    v12 = v7 + 4;
    *((_QWORD *)v7 + 1) = v6;
    v13 = *(_QWORD **)(v6 + 48);
    if ( v13 )
    {
      *v12 = *v13;
      *v13 = v12;
    }
    else
    {
      *v12 = v12;
    }
    *(_QWORD *)(v6 + 48) = v12;
    v14 = v7[6];
    *((_QWORD *)v7 + 3) = v4;
    v15 = v14 & 1;
    if ( v15 )
    {
      v7[6] &= ~1u;
      v7[6] |= v15 & 1;
    }
    return 0LL;
  }
  Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
  v7 = Heap;
  if ( Heap )
  {
    Heap[6] |= 1u;
    goto LABEL_8;
  }
  *a4 = -1073741801;
  return 0LL;
}
