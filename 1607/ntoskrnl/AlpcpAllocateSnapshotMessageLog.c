/*
 * XREFs of AlpcpAllocateSnapshotMessageLog @ 0x140654CF8
 * Callers:
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654FBC (AlpcpEnterStateChangeEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 AlpcpAllocateSnapshotMessageLog()
{
  __int64 result; // rax
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 **v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 **v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rcx

  while ( 1 )
  {
    result = AlpcpFreeMessageSnapshotListHead;
    if ( (__int64 *)AlpcpFreeMessageSnapshotListHead != &AlpcpFreeMessageSnapshotListHead )
      break;
    v1 = AlpcpMessageLogListHead;
    if ( (__int64 *)AlpcpMessageLogListHead == &AlpcpMessageLogListHead )
      return 0LL;
    v2 = *(_QWORD *)AlpcpMessageLogListHead;
    if ( *(__int64 **)(AlpcpMessageLogListHead + 8) != &AlpcpMessageLogListHead
      || *(_QWORD *)(v2 + 8) != AlpcpMessageLogListHead )
    {
      __fastfail(3u);
    }
    AlpcpMessageLogListHead = *(_QWORD *)AlpcpMessageLogListHead;
    *(_QWORD *)(v2 + 8) = &AlpcpMessageLogListHead;
    *(_DWORD *)(v1 + 44) = 0;
    v3 = *(_QWORD *)(v1 + 16);
    v4 = *(_QWORD **)(v1 + 24);
    if ( *(_QWORD *)(v3 + 8) != v1 + 16 || *v4 != v1 + 16 )
      __fastfail(3u);
    *v4 = v3;
    v5 = (__int64 **)(v1 + 48);
    *(_QWORD *)(v3 + 8) = v4;
    while ( *v5 != (__int64 *)v5 )
    {
      v6 = *v5;
      v7 = **v5;
      if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
        __fastfail(3u);
      *v5 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v5;
      v8 = (__int64 **)qword_1403073A8;
      if ( *(__int64 **)qword_1403073A8 != &AlpcpFreeMessageSnapshotListHead )
        __fastfail(3u);
      *v6 = (__int64)&AlpcpFreeMessageSnapshotListHead;
      v6[1] = (__int64)v8;
      *v8 = v6;
      qword_1403073A8 = (__int64)v6;
    }
    v9 = (__int64 *)qword_140307378;
    if ( *(__int64 **)qword_140307378 != &AlpcpFreeMessageLogListHead )
      __fastfail(3u);
    *(_QWORD *)v1 = &AlpcpFreeMessageLogListHead;
    *(_QWORD *)(v1 + 8) = v9;
    *v9 = v1;
    qword_140307378 = v1;
  }
  v10 = *(_QWORD *)AlpcpFreeMessageSnapshotListHead;
  if ( *(__int64 **)(AlpcpFreeMessageSnapshotListHead + 8) != &AlpcpFreeMessageSnapshotListHead
    || *(_QWORD *)(v10 + 8) != AlpcpFreeMessageSnapshotListHead )
  {
    __fastfail(3u);
  }
  AlpcpFreeMessageSnapshotListHead = *(_QWORD *)AlpcpFreeMessageSnapshotListHead;
  *(_QWORD *)(v10 + 8) = &AlpcpFreeMessageSnapshotListHead;
  return result;
}
