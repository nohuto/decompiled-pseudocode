/*
 * XREFs of FindNSObj @ 0x1C0012060
 * Callers:
 *     FindNSObj @ 0x1C0012060 (FindNSObj.c)
 *     FindNSObjMainNoLock @ 0x1C0018E60 (FindNSObjMainNoLock.c)
 * Callees:
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     FindNSObj @ 0x1C0012060 (FindNSObj.c)
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 *     GetObjectPathNoLock @ 0x1C0015640 (GetObjectPathNoLock.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall FindNSObj(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r10d
  int v7; // eax
  int v8; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  __int64 ObjectPathNoLock; // rax
  size_t v13; // rbx
  _BYTE *v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v25; // rdi
  unsigned int NSObj; // eax
  unsigned int Size; // [rsp+30h] [rbp-38h]
  unsigned int Size_4; // [rsp+34h] [rbp-34h]
  void *v29; // [rsp+38h] [rbp-30h]
  char *v30; // [rsp+40h] [rbp-28h]
  int v32; // [rsp+80h] [rbp+18h]
  int v33; // [rsp+88h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v6 = a1;
  v7 = a4;
  v8 = a6;
  v10 = -1073741772;
  if ( (a6 & 1) != 0 && (!a2 || a4 && a2 != a4 && *(_QWORD *)(a2 + 16) != a3) || !a2 )
    return v10;
  if ( v6 != *(_DWORD *)(a2 + 32) && (a6 & 2) == 0 )
  {
LABEL_28:
    v23 = *(_QWORD *)(a2 + 24);
    if ( v23 )
    {
      while ( 1 )
      {
        v25 = *(_QWORD *)(v23 + 8);
        if ( v25 == *(_QWORD *)(a2 + 24) )
          v25 = 0LL;
        NSObj = FindNSObj(v6, v23, a3, v7, a5, v8);
        v10 = NSObj;
        if ( NSObj != -1073741772 )
        {
          if ( NSObj )
            break;
        }
        v7 = v33;
        v23 = v25;
        v8 = a6;
        LODWORD(a3) = v32;
        v6 = a1;
        if ( !v25 )
          return v10;
      }
    }
    return v10;
  }
  v11 = *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL);
  Size_4 = v11 + 1;
  if ( v11 + 1 < v11 )
    return 3221225621LL;
  v29 = (void *)HeapAlloc(gpheapGlobal, 1381258056, v11 + 1);
  ObjectPathNoLock = GetObjectPathNoLock(a2);
  v13 = -1LL;
  v14 = (_BYTE *)ObjectPathNoLock;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_BYTE *)(ObjectPathNoLock + v15) );
  Size = v15 + *(_DWORD *)(a5 + 24) + 1;
  v30 = (char *)HeapAlloc(gpheapGlobal, 1381258056, Size);
  if ( v30 && v29 )
  {
    memset(v29, 0, Size_4);
    memset(v30, 0, Size);
    v16 = *(_DWORD *)(a5 + 24);
    if ( v16 )
      memmove(v30, *(const void **)(a5 + 32), v16);
    v17 = *(_QWORD *)(a5 + 8);
    v18 = *(_DWORD *)(v17 + 24);
    if ( v18 )
      memmove(v29, *(const void **)(v17 + 32), v18);
    do
      ++v13;
    while ( v14[v13] );
    memmove(&v30[*(unsigned int *)(a5 + 24)], v14, v13);
    v19 = *(unsigned int *)(*(_QWORD *)(a5 + 8) + 24LL);
    if ( *(_QWORD *)(a2 + 24) )
      *((_BYTE *)v29 + v19) = 49;
    else
      *((_BYTE *)v29 + v19) = 48;
    if ( *(_DWORD *)(a5 + 24) )
    {
      v20 = *(_QWORD *)(a5 + 32);
      *(_DWORD *)(v20 - 16) = 0;
      byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v20 - 8));
      KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
    }
    v21 = *(_QWORD *)(a5 + 8);
    if ( *(_DWORD *)(v21 + 24) )
    {
      v22 = *(_QWORD *)(v21 + 32);
      *(_DWORD *)(v22 - 16) = 0;
      byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v22 - 8));
      KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
    }
    ++*(_QWORD *)(a5 + 16);
    v10 = 0;
    *(_QWORD *)(a5 + 32) = v30;
    *(_DWORD *)(a5 + 24) = Size;
    *(_QWORD *)(*(_QWORD *)(a5 + 8) + 32LL) = v29;
    *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL) = Size_4;
    ++*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v6 = a1;
    LODWORD(a3) = v32;
    v8 = a6;
    v7 = v33;
    goto LABEL_28;
  }
  return 3221225626LL;
}
