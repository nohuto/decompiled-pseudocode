/*
 * XREFs of AlpcpInitializeMessageLog @ 0x14057C480
 * Callers:
 *     AlpcpInitSystem @ 0x14057C1B8 (AlpcpInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AlpcpInitializeMessageLog(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rcx
  char *v8; // rbp
  char *v9; // r8
  PVOID v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rax
  char *v13; // rcx
  char **v14; // rax
  __int64 **v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rax

  v2 = 0;
  AlpcpMessageLogLock = 0LL;
  qword_140307388 = (__int64)&AlpcpMessageLogListHead;
  AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
  qword_140307378 = (__int64)&AlpcpFreeMessageLogListHead;
  AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
  qword_1403073A8 = (__int64)&AlpcpFreeMessageSnapshotListHead;
  AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
  if ( !a1 || !a2 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x4000uLL, 0x6C4D6C41u);
  AlpcpMessageLogLookupTable = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 1024LL;
    do
    {
      PoolWithTag[1] = PoolWithTag;
      *PoolWithTag = PoolWithTag;
      PoolWithTag += 2;
      --v7;
    }
    while ( v7 );
    v8 = (char *)ExAllocatePoolWithTag(PagedPool, a1 << 6, 0x6C4D6C41u);
    if ( !v8 )
    {
      v10 = AlpcpMessageLogLookupTable;
      goto LABEL_11;
    }
    v9 = (char *)ExAllocatePoolWithTag(PagedPool, 120 * a2, 0x734D6C41u);
    if ( !v9 )
    {
      ExFreePoolWithTag(AlpcpMessageLogLookupTable, 0);
      v10 = v8;
LABEL_11:
      ExFreePoolWithTag(v10, 0);
      return 3221225626LL;
    }
    v11 = 0;
    if ( a1 )
    {
      v12 = 0LL;
      do
      {
        v13 = &v8[64 * v12];
        *((_QWORD *)v13 + 7) = v13 + 48;
        *((_QWORD *)v13 + 6) = v13 + 48;
        v14 = (char **)qword_140307378;
        if ( *(__int64 **)qword_140307378 != &AlpcpFreeMessageLogListHead )
          __fastfail(3u);
        *((_QWORD *)v13 + 1) = qword_140307378;
        ++v11;
        *(_QWORD *)v13 = &AlpcpFreeMessageLogListHead;
        *v14 = v13;
        v12 = v11;
        qword_140307378 = (__int64)v13;
      }
      while ( v11 < a1 );
    }
    if ( a2 )
    {
      v15 = (__int64 **)qword_1403073A8;
      v16 = 0LL;
      do
      {
        v17 = (__int64 *)&v9[120 * v16];
        if ( *v15 != &AlpcpFreeMessageSnapshotListHead )
          __fastfail(3u);
        v17[1] = (__int64)v15;
        ++v2;
        *v17 = (__int64)&AlpcpFreeMessageSnapshotListHead;
        *v15 = v17;
        v15 = (__int64 **)v17;
        qword_1403073A8 = (__int64)v17;
        v16 = v2;
      }
      while ( v2 < a2 );
    }
    return 0LL;
  }
  return 3221225626LL;
}
