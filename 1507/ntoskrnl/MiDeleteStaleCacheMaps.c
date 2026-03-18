/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x140011D2C
 * Callers:
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

unsigned __int64 MiDeleteStaleCacheMaps()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rbp
  int v2; // edi
  __int64 v3; // rdx
  int v4; // ecx
  unsigned __int64 *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rax
  _UNKNOWN ***v9; // r8
  _QWORD *v10; // rdx
  signed __int32 v11[16]; // [rsp+30h] [rbp+30h] BYREF
  _BYTE v12[48]; // [rsp+70h] [rbp+70h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+A8h] BYREF

  result = (unsigned __int64)&retaddr;
  v1 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( (__int64 *)qword_14034F660 != &qword_14034F660 )
  {
    _InterlockedOr(v11, 0);
    v2 = KiCacheFlushTimeStamp;
    result = (unsigned int)(KiCacheFlushTimeStamp - dword_14034F670);
    if ( (unsigned int)result > 2 || (dword_14034F670 & 1) == 0 && (unsigned int)result >= 2 )
    {
      *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)v1 = v1;
      KeAcquireInStackQueuedSpinLock(&qword_14034F640, (PKLOCK_QUEUE_HANDLE)(v1 + 16));
      while ( (__int64 *)qword_14034F660 != &qword_14034F660 )
      {
        v3 = qword_14034F660 - 24;
        v4 = *(_DWORD *)(qword_14034F660 - 24 + 56);
        if ( (unsigned int)(v2 - v4) <= 2 && ((v4 & 1) != 0 || (unsigned int)(v2 - v4) < 2) )
          break;
        v5 = (unsigned __int64 *)qword_14034F660;
        v6 = *(_QWORD *)qword_14034F660;
        v7 = *(_QWORD **)(v3 + 32);
        if ( *(_QWORD *)(*(_QWORD *)qword_14034F660 + 8LL) != qword_14034F660 || *v7 != qword_14034F660 )
          __fastfail(3u);
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        RtlAvlRemoveNode(&qword_14034F658, v3);
        v8 = *(_QWORD *)v1;
        --qword_14034F678;
        v5[1] = v1;
        *v5 = v8;
        if ( *(_QWORD *)(v8 + 8) != v1 )
          __fastfail(3u);
        *(_QWORD *)(v8 + 8) = v5;
        *(_QWORD *)v1 = v5;
      }
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v1 + 16));
      while ( 1 )
      {
        result = *(_QWORD *)v1;
        if ( *(_QWORD *)v1 == v1 )
          break;
        v9 = *(_UNKNOWN ****)result;
        v10 = *(_QWORD **)(result + 8);
        if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v10 != result )
          __fastfail(3u);
        *v10 = v9;
        v9[1] = (_UNKNOWN **)v10;
        ExFreePoolWithTag((PVOID)(result - 24), 0);
      }
    }
  }
  return result;
}
