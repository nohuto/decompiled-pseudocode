/*
 * XREFs of AlpcpAllocateMessageLog @ 0x140654C00
 * Callers:
 *     AlpcpEnterAllocationEventMessageLog @ 0x140654E20 (AlpcpEnterAllocationEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 AlpcpAllocateMessageLog()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 **v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 **v8; // r8

  result = AlpcpFreeMessageLogListHead;
  if ( (__int64 *)AlpcpFreeMessageLogListHead == &AlpcpFreeMessageLogListHead )
  {
    result = AlpcpMessageLogListHead;
    if ( (__int64 *)AlpcpMessageLogListHead == &AlpcpMessageLogListHead )
    {
      return 0LL;
    }
    else
    {
      v2 = *(_QWORD *)AlpcpMessageLogListHead;
      if ( *(__int64 **)(AlpcpMessageLogListHead + 8) != &AlpcpMessageLogListHead
        || *(_QWORD *)(v2 + 8) != AlpcpMessageLogListHead )
      {
        __fastfail(3u);
      }
      AlpcpMessageLogListHead = *(_QWORD *)AlpcpMessageLogListHead;
      *(_QWORD *)(v2 + 8) = &AlpcpMessageLogListHead;
      *(_DWORD *)(result + 44) = 0;
      v3 = *(_QWORD *)(result + 16);
      v4 = *(_QWORD **)(result + 24);
      if ( *(_QWORD *)(v3 + 8) != result + 16 || *v4 != result + 16 )
        __fastfail(3u);
      *v4 = v3;
      v5 = (__int64 **)(result + 48);
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
    }
  }
  else
  {
    v1 = *(_QWORD *)AlpcpFreeMessageLogListHead;
    if ( *(__int64 **)(AlpcpFreeMessageLogListHead + 8) != &AlpcpFreeMessageLogListHead
      || *(_QWORD *)(v1 + 8) != AlpcpFreeMessageLogListHead )
    {
      __fastfail(3u);
    }
    AlpcpFreeMessageLogListHead = *(_QWORD *)AlpcpFreeMessageLogListHead;
    *(_QWORD *)(v1 + 8) = &AlpcpFreeMessageLogListHead;
  }
  return result;
}
